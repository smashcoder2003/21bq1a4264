import pynecone as pc

config = pc.Config(
    app_name="pyneproject",
    db_url="sqlite:///pynecone.db",
    env=pc.Env.DEV,
)
