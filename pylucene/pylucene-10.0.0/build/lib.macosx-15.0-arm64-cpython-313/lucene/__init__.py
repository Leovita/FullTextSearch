
import os
import sys
if sys.platform == 'win32':
  from .windows import add_jvm_dll_directory_to_path
  add_jvm_dll_directory_to_path('client')
from . import _lucene

__module_dir__ = os.path.abspath(os.path.dirname(__file__))

class JavaError(Exception):
  def getJavaException(self):
    return self.args[0]
  def __str__(self):
    writer = StringWriter()
    self.getJavaException().printStackTrace(PrintWriter(writer))
    return "\n".join((str(super(JavaError, self)), "    Java stacktrace:", str(writer)))

class InvalidArgsError(Exception):
  pass

_lucene._set_exception_types(JavaError, InvalidArgsError)

VERSION = "10.0.0"
CLASSPATH = [os.path.join(__module_dir__, "lucene-core-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-analysis-common-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-backward-codecs-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-classification-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-codecs-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-expressions-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-extensions-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-facet-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-grouping-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-highlighter-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-join-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-analysis-kuromoji-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-memory-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-misc-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-monitor-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-analysis-nori-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-queries-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-queryparser-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-sandbox-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-spatial3d-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-analysis-stempel-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "lucene-suggest-10.0.0-SNAPSHOT.jar"), os.path.join(__module_dir__, "antlr4-runtime-4.11.1.jar"), os.path.join(__module_dir__, "asm-9.6.jar"), os.path.join(__module_dir__, "asm-commons-9.6.jar")]
CLASSPATH = os.pathsep.join(CLASSPATH)
_lucene.CLASSPATH = CLASSPATH
_lucene._set_function_self(_lucene.initVM, _lucene)

from ._lucene import *
from java.io import PrintWriter, StringWriter

builtin_vmargs = [r"--add-modules=jdk.incubator.vector", r"--enable-native-access=ALL-UNNAMED"]
def initVM(**kwargs):
  vmargs=kwargs.pop("vmargs", [])
  return _lucene.initVM(vmargs=builtin_vmargs+vmargs, **kwargs)
