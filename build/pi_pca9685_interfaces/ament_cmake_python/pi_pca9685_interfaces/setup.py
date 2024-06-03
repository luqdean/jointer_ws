from setuptools import find_packages
from setuptools import setup

setup(
    name='pi_pca9685_interfaces',
    version='0.7.0',
    packages=find_packages(
        include=('pi_pca9685_interfaces', 'pi_pca9685_interfaces.*')),
)
