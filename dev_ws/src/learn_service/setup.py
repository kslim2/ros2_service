from setuptools import setup

package_name = 'learn_service'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mike',
    maintainer_email='mike@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "service_adder_client = learn_service.service_adder_client:main",
            "service_adder_server = learn_service.service_adder_server:main",
            "service_object_client = learn_service.service_object_client:main",
            "service_object_server = learn_service.service_object_server:main",
        ],
    },
)
