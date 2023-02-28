from setuptools import find_packages
from setuptools import setup

setup(
    name='learn_interface',
    version='0.0.0',
    packages=find_packages(
        include=('learn_interface', 'learn_interface.*')),
)
