from distutils.core import setup, Extension

module1=Extension('pyref', sources=['pyrefmodule.c'])

setup(
  name='PyRef',
  version='1.0',
  description='A module to understand how reference counting works',
  ext_modules=[module1]
)
