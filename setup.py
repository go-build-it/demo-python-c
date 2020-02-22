from setuptools import setup, Extension

setup(
    name='helloworld',
    python_requires=">=3.6",
    ext_modules=[Extension('helloworld', ['hello.c'])],
)
