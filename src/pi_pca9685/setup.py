from setuptools import find_packages, setup

package_name = 'pi_pca9685'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='clue',
    maintainer_email='you@example.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'pi_pca9685_server = ' + package_name + '.pi_pca9685_server:main',
            'pi_pca9685_client = ' + package_name + '.pi_pca9685_client:main',
            'servo_angle_publisher = ' + package_name + '.servo_angle_publisher:main',
        ],
    },
)
