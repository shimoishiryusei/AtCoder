# ベースイメージ
FROM ubuntu:latest

# 必要なパッケージをインストール
RUN apt-get update && apt-get install -y \
    build-essential \
    gdb \
    cmake \
    clang \
    lldb \
    lcov \
    g++ \
    libssl-dev \
    wget \
    curl \
    git \
    vim \
    python3 \
    python3-pip \
    python3-venv \
    python3-setuptools \
    python3-wheel \
    && apt-get clean

# 仮想環境の作成
RUN python3 -m venv /opt/venv

# 仮想環境をアクティベートし、仮想環境内で必要なパッケージをインストール
RUN . /opt/venv/bin/activate && \
    pip install --upgrade pip setuptools wheel && \
    pip install 'markupsafe==2.0.1' && \
    pip install appdirs colorama requests

# 仮想環境をアクティベートして AtCoder Tools をインストール
RUN . /opt/venv/bin/activate && \
    git clone https://github.com/kyuridenamida/atcoder-tools.git /tmp/atcoder-tools && \
    pip install /tmp/atcoder-tools && \
    rm -rf /tmp/atcoder-tools

# 環境変数で仮想環境のPythonを優先
ENV PATH="/opt/venv/bin:$PATH"

# 一般ユーザーを作成して切り替え
RUN useradd -m devuser
USER devuser
WORKDIR /home/devuser

# VSCode Remote - Containers の設定
CMD [ "/bin/bash" ]