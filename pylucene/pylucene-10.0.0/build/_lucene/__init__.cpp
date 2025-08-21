#include <jni.h>
#include <Python.h>
#include "JCCEnv.h"
#include "functions.h"

PyObject *initVM(PyObject *module, PyObject *args, PyObject *kwds);
PyObject *getJavaModule(PyObject *module, const char *parent, const char *name);

namespace java {
  void __install__(PyObject *module);
  void __initialize__(PyObject *module);
}
namespace org {
  void __install__(PyObject *module);
  void __initialize__(PyObject *module);
}

void __install__(PyObject *module)
{
  java::__install__(module);
  org::__install__(module);
}

PyObject *__initialize__(PyObject *module, PyObject *args, PyObject *kwds)
{
  PyObject *env = initVM(module, args, kwds);

  if (env == NULL)
    return NULL;

  try {
    java::__initialize__(module);
    org::__initialize__(module);
    return env;
  } catch (int e) {
    switch(e) {
      case _EXC_JAVA:
      return PyErr_SetJavaError();
      default:
      throw;
    }
  }
}


namespace java {

  namespace io {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace lang {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace nio {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace text {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace util {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }

  void __install__(PyObject *module)
  {
    module = getJavaModule(module, "", "java");

    io::__install__(module);
    lang::__install__(module);
    nio::__install__(module);
    text::__install__(module);
    util::__install__(module);
  }

  void __initialize__(PyObject *module)
  {
    module = getJavaModule(module, "", "java");

    io::__initialize__(module);
    lang::__initialize__(module);
    nio::__initialize__(module);
    text::__initialize__(module);
    util::__initialize__(module);
  }
}

#include "java/io/BufferedReader.h"
#include "java/io/BufferedWriter.h"
#include "java/io/Closeable.h"
#include "java/io/Console.h"
#include "java/io/DataInput.h"
#include "java/io/DataOutput.h"
#include "java/io/EOFException.h"
#include "java/io/File.h"
#include "java/io/FileDescriptor.h"
#include "java/io/FileFilter.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/FilenameFilter.h"
#include "java/io/FilterOutputStream.h"
#include "java/io/Flushable.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#include "java/io/PrintStream.h"
#include "java/io/PrintWriter.h"
#include "java/io/Reader.h"
#include "java/io/Serializable.h"
#include "java/io/StringReader.h"
#include "java/io/StringWriter.h"
#include "java/io/SyncFailedException.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/io/Writer.h"

namespace java {
  namespace io {


    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "io");

      t_BufferedReader::install(module);
      t_BufferedWriter::install(module);
      t_Closeable::install(module);
      t_Console::install(module);
      t_DataInput::install(module);
      t_DataOutput::install(module);
      t_EOFException::install(module);
      t_File::install(module);
      t_FileDescriptor::install(module);
      t_FileFilter::install(module);
      t_FileNotFoundException::install(module);
      t_FilenameFilter::install(module);
      t_FilterOutputStream::install(module);
      t_Flushable::install(module);
      t_IOException::install(module);
      t_InputStream::install(module);
      t_OutputStream::install(module);
      t_PrintStream::install(module);
      t_PrintWriter::install(module);
      t_Reader::install(module);
      t_Serializable::install(module);
      t_StringReader::install(module);
      t_StringWriter::install(module);
      t_SyncFailedException::install(module);
      t_UnsupportedEncodingException::install(module);
      t_Writer::install(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "io");

      t_BufferedReader::initialize(module);
      t_BufferedWriter::initialize(module);
      t_Closeable::initialize(module);
      t_Console::initialize(module);
      t_DataInput::initialize(module);
      t_DataOutput::initialize(module);
      t_EOFException::initialize(module);
      t_File::initialize(module);
      t_FileDescriptor::initialize(module);
      t_FileFilter::initialize(module);
      t_FileNotFoundException::initialize(module);
      t_FilenameFilter::initialize(module);
      t_FilterOutputStream::initialize(module);
      t_Flushable::initialize(module);
      t_IOException::initialize(module);
      t_InputStream::initialize(module);
      t_OutputStream::initialize(module);
      t_PrintStream::initialize(module);
      t_PrintWriter::initialize(module);
      t_Reader::initialize(module);
      t_Serializable::initialize(module);
      t_StringReader::initialize(module);
      t_StringWriter::initialize(module);
      t_SyncFailedException::initialize(module);
      t_UnsupportedEncodingException::initialize(module);
      t_Writer::initialize(module);
    }
  }
}

#include "java/lang/AbstractStringBuilder.h"
#include "java/lang/Appendable.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/Boolean.h"
#include "java/lang/Byte.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Character.h"
#include "java/lang/Class.h"
#include "java/lang/ClassLoader.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/CloneNotSupportedException.h"
#include "java/lang/Cloneable.h"
#include "java/lang/Comparable.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "java/lang/Enum$EnumDesc.h"
#include "java/lang/Error.h"
#include "java/lang/Exception.h"
#include "java/lang/Float.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/InstantiationException.h"
#include "java/lang/Integer.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/Iterable.h"
#include "java/lang/Long.h"
#include "java/lang/Module.h"
#include "java/lang/ModuleLayer.h"
#include "java/lang/ModuleLayer$Controller.h"
#include "java/lang/NamedPackage.h"
#include "java/lang/NoSuchFieldException.h"
#include "java/lang/Number.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Object.h"
#include "java/lang/Package.h"
#include "java/lang/Process.h"
#include "java/lang/ProcessHandle.h"
#include "java/lang/ProcessHandle$Info.h"
#include "java/lang/Readable.h"
#include "java/lang/Record.h"
#include "java/lang/ReflectiveOperationException.h"
#include "java/lang/Runnable.h"
#include "java/lang/Runtime.h"
#include "java/lang/Runtime$Version.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/SecurityException.h"
#include "java/lang/SecurityManager.h"
#include "java/lang/Short.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/String.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/System.h"
#include "java/lang/System$Logger.h"
#include "java/lang/System$Logger$Level.h"
#include "java/lang/Thread.h"
#include "java/lang/Thread$Builder.h"
#include "java/lang/Thread$Builder$OfPlatform.h"
#include "java/lang/Thread$Builder$OfVirtual.h"
#include "java/lang/Thread$State.h"
#include "java/lang/Thread$UncaughtExceptionHandler.h"
#include "java/lang/ThreadGroup.h"
#include "java/lang/Throwable.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/Void.h"

namespace java {
  namespace lang {

    namespace constant {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace ref {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "lang");

      t_AbstractStringBuilder::install(module);
      t_Appendable::install(module);
      t_AutoCloseable::install(module);
      t_Boolean::install(module);
      t_Byte::install(module);
      t_CharSequence::install(module);
      t_Character::install(module);
      t_Class::install(module);
      t_ClassLoader::install(module);
      t_ClassNotFoundException::install(module);
      t_CloneNotSupportedException::install(module);
      t_Cloneable::install(module);
      t_Comparable::install(module);
      t_Double::install(module);
      t_Enum::install(module);
      t_Enum$EnumDesc::install(module);
      t_Error::install(module);
      t_Exception::install(module);
      t_Float::install(module);
      t_IllegalAccessException::install(module);
      t_IllegalArgumentException::install(module);
      t_IllegalStateException::install(module);
      t_IndexOutOfBoundsException::install(module);
      t_InstantiationException::install(module);
      t_Integer::install(module);
      t_InterruptedException::install(module);
      t_Iterable::install(module);
      t_Long::install(module);
      t_Module::install(module);
      t_ModuleLayer::install(module);
      t_ModuleLayer$Controller::install(module);
      t_NamedPackage::install(module);
      t_NoSuchFieldException::install(module);
      t_Number::install(module);
      t_NumberFormatException::install(module);
      t_Object::install(module);
      t_Package::install(module);
      t_Process::install(module);
      t_ProcessHandle::install(module);
      t_ProcessHandle$Info::install(module);
      t_Readable::install(module);
      t_Record::install(module);
      t_ReflectiveOperationException::install(module);
      t_Runnable::install(module);
      t_Runtime::install(module);
      t_Runtime$Version::install(module);
      t_RuntimeException::install(module);
      t_SecurityException::install(module);
      t_SecurityManager::install(module);
      t_Short::install(module);
      t_StackTraceElement::install(module);
      t_String::install(module);
      t_StringBuffer::install(module);
      t_StringBuilder::install(module);
      t_System::install(module);
      t_System$Logger::install(module);
      t_System$Logger$Level::install(module);
      t_Thread::install(module);
      t_Thread$Builder::install(module);
      t_Thread$Builder$OfPlatform::install(module);
      t_Thread$Builder$OfVirtual::install(module);
      t_Thread$State::install(module);
      t_Thread$UncaughtExceptionHandler::install(module);
      t_ThreadGroup::install(module);
      t_Throwable::install(module);
      t_UnsupportedOperationException::install(module);
      t_Void::install(module);
      constant::__install__(module);
      ref::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "lang");

      t_AbstractStringBuilder::initialize(module);
      t_Appendable::initialize(module);
      t_AutoCloseable::initialize(module);
      t_Boolean::initialize(module);
      t_Byte::initialize(module);
      t_CharSequence::initialize(module);
      t_Character::initialize(module);
      t_Class::initialize(module);
      t_ClassLoader::initialize(module);
      t_ClassNotFoundException::initialize(module);
      t_CloneNotSupportedException::initialize(module);
      t_Cloneable::initialize(module);
      t_Comparable::initialize(module);
      t_Double::initialize(module);
      t_Enum::initialize(module);
      t_Enum$EnumDesc::initialize(module);
      t_Error::initialize(module);
      t_Exception::initialize(module);
      t_Float::initialize(module);
      t_IllegalAccessException::initialize(module);
      t_IllegalArgumentException::initialize(module);
      t_IllegalStateException::initialize(module);
      t_IndexOutOfBoundsException::initialize(module);
      t_InstantiationException::initialize(module);
      t_Integer::initialize(module);
      t_InterruptedException::initialize(module);
      t_Iterable::initialize(module);
      t_Long::initialize(module);
      t_Module::initialize(module);
      t_ModuleLayer::initialize(module);
      t_ModuleLayer$Controller::initialize(module);
      t_NamedPackage::initialize(module);
      t_NoSuchFieldException::initialize(module);
      t_Number::initialize(module);
      t_NumberFormatException::initialize(module);
      t_Object::initialize(module);
      t_Package::initialize(module);
      t_Process::initialize(module);
      t_ProcessHandle::initialize(module);
      t_ProcessHandle$Info::initialize(module);
      t_Readable::initialize(module);
      t_Record::initialize(module);
      t_ReflectiveOperationException::initialize(module);
      t_Runnable::initialize(module);
      t_Runtime::initialize(module);
      t_Runtime$Version::initialize(module);
      t_RuntimeException::initialize(module);
      t_SecurityException::initialize(module);
      t_SecurityManager::initialize(module);
      t_Short::initialize(module);
      t_StackTraceElement::initialize(module);
      t_String::initialize(module);
      t_StringBuffer::initialize(module);
      t_StringBuilder::initialize(module);
      t_System::initialize(module);
      t_System$Logger::initialize(module);
      t_System$Logger$Level::initialize(module);
      t_Thread::initialize(module);
      t_Thread$Builder::initialize(module);
      t_Thread$Builder$OfPlatform::initialize(module);
      t_Thread$Builder$OfVirtual::initialize(module);
      t_Thread$State::initialize(module);
      t_Thread$UncaughtExceptionHandler::initialize(module);
      t_ThreadGroup::initialize(module);
      t_Throwable::initialize(module);
      t_UnsupportedOperationException::initialize(module);
      t_Void::initialize(module);
      constant::__initialize__(module);
      ref::__initialize__(module);
    }
  }
}

#include "java/lang/constant/DynamicConstantDesc.h"

namespace java {
  namespace lang {
    namespace constant {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "java.lang", "constant");

        t_DynamicConstantDesc::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "java.lang", "constant");

        t_DynamicConstantDesc::initialize(module);
      }
    }
  }
}

#include "java/lang/ref/PhantomReference.h"
#include "java/lang/ref/Reference.h"

namespace java {
  namespace lang {
    namespace ref {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "java.lang", "ref");

        t_PhantomReference::install(module);
        t_Reference::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "java.lang", "ref");

        t_PhantomReference::initialize(module);
        t_Reference::initialize(module);
      }
    }
  }
}


namespace java {
  namespace nio {

    namespace file {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "nio");

      file::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "nio");

      file::__initialize__(module);
    }
  }
}

#include "java/nio/file/CopyOption.h"
#include "java/nio/file/DirectoryStream.h"
#include "java/nio/file/DirectoryStream$Filter.h"
#include "java/nio/file/FileStore.h"
#include "java/nio/file/FileSystem.h"
#include "java/nio/file/FileVisitOption.h"
#include "java/nio/file/FileVisitResult.h"
#include "java/nio/file/FileVisitor.h"
#include "java/nio/file/Files.h"
#include "java/nio/file/LinkOption.h"
#include "java/nio/file/OpenOption.h"
#include "java/nio/file/Path.h"
#include "java/nio/file/PathMatcher.h"
#include "java/nio/file/Paths.h"
#include "java/nio/file/WatchEvent.h"
#include "java/nio/file/WatchEvent$Kind.h"
#include "java/nio/file/WatchEvent$Modifier.h"
#include "java/nio/file/WatchKey.h"
#include "java/nio/file/WatchService.h"
#include "java/nio/file/Watchable.h"

namespace java {
  namespace nio {
    namespace file {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "java.nio", "file");

        t_CopyOption::install(module);
        t_DirectoryStream::install(module);
        t_DirectoryStream$Filter::install(module);
        t_FileStore::install(module);
        t_FileSystem::install(module);
        t_FileVisitOption::install(module);
        t_FileVisitResult::install(module);
        t_FileVisitor::install(module);
        t_Files::install(module);
        t_LinkOption::install(module);
        t_OpenOption::install(module);
        t_Path::install(module);
        t_PathMatcher::install(module);
        t_Paths::install(module);
        t_WatchEvent::install(module);
        t_WatchEvent$Kind::install(module);
        t_WatchEvent$Modifier::install(module);
        t_WatchKey::install(module);
        t_WatchService::install(module);
        t_Watchable::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "java.nio", "file");

        t_CopyOption::initialize(module);
        t_DirectoryStream::initialize(module);
        t_DirectoryStream$Filter::initialize(module);
        t_FileStore::initialize(module);
        t_FileSystem::initialize(module);
        t_FileVisitOption::initialize(module);
        t_FileVisitResult::initialize(module);
        t_FileVisitor::initialize(module);
        t_Files::initialize(module);
        t_LinkOption::initialize(module);
        t_OpenOption::initialize(module);
        t_Path::initialize(module);
        t_PathMatcher::initialize(module);
        t_Paths::initialize(module);
        t_WatchEvent::initialize(module);
        t_WatchEvent$Kind::initialize(module);
        t_WatchEvent$Modifier::initialize(module);
        t_WatchKey::initialize(module);
        t_WatchService::initialize(module);
        t_Watchable::initialize(module);
      }
    }
  }
}

#include "java/text/BreakIterator.h"
#include "java/text/Collator.h"
#include "java/text/DateFormat.h"
#include "java/text/DecimalFormat.h"
#include "java/text/Format.h"
#include "java/text/NumberFormat.h"
#include "java/text/SimpleDateFormat.h"

namespace java {
  namespace text {


    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "text");

      t_BreakIterator::install(module);
      t_Collator::install(module);
      t_DateFormat::install(module);
      t_DecimalFormat::install(module);
      t_Format::install(module);
      t_NumberFormat::install(module);
      t_SimpleDateFormat::install(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "text");

      t_BreakIterator::initialize(module);
      t_Collator::initialize(module);
      t_DateFormat::initialize(module);
      t_DecimalFormat::initialize(module);
      t_Format::initialize(module);
      t_NumberFormat::initialize(module);
      t_SimpleDateFormat::initialize(module);
    }
  }
}

#include "java/util/AbstractCollection.h"
#include "java/util/AbstractList.h"
#include "java/util/AbstractMap.h"
#include "java/util/AbstractSequentialList.h"
#include "java/util/AbstractSet.h"
#include "java/util/ArrayList.h"
#include "java/util/Arrays.h"
#include "java/util/BitSet.h"
#include "java/util/Calendar.h"
#include "java/util/Collection.h"
#include "java/util/Collections.h"
#include "java/util/Comparator.h"
#include "java/util/Currency.h"
#include "java/util/Date.h"
#include "java/util/Deque.h"
#include "java/util/Dictionary.h"
#include "java/util/Enumeration.h"
#include "java/util/HashMap.h"
#include "java/util/HashSet.h"
#include "java/util/Hashtable.h"
#include "java/util/IdentityHashMap.h"
#include "java/util/InvalidPropertiesFormatException.h"
#include "java/util/Iterator.h"
#include "java/util/LinkedHashMap.h"
#include "java/util/LinkedList.h"
#include "java/util/List.h"
#include "java/util/ListIterator.h"
#include "java/util/Locale.h"
#include "java/util/Locale$Category.h"
#include "java/util/Locale$FilteringMode.h"
#include "java/util/Locale$IsoCountryCode.h"
#include "java/util/Locale$LanguageRange.h"
#include "java/util/Map.h"
#include "java/util/Map$Entry.h"
#include "java/util/MissingResourceException.h"
#include "java/util/NavigableMap.h"
#include "java/util/NavigableSet.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Optional.h"
#include "java/util/PrimitiveIterator.h"
#include "java/util/PrimitiveIterator$OfInt.h"
#include "java/util/Properties.h"
#include "java/util/Queue.h"
#include "java/util/Random.h"
#include "java/util/RandomAccess.h"
#include "java/util/ResourceBundle.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/util/SequencedCollection.h"
#include "java/util/SequencedMap.h"
#include "java/util/SequencedSet.h"
#include "java/util/Set.h"
#include "java/util/SortedMap.h"
#include "java/util/SortedSet.h"
#include "java/util/Spliterator.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/util/Spliterator$OfPrimitive.h"
#include "java/util/SplittableRandom.h"
#include "java/util/TimeZone.h"
#include "java/util/TreeSet.h"

namespace java {
  namespace util {

    namespace concurrent {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace function {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace regex {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "util");

      t_AbstractCollection::install(module);
      t_AbstractList::install(module);
      t_AbstractMap::install(module);
      t_AbstractSequentialList::install(module);
      t_AbstractSet::install(module);
      t_ArrayList::install(module);
      t_Arrays::install(module);
      t_BitSet::install(module);
      t_Calendar::install(module);
      t_Collection::install(module);
      t_Collections::install(module);
      t_Comparator::install(module);
      t_Currency::install(module);
      t_Date::install(module);
      t_Deque::install(module);
      t_Dictionary::install(module);
      t_Enumeration::install(module);
      t_HashMap::install(module);
      t_HashSet::install(module);
      t_Hashtable::install(module);
      t_IdentityHashMap::install(module);
      t_InvalidPropertiesFormatException::install(module);
      t_Iterator::install(module);
      t_LinkedHashMap::install(module);
      t_LinkedList::install(module);
      t_List::install(module);
      t_ListIterator::install(module);
      t_Locale::install(module);
      t_Locale$Category::install(module);
      t_Locale$FilteringMode::install(module);
      t_Locale$IsoCountryCode::install(module);
      t_Locale$LanguageRange::install(module);
      t_Map::install(module);
      t_Map$Entry::install(module);
      t_MissingResourceException::install(module);
      t_NavigableMap::install(module);
      t_NavigableSet::install(module);
      t_NoSuchElementException::install(module);
      t_Optional::install(module);
      t_PrimitiveIterator::install(module);
      t_PrimitiveIterator$OfInt::install(module);
      t_Properties::install(module);
      t_Queue::install(module);
      t_Random::install(module);
      t_RandomAccess::install(module);
      t_ResourceBundle::install(module);
      t_ResourceBundle$Control::install(module);
      t_SequencedCollection::install(module);
      t_SequencedMap::install(module);
      t_SequencedSet::install(module);
      t_Set::install(module);
      t_SortedMap::install(module);
      t_SortedSet::install(module);
      t_Spliterator::install(module);
      t_Spliterator$OfDouble::install(module);
      t_Spliterator$OfInt::install(module);
      t_Spliterator$OfLong::install(module);
      t_Spliterator$OfPrimitive::install(module);
      t_SplittableRandom::install(module);
      t_TimeZone::install(module);
      t_TreeSet::install(module);
      concurrent::__install__(module);
      function::__install__(module);
      regex::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "util");

      t_AbstractCollection::initialize(module);
      t_AbstractList::initialize(module);
      t_AbstractMap::initialize(module);
      t_AbstractSequentialList::initialize(module);
      t_AbstractSet::initialize(module);
      t_ArrayList::initialize(module);
      t_Arrays::initialize(module);
      t_BitSet::initialize(module);
      t_Calendar::initialize(module);
      t_Collection::initialize(module);
      t_Collections::initialize(module);
      t_Comparator::initialize(module);
      t_Currency::initialize(module);
      t_Date::initialize(module);
      t_Deque::initialize(module);
      t_Dictionary::initialize(module);
      t_Enumeration::initialize(module);
      t_HashMap::initialize(module);
      t_HashSet::initialize(module);
      t_Hashtable::initialize(module);
      t_IdentityHashMap::initialize(module);
      t_InvalidPropertiesFormatException::initialize(module);
      t_Iterator::initialize(module);
      t_LinkedHashMap::initialize(module);
      t_LinkedList::initialize(module);
      t_List::initialize(module);
      t_ListIterator::initialize(module);
      t_Locale::initialize(module);
      t_Locale$Category::initialize(module);
      t_Locale$FilteringMode::initialize(module);
      t_Locale$IsoCountryCode::initialize(module);
      t_Locale$LanguageRange::initialize(module);
      t_Map::initialize(module);
      t_Map$Entry::initialize(module);
      t_MissingResourceException::initialize(module);
      t_NavigableMap::initialize(module);
      t_NavigableSet::initialize(module);
      t_NoSuchElementException::initialize(module);
      t_Optional::initialize(module);
      t_PrimitiveIterator::initialize(module);
      t_PrimitiveIterator$OfInt::initialize(module);
      t_Properties::initialize(module);
      t_Queue::initialize(module);
      t_Random::initialize(module);
      t_RandomAccess::initialize(module);
      t_ResourceBundle::initialize(module);
      t_ResourceBundle$Control::initialize(module);
      t_SequencedCollection::initialize(module);
      t_SequencedMap::initialize(module);
      t_SequencedSet::initialize(module);
      t_Set::initialize(module);
      t_SortedMap::initialize(module);
      t_SortedSet::initialize(module);
      t_Spliterator::initialize(module);
      t_Spliterator$OfDouble::initialize(module);
      t_Spliterator$OfInt::initialize(module);
      t_Spliterator$OfLong::initialize(module);
      t_Spliterator$OfPrimitive::initialize(module);
      t_SplittableRandom::initialize(module);
      t_TimeZone::initialize(module);
      t_TreeSet::initialize(module);
      concurrent::__initialize__(module);
      function::__initialize__(module);
      regex::__initialize__(module);
    }
  }
}

#include "java/util/concurrent/AbstractExecutorService.h"
#include "java/util/concurrent/Callable.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/concurrent/CompletionStage.h"
#include "java/util/concurrent/Delayed.h"
#include "java/util/concurrent/ExecutionException.h"
#include "java/util/concurrent/Executor.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/util/concurrent/Executors.h"
#include "java/util/concurrent/Future.h"
#include "java/util/concurrent/Future$State.h"
#include "java/util/concurrent/ScheduledExecutorService.h"
#include "java/util/concurrent/ScheduledFuture.h"
#include "java/util/concurrent/ThreadFactory.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/TimeoutException.h"

namespace java {
  namespace util {
    namespace concurrent {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "java.util", "concurrent");

        t_AbstractExecutorService::install(module);
        t_Callable::install(module);
        t_CompletableFuture::install(module);
        t_CompletionStage::install(module);
        t_Delayed::install(module);
        t_ExecutionException::install(module);
        t_Executor::install(module);
        t_ExecutorService::install(module);
        t_Executors::install(module);
        t_Future::install(module);
        t_Future$State::install(module);
        t_ScheduledExecutorService::install(module);
        t_ScheduledFuture::install(module);
        t_ThreadFactory::install(module);
        t_TimeUnit::install(module);
        t_TimeoutException::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "java.util", "concurrent");

        t_AbstractExecutorService::initialize(module);
        t_Callable::initialize(module);
        t_CompletableFuture::initialize(module);
        t_CompletionStage::initialize(module);
        t_Delayed::initialize(module);
        t_ExecutionException::initialize(module);
        t_Executor::initialize(module);
        t_ExecutorService::initialize(module);
        t_Executors::initialize(module);
        t_Future::initialize(module);
        t_Future$State::initialize(module);
        t_ScheduledExecutorService::initialize(module);
        t_ScheduledFuture::initialize(module);
        t_ThreadFactory::initialize(module);
        t_TimeUnit::initialize(module);
        t_TimeoutException::initialize(module);
      }
    }
  }
}

#include "java/util/function/BiConsumer.h"
#include "java/util/function/BiFunction.h"
#include "java/util/function/BiPredicate.h"
#include "java/util/function/BinaryOperator.h"
#include "java/util/function/BooleanSupplier.h"
#include "java/util/function/Consumer.h"
#include "java/util/function/DoubleBinaryOperator.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/util/function/DoublePredicate.h"
#include "java/util/function/Function.h"
#include "java/util/function/IntBinaryOperator.h"
#include "java/util/function/IntConsumer.h"
#include "java/util/function/IntFunction.h"
#include "java/util/function/IntPredicate.h"
#include "java/util/function/IntToDoubleFunction.h"
#include "java/util/function/IntToLongFunction.h"
#include "java/util/function/IntUnaryOperator.h"
#include "java/util/function/LongBinaryOperator.h"
#include "java/util/function/LongConsumer.h"
#include "java/util/function/LongToDoubleFunction.h"
#include "java/util/function/Predicate.h"
#include "java/util/function/Supplier.h"
#include "java/util/function/ToDoubleFunction.h"
#include "java/util/function/ToIntFunction.h"
#include "java/util/function/ToLongFunction.h"
#include "java/util/function/UnaryOperator.h"

namespace java {
  namespace util {
    namespace function {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "java.util", "function");

        t_BiConsumer::install(module);
        t_BiFunction::install(module);
        t_BiPredicate::install(module);
        t_BinaryOperator::install(module);
        t_BooleanSupplier::install(module);
        t_Consumer::install(module);
        t_DoubleBinaryOperator::install(module);
        t_DoubleConsumer::install(module);
        t_DoublePredicate::install(module);
        t_Function::install(module);
        t_IntBinaryOperator::install(module);
        t_IntConsumer::install(module);
        t_IntFunction::install(module);
        t_IntPredicate::install(module);
        t_IntToDoubleFunction::install(module);
        t_IntToLongFunction::install(module);
        t_IntUnaryOperator::install(module);
        t_LongBinaryOperator::install(module);
        t_LongConsumer::install(module);
        t_LongToDoubleFunction::install(module);
        t_Predicate::install(module);
        t_Supplier::install(module);
        t_ToDoubleFunction::install(module);
        t_ToIntFunction::install(module);
        t_ToLongFunction::install(module);
        t_UnaryOperator::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "java.util", "function");

        t_BiConsumer::initialize(module);
        t_BiFunction::initialize(module);
        t_BiPredicate::initialize(module);
        t_BinaryOperator::initialize(module);
        t_BooleanSupplier::initialize(module);
        t_Consumer::initialize(module);
        t_DoubleBinaryOperator::initialize(module);
        t_DoubleConsumer::initialize(module);
        t_DoublePredicate::initialize(module);
        t_Function::initialize(module);
        t_IntBinaryOperator::initialize(module);
        t_IntConsumer::initialize(module);
        t_IntFunction::initialize(module);
        t_IntPredicate::initialize(module);
        t_IntToDoubleFunction::initialize(module);
        t_IntToLongFunction::initialize(module);
        t_IntUnaryOperator::initialize(module);
        t_LongBinaryOperator::initialize(module);
        t_LongConsumer::initialize(module);
        t_LongToDoubleFunction::initialize(module);
        t_Predicate::initialize(module);
        t_Supplier::initialize(module);
        t_ToDoubleFunction::initialize(module);
        t_ToIntFunction::initialize(module);
        t_ToLongFunction::initialize(module);
        t_UnaryOperator::initialize(module);
      }
    }
  }
}

#include "java/util/regex/MatchResult.h"
#include "java/util/regex/Matcher.h"
#include "java/util/regex/Pattern.h"

namespace java {
  namespace util {
    namespace regex {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "java.util", "regex");

        t_MatchResult::install(module);
        t_Matcher::install(module);
        t_Pattern::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "java.util", "regex");

        t_MatchResult::initialize(module);
        t_Matcher::initialize(module);
        t_Pattern::initialize(module);
      }
    }
  }
}


namespace org {

  namespace antlr {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace apache {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace egothor {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace tartarus {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace xml {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }

  void __install__(PyObject *module)
  {
    module = getJavaModule(module, "", "org");

    antlr::__install__(module);
    apache::__install__(module);
    egothor::__install__(module);
    tartarus::__install__(module);
    xml::__install__(module);
  }

  void __initialize__(PyObject *module)
  {
    module = getJavaModule(module, "", "org");

    antlr::__initialize__(module);
    apache::__initialize__(module);
    egothor::__initialize__(module);
    tartarus::__initialize__(module);
    xml::__initialize__(module);
  }
}


namespace org {
  namespace antlr {

    namespace v4 {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "org", "antlr");

      v4::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "org", "antlr");

      v4::__initialize__(module);
    }
  }
}


namespace org {
  namespace antlr {
    namespace v4 {

      namespace runtime {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.antlr", "v4");

        runtime::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.antlr", "v4");

        runtime::__initialize__(module);
      }
    }
  }
}

#include "org/antlr/v4/runtime/ANTLRErrorListener.h"
#include "org/antlr/v4/runtime/ANTLRErrorStrategy.h"
#include "org/antlr/v4/runtime/CharStream.h"
#include "org/antlr/v4/runtime/IntStream.h"
#include "org/antlr/v4/runtime/Lexer.h"
#include "org/antlr/v4/runtime/LexerNoViableAltException.h"
#include "org/antlr/v4/runtime/NoViableAltException.h"
#include "org/antlr/v4/runtime/Parser.h"
#include "org/antlr/v4/runtime/ParserRuleContext.h"
#include "org/antlr/v4/runtime/RecognitionException.h"
#include "org/antlr/v4/runtime/Recognizer.h"
#include "org/antlr/v4/runtime/RuleContext.h"
#include "org/antlr/v4/runtime/Token.h"
#include "org/antlr/v4/runtime/TokenFactory.h"
#include "org/antlr/v4/runtime/TokenSource.h"
#include "org/antlr/v4/runtime/TokenStream.h"
#include "org/antlr/v4/runtime/Vocabulary.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        namespace atn {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace misc {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.antlr.v4", "runtime");

          t_ANTLRErrorListener::install(module);
          t_ANTLRErrorStrategy::install(module);
          t_CharStream::install(module);
          t_IntStream::install(module);
          t_Lexer::install(module);
          t_LexerNoViableAltException::install(module);
          t_NoViableAltException::install(module);
          t_Parser::install(module);
          t_ParserRuleContext::install(module);
          t_RecognitionException::install(module);
          t_Recognizer::install(module);
          t_RuleContext::install(module);
          t_Token::install(module);
          t_TokenFactory::install(module);
          t_TokenSource::install(module);
          t_TokenStream::install(module);
          t_Vocabulary::install(module);
          atn::__install__(module);
          misc::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.antlr.v4", "runtime");

          t_ANTLRErrorListener::initialize(module);
          t_ANTLRErrorStrategy::initialize(module);
          t_CharStream::initialize(module);
          t_IntStream::initialize(module);
          t_Lexer::initialize(module);
          t_LexerNoViableAltException::initialize(module);
          t_NoViableAltException::initialize(module);
          t_Parser::initialize(module);
          t_ParserRuleContext::initialize(module);
          t_RecognitionException::initialize(module);
          t_Recognizer::initialize(module);
          t_RuleContext::initialize(module);
          t_Token::initialize(module);
          t_TokenFactory::initialize(module);
          t_TokenSource::initialize(module);
          t_TokenStream::initialize(module);
          t_Vocabulary::initialize(module);
          atn::__initialize__(module);
          misc::__initialize__(module);
        }
      }
    }
  }
}

#include "org/antlr/v4/runtime/atn/ATN.h"
#include "org/antlr/v4/runtime/atn/ATNConfig.h"
#include "org/antlr/v4/runtime/atn/ATNConfigSet.h"
#include "org/antlr/v4/runtime/atn/ATNConfigSet$AbstractConfigHashSet.h"
#include "org/antlr/v4/runtime/atn/ATNSimulator.h"
#include "org/antlr/v4/runtime/atn/ATNState.h"
#include "org/antlr/v4/runtime/atn/ATNType.h"
#include "org/antlr/v4/runtime/atn/AbstractPredicateTransition.h"
#include "org/antlr/v4/runtime/atn/AmbiguityInfo.h"
#include "org/antlr/v4/runtime/atn/ArrayPredictionContext.h"
#include "org/antlr/v4/runtime/atn/ContextSensitivityInfo.h"
#include "org/antlr/v4/runtime/atn/DecisionEventInfo.h"
#include "org/antlr/v4/runtime/atn/DecisionInfo.h"
#include "org/antlr/v4/runtime/atn/DecisionState.h"
#include "org/antlr/v4/runtime/atn/ErrorInfo.h"
#include "org/antlr/v4/runtime/atn/LexerATNSimulator.h"
#include "org/antlr/v4/runtime/atn/LexerAction.h"
#include "org/antlr/v4/runtime/atn/LexerActionType.h"
#include "org/antlr/v4/runtime/atn/LookaheadEventInfo.h"
#include "org/antlr/v4/runtime/atn/ParseInfo.h"
#include "org/antlr/v4/runtime/atn/ParserATNSimulator.h"
#include "org/antlr/v4/runtime/atn/PrecedencePredicateTransition.h"
#include "org/antlr/v4/runtime/atn/PredicateEvalInfo.h"
#include "org/antlr/v4/runtime/atn/PredictionContext.h"
#include "org/antlr/v4/runtime/atn/PredictionContextCache.h"
#include "org/antlr/v4/runtime/atn/PredictionMode.h"
#include "org/antlr/v4/runtime/atn/ProfilingATNSimulator.h"
#include "org/antlr/v4/runtime/atn/RuleStartState.h"
#include "org/antlr/v4/runtime/atn/RuleStopState.h"
#include "org/antlr/v4/runtime/atn/SemanticContext.h"
#include "org/antlr/v4/runtime/atn/SemanticContext$PrecedencePredicate.h"
#include "org/antlr/v4/runtime/atn/SingletonPredictionContext.h"
#include "org/antlr/v4/runtime/atn/TokensStartState.h"
#include "org/antlr/v4/runtime/atn/Transition.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.antlr.v4.runtime", "atn");

            t_ATN::install(module);
            t_ATNConfig::install(module);
            t_ATNConfigSet::install(module);
            t_ATNConfigSet$AbstractConfigHashSet::install(module);
            t_ATNSimulator::install(module);
            t_ATNState::install(module);
            t_ATNType::install(module);
            t_AbstractPredicateTransition::install(module);
            t_AmbiguityInfo::install(module);
            t_ArrayPredictionContext::install(module);
            t_ContextSensitivityInfo::install(module);
            t_DecisionEventInfo::install(module);
            t_DecisionInfo::install(module);
            t_DecisionState::install(module);
            t_ErrorInfo::install(module);
            t_LexerATNSimulator::install(module);
            t_LexerAction::install(module);
            t_LexerActionType::install(module);
            t_LookaheadEventInfo::install(module);
            t_ParseInfo::install(module);
            t_ParserATNSimulator::install(module);
            t_PrecedencePredicateTransition::install(module);
            t_PredicateEvalInfo::install(module);
            t_PredictionContext::install(module);
            t_PredictionContextCache::install(module);
            t_PredictionMode::install(module);
            t_ProfilingATNSimulator::install(module);
            t_RuleStartState::install(module);
            t_RuleStopState::install(module);
            t_SemanticContext::install(module);
            t_SemanticContext$PrecedencePredicate::install(module);
            t_SingletonPredictionContext::install(module);
            t_TokensStartState::install(module);
            t_Transition::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.antlr.v4.runtime", "atn");

            t_ATN::initialize(module);
            t_ATNConfig::initialize(module);
            t_ATNConfigSet::initialize(module);
            t_ATNConfigSet$AbstractConfigHashSet::initialize(module);
            t_ATNSimulator::initialize(module);
            t_ATNState::initialize(module);
            t_ATNType::initialize(module);
            t_AbstractPredicateTransition::initialize(module);
            t_AmbiguityInfo::initialize(module);
            t_ArrayPredictionContext::initialize(module);
            t_ContextSensitivityInfo::initialize(module);
            t_DecisionEventInfo::initialize(module);
            t_DecisionInfo::initialize(module);
            t_DecisionState::initialize(module);
            t_ErrorInfo::initialize(module);
            t_LexerATNSimulator::initialize(module);
            t_LexerAction::initialize(module);
            t_LexerActionType::initialize(module);
            t_LookaheadEventInfo::initialize(module);
            t_ParseInfo::initialize(module);
            t_ParserATNSimulator::initialize(module);
            t_PrecedencePredicateTransition::initialize(module);
            t_PredicateEvalInfo::initialize(module);
            t_PredictionContext::initialize(module);
            t_PredictionContextCache::initialize(module);
            t_PredictionMode::initialize(module);
            t_ProfilingATNSimulator::initialize(module);
            t_RuleStartState::initialize(module);
            t_RuleStopState::initialize(module);
            t_SemanticContext::initialize(module);
            t_SemanticContext$PrecedencePredicate::initialize(module);
            t_SingletonPredictionContext::initialize(module);
            t_TokensStartState::initialize(module);
            t_Transition::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/antlr/v4/runtime/misc/Array2DHashSet.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace misc {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.antlr.v4.runtime", "misc");

            t_Array2DHashSet::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.antlr.v4.runtime", "misc");

            t_Array2DHashSet::initialize(module);
          }
        }
      }
    }
  }
}


namespace org {
  namespace apache {

    namespace lucene {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace pylucene {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "org", "apache");

      lucene::__install__(module);
      pylucene::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "org", "apache");

      lucene::__initialize__(module);
      pylucene::__initialize__(module);
    }
  }
}


namespace org {
  namespace apache {
    namespace lucene {

      namespace analysis {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace backward_codecs {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace classification {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace codecs {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace collation {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace document {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace expressions {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace facet {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace geo {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace index {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace internal {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace misc {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace monitor {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace payloads {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace queries {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace queryparser {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace sandbox {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace search {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace spatial3d {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace store {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace util {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.apache", "lucene");

        analysis::__install__(module);
        backward_codecs::__install__(module);
        classification::__install__(module);
        codecs::__install__(module);
        collation::__install__(module);
        document::__install__(module);
        expressions::__install__(module);
        facet::__install__(module);
        geo::__install__(module);
        index::__install__(module);
        internal::__install__(module);
        misc::__install__(module);
        monitor::__install__(module);
        payloads::__install__(module);
        queries::__install__(module);
        queryparser::__install__(module);
        sandbox::__install__(module);
        search::__install__(module);
        spatial3d::__install__(module);
        store::__install__(module);
        util::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.apache", "lucene");

        analysis::__initialize__(module);
        backward_codecs::__initialize__(module);
        classification::__initialize__(module);
        codecs::__initialize__(module);
        collation::__initialize__(module);
        document::__initialize__(module);
        expressions::__initialize__(module);
        facet::__initialize__(module);
        geo::__initialize__(module);
        index::__initialize__(module);
        internal::__initialize__(module);
        misc::__initialize__(module);
        monitor::__initialize__(module);
        payloads::__initialize__(module);
        queries::__initialize__(module);
        queryparser::__initialize__(module);
        sandbox::__initialize__(module);
        search::__initialize__(module);
        spatial3d::__initialize__(module);
        store::__initialize__(module);
        util::__initialize__(module);
      }
    }
  }
}

#include "org/apache/lucene/analysis/AbstractAnalysisFactory.h"
#include "org/apache/lucene/analysis/AnalysisSPILoader.h"
#include "org/apache/lucene/analysis/Analyzer.h"
#include "org/apache/lucene/analysis/Analyzer$ReuseStrategy.h"
#include "org/apache/lucene/analysis/Analyzer$TokenStreamComponents.h"
#include "org/apache/lucene/analysis/AnalyzerWrapper.h"
#include "org/apache/lucene/analysis/AutomatonToTokenStream.h"
#include "org/apache/lucene/analysis/CachingTokenFilter.h"
#include "org/apache/lucene/analysis/CharArrayMap.h"
#include "org/apache/lucene/analysis/CharArrayMap$EntryIterator.h"
#include "org/apache/lucene/analysis/CharArrayMap$EntrySet.h"
#include "org/apache/lucene/analysis/CharArraySet.h"
#include "org/apache/lucene/analysis/CharFilter.h"
#include "org/apache/lucene/analysis/CharFilterFactory.h"
#include "org/apache/lucene/analysis/CharacterUtils.h"
#include "org/apache/lucene/analysis/CharacterUtils$CharacterBuffer.h"
#include "org/apache/lucene/analysis/DelegatingAnalyzerWrapper.h"
#include "org/apache/lucene/analysis/FilteringTokenFilter.h"
#include "org/apache/lucene/analysis/GraphTokenFilter.h"
#include "org/apache/lucene/analysis/LowerCaseFilter.h"
#include "org/apache/lucene/analysis/StopFilter.h"
#include "org/apache/lucene/analysis/StopwordAnalyzerBase.h"
#include "org/apache/lucene/analysis/TokenFilter.h"
#include "org/apache/lucene/analysis/TokenFilterFactory.h"
#include "org/apache/lucene/analysis/TokenStream.h"
#include "org/apache/lucene/analysis/TokenStreamToAutomaton.h"
#include "org/apache/lucene/analysis/Tokenizer.h"
#include "org/apache/lucene/analysis/TokenizerFactory.h"
#include "org/apache/lucene/analysis/WordlistLoader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        namespace ar {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace bg {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace bn {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace boost {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace br {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ca {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace charfilter {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace cjk {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ckb {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace classic {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace commongrams {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace compound {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace core {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace custom {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace cz {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace da {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace de {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace el {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace email {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace en {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace es {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace et {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace eu {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace fa {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace fi {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace fr {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ga {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace gl {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace hi {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace hu {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace hunspell {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace hy {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace id {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace in {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace it {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ja {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ko {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lt {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lv {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace minhash {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace miscellaneous {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace morph {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ne {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ngram {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace nl {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace no {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace path {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace pattern {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace payloads {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace pl {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace pt {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace query {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace reverse {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ro {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ru {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace shingle {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace sinks {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace snowball {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace sr {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace standard {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace stempel {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace sv {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace synonym {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ta {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace te {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace th {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace tokenattributes {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace tr {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace util {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace wikipedia {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "analysis");

          t_AbstractAnalysisFactory::install(module);
          t_AnalysisSPILoader::install(module);
          t_Analyzer::install(module);
          t_Analyzer$ReuseStrategy::install(module);
          t_Analyzer$TokenStreamComponents::install(module);
          t_AnalyzerWrapper::install(module);
          t_AutomatonToTokenStream::install(module);
          t_CachingTokenFilter::install(module);
          t_CharArrayMap::install(module);
          t_CharArrayMap$EntryIterator::install(module);
          t_CharArrayMap$EntrySet::install(module);
          t_CharArraySet::install(module);
          t_CharFilter::install(module);
          t_CharFilterFactory::install(module);
          t_CharacterUtils::install(module);
          t_CharacterUtils$CharacterBuffer::install(module);
          t_DelegatingAnalyzerWrapper::install(module);
          t_FilteringTokenFilter::install(module);
          t_GraphTokenFilter::install(module);
          t_LowerCaseFilter::install(module);
          t_StopFilter::install(module);
          t_StopwordAnalyzerBase::install(module);
          t_TokenFilter::install(module);
          t_TokenFilterFactory::install(module);
          t_TokenStream::install(module);
          t_TokenStreamToAutomaton::install(module);
          t_Tokenizer::install(module);
          t_TokenizerFactory::install(module);
          t_WordlistLoader::install(module);
          ar::__install__(module);
          bg::__install__(module);
          bn::__install__(module);
          boost::__install__(module);
          br::__install__(module);
          ca::__install__(module);
          charfilter::__install__(module);
          cjk::__install__(module);
          ckb::__install__(module);
          classic::__install__(module);
          commongrams::__install__(module);
          compound::__install__(module);
          core::__install__(module);
          custom::__install__(module);
          cz::__install__(module);
          da::__install__(module);
          de::__install__(module);
          el::__install__(module);
          email::__install__(module);
          en::__install__(module);
          es::__install__(module);
          et::__install__(module);
          eu::__install__(module);
          fa::__install__(module);
          fi::__install__(module);
          fr::__install__(module);
          ga::__install__(module);
          gl::__install__(module);
          hi::__install__(module);
          hu::__install__(module);
          hunspell::__install__(module);
          hy::__install__(module);
          id::__install__(module);
          in::__install__(module);
          it::__install__(module);
          ja::__install__(module);
          ko::__install__(module);
          lt::__install__(module);
          lv::__install__(module);
          minhash::__install__(module);
          miscellaneous::__install__(module);
          morph::__install__(module);
          ne::__install__(module);
          ngram::__install__(module);
          nl::__install__(module);
          no::__install__(module);
          path::__install__(module);
          pattern::__install__(module);
          payloads::__install__(module);
          pl::__install__(module);
          pt::__install__(module);
          query::__install__(module);
          reverse::__install__(module);
          ro::__install__(module);
          ru::__install__(module);
          shingle::__install__(module);
          sinks::__install__(module);
          snowball::__install__(module);
          sr::__install__(module);
          standard::__install__(module);
          stempel::__install__(module);
          sv::__install__(module);
          synonym::__install__(module);
          ta::__install__(module);
          te::__install__(module);
          th::__install__(module);
          tokenattributes::__install__(module);
          tr::__install__(module);
          util::__install__(module);
          wikipedia::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "analysis");

          t_AbstractAnalysisFactory::initialize(module);
          t_AnalysisSPILoader::initialize(module);
          t_Analyzer::initialize(module);
          t_Analyzer$ReuseStrategy::initialize(module);
          t_Analyzer$TokenStreamComponents::initialize(module);
          t_AnalyzerWrapper::initialize(module);
          t_AutomatonToTokenStream::initialize(module);
          t_CachingTokenFilter::initialize(module);
          t_CharArrayMap::initialize(module);
          t_CharArrayMap$EntryIterator::initialize(module);
          t_CharArrayMap$EntrySet::initialize(module);
          t_CharArraySet::initialize(module);
          t_CharFilter::initialize(module);
          t_CharFilterFactory::initialize(module);
          t_CharacterUtils::initialize(module);
          t_CharacterUtils$CharacterBuffer::initialize(module);
          t_DelegatingAnalyzerWrapper::initialize(module);
          t_FilteringTokenFilter::initialize(module);
          t_GraphTokenFilter::initialize(module);
          t_LowerCaseFilter::initialize(module);
          t_StopFilter::initialize(module);
          t_StopwordAnalyzerBase::initialize(module);
          t_TokenFilter::initialize(module);
          t_TokenFilterFactory::initialize(module);
          t_TokenStream::initialize(module);
          t_TokenStreamToAutomaton::initialize(module);
          t_Tokenizer::initialize(module);
          t_TokenizerFactory::initialize(module);
          t_WordlistLoader::initialize(module);
          ar::__initialize__(module);
          bg::__initialize__(module);
          bn::__initialize__(module);
          boost::__initialize__(module);
          br::__initialize__(module);
          ca::__initialize__(module);
          charfilter::__initialize__(module);
          cjk::__initialize__(module);
          ckb::__initialize__(module);
          classic::__initialize__(module);
          commongrams::__initialize__(module);
          compound::__initialize__(module);
          core::__initialize__(module);
          custom::__initialize__(module);
          cz::__initialize__(module);
          da::__initialize__(module);
          de::__initialize__(module);
          el::__initialize__(module);
          email::__initialize__(module);
          en::__initialize__(module);
          es::__initialize__(module);
          et::__initialize__(module);
          eu::__initialize__(module);
          fa::__initialize__(module);
          fi::__initialize__(module);
          fr::__initialize__(module);
          ga::__initialize__(module);
          gl::__initialize__(module);
          hi::__initialize__(module);
          hu::__initialize__(module);
          hunspell::__initialize__(module);
          hy::__initialize__(module);
          id::__initialize__(module);
          in::__initialize__(module);
          it::__initialize__(module);
          ja::__initialize__(module);
          ko::__initialize__(module);
          lt::__initialize__(module);
          lv::__initialize__(module);
          minhash::__initialize__(module);
          miscellaneous::__initialize__(module);
          morph::__initialize__(module);
          ne::__initialize__(module);
          ngram::__initialize__(module);
          nl::__initialize__(module);
          no::__initialize__(module);
          path::__initialize__(module);
          pattern::__initialize__(module);
          payloads::__initialize__(module);
          pl::__initialize__(module);
          pt::__initialize__(module);
          query::__initialize__(module);
          reverse::__initialize__(module);
          ro::__initialize__(module);
          ru::__initialize__(module);
          shingle::__initialize__(module);
          sinks::__initialize__(module);
          snowball::__initialize__(module);
          sr::__initialize__(module);
          standard::__initialize__(module);
          stempel::__initialize__(module);
          sv::__initialize__(module);
          synonym::__initialize__(module);
          ta::__initialize__(module);
          te::__initialize__(module);
          th::__initialize__(module);
          tokenattributes::__initialize__(module);
          tr::__initialize__(module);
          util::__initialize__(module);
          wikipedia::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ar/ArabicAnalyzer.h"
#include "org/apache/lucene/analysis/ar/ArabicNormalizationFilter.h"
#include "org/apache/lucene/analysis/ar/ArabicNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/ar/ArabicStemFilter.h"
#include "org/apache/lucene/analysis/ar/ArabicStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ar {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ar");

            t_ArabicAnalyzer::install(module);
            t_ArabicNormalizationFilter::install(module);
            t_ArabicNormalizationFilterFactory::install(module);
            t_ArabicStemFilter::install(module);
            t_ArabicStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ar");

            t_ArabicAnalyzer::initialize(module);
            t_ArabicNormalizationFilter::initialize(module);
            t_ArabicNormalizationFilterFactory::initialize(module);
            t_ArabicStemFilter::initialize(module);
            t_ArabicStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/bg/BulgarianAnalyzer.h"
#include "org/apache/lucene/analysis/bg/BulgarianStemFilter.h"
#include "org/apache/lucene/analysis/bg/BulgarianStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace bg {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "bg");

            t_BulgarianAnalyzer::install(module);
            t_BulgarianStemFilter::install(module);
            t_BulgarianStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "bg");

            t_BulgarianAnalyzer::initialize(module);
            t_BulgarianStemFilter::initialize(module);
            t_BulgarianStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/bn/BengaliAnalyzer.h"
#include "org/apache/lucene/analysis/bn/BengaliNormalizationFilter.h"
#include "org/apache/lucene/analysis/bn/BengaliNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/bn/BengaliStemFilter.h"
#include "org/apache/lucene/analysis/bn/BengaliStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace bn {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "bn");

            t_BengaliAnalyzer::install(module);
            t_BengaliNormalizationFilter::install(module);
            t_BengaliNormalizationFilterFactory::install(module);
            t_BengaliStemFilter::install(module);
            t_BengaliStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "bn");

            t_BengaliAnalyzer::initialize(module);
            t_BengaliNormalizationFilter::initialize(module);
            t_BengaliNormalizationFilterFactory::initialize(module);
            t_BengaliStemFilter::initialize(module);
            t_BengaliStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/boost/DelimitedBoostTokenFilter.h"
#include "org/apache/lucene/analysis/boost/DelimitedBoostTokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace boost {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "boost");

            t_DelimitedBoostTokenFilter::install(module);
            t_DelimitedBoostTokenFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "boost");

            t_DelimitedBoostTokenFilter::initialize(module);
            t_DelimitedBoostTokenFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/br/BrazilianAnalyzer.h"
#include "org/apache/lucene/analysis/br/BrazilianStemFilter.h"
#include "org/apache/lucene/analysis/br/BrazilianStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace br {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "br");

            t_BrazilianAnalyzer::install(module);
            t_BrazilianStemFilter::install(module);
            t_BrazilianStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "br");

            t_BrazilianAnalyzer::initialize(module);
            t_BrazilianStemFilter::initialize(module);
            t_BrazilianStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ca/CatalanAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ca {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ca");

            t_CatalanAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ca");

            t_CatalanAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/charfilter/BaseCharFilter.h"
#include "org/apache/lucene/analysis/charfilter/HTMLStripCharFilter.h"
#include "org/apache/lucene/analysis/charfilter/HTMLStripCharFilterFactory.h"
#include "org/apache/lucene/analysis/charfilter/MappingCharFilter.h"
#include "org/apache/lucene/analysis/charfilter/MappingCharFilterFactory.h"
#include "org/apache/lucene/analysis/charfilter/NormalizeCharMap.h"
#include "org/apache/lucene/analysis/charfilter/NormalizeCharMap$Builder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace charfilter {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "charfilter");

            t_BaseCharFilter::install(module);
            t_HTMLStripCharFilter::install(module);
            t_HTMLStripCharFilterFactory::install(module);
            t_MappingCharFilter::install(module);
            t_MappingCharFilterFactory::install(module);
            t_NormalizeCharMap::install(module);
            t_NormalizeCharMap$Builder::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "charfilter");

            t_BaseCharFilter::initialize(module);
            t_HTMLStripCharFilter::initialize(module);
            t_HTMLStripCharFilterFactory::initialize(module);
            t_MappingCharFilter::initialize(module);
            t_MappingCharFilterFactory::initialize(module);
            t_NormalizeCharMap::initialize(module);
            t_NormalizeCharMap$Builder::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/cjk/CJKAnalyzer.h"
#include "org/apache/lucene/analysis/cjk/CJKBigramFilter.h"
#include "org/apache/lucene/analysis/cjk/CJKBigramFilterFactory.h"
#include "org/apache/lucene/analysis/cjk/CJKWidthCharFilter.h"
#include "org/apache/lucene/analysis/cjk/CJKWidthCharFilterFactory.h"
#include "org/apache/lucene/analysis/cjk/CJKWidthFilter.h"
#include "org/apache/lucene/analysis/cjk/CJKWidthFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace cjk {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "cjk");

            t_CJKAnalyzer::install(module);
            t_CJKBigramFilter::install(module);
            t_CJKBigramFilterFactory::install(module);
            t_CJKWidthCharFilter::install(module);
            t_CJKWidthCharFilterFactory::install(module);
            t_CJKWidthFilter::install(module);
            t_CJKWidthFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "cjk");

            t_CJKAnalyzer::initialize(module);
            t_CJKBigramFilter::initialize(module);
            t_CJKBigramFilterFactory::initialize(module);
            t_CJKWidthCharFilter::initialize(module);
            t_CJKWidthCharFilterFactory::initialize(module);
            t_CJKWidthFilter::initialize(module);
            t_CJKWidthFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ckb/SoraniAnalyzer.h"
#include "org/apache/lucene/analysis/ckb/SoraniNormalizationFilter.h"
#include "org/apache/lucene/analysis/ckb/SoraniNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/ckb/SoraniStemFilter.h"
#include "org/apache/lucene/analysis/ckb/SoraniStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ckb {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ckb");

            t_SoraniAnalyzer::install(module);
            t_SoraniNormalizationFilter::install(module);
            t_SoraniNormalizationFilterFactory::install(module);
            t_SoraniStemFilter::install(module);
            t_SoraniStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ckb");

            t_SoraniAnalyzer::initialize(module);
            t_SoraniNormalizationFilter::initialize(module);
            t_SoraniNormalizationFilterFactory::initialize(module);
            t_SoraniStemFilter::initialize(module);
            t_SoraniStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/classic/ClassicAnalyzer.h"
#include "org/apache/lucene/analysis/classic/ClassicFilter.h"
#include "org/apache/lucene/analysis/classic/ClassicFilterFactory.h"
#include "org/apache/lucene/analysis/classic/ClassicTokenizer.h"
#include "org/apache/lucene/analysis/classic/ClassicTokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace classic {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "classic");

            t_ClassicAnalyzer::install(module);
            t_ClassicFilter::install(module);
            t_ClassicFilterFactory::install(module);
            t_ClassicTokenizer::install(module);
            t_ClassicTokenizerFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "classic");

            t_ClassicAnalyzer::initialize(module);
            t_ClassicFilter::initialize(module);
            t_ClassicFilterFactory::initialize(module);
            t_ClassicTokenizer::initialize(module);
            t_ClassicTokenizerFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/commongrams/CommonGramsFilter.h"
#include "org/apache/lucene/analysis/commongrams/CommonGramsFilterFactory.h"
#include "org/apache/lucene/analysis/commongrams/CommonGramsQueryFilter.h"
#include "org/apache/lucene/analysis/commongrams/CommonGramsQueryFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace commongrams {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "commongrams");

            t_CommonGramsFilter::install(module);
            t_CommonGramsFilterFactory::install(module);
            t_CommonGramsQueryFilter::install(module);
            t_CommonGramsQueryFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "commongrams");

            t_CommonGramsFilter::initialize(module);
            t_CommonGramsFilterFactory::initialize(module);
            t_CommonGramsQueryFilter::initialize(module);
            t_CommonGramsQueryFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/compound/CompoundWordTokenFilterBase.h"
#include "org/apache/lucene/analysis/compound/DictionaryCompoundWordTokenFilter.h"
#include "org/apache/lucene/analysis/compound/DictionaryCompoundWordTokenFilterFactory.h"
#include "org/apache/lucene/analysis/compound/HyphenationCompoundWordTokenFilter.h"
#include "org/apache/lucene/analysis/compound/HyphenationCompoundWordTokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {

          namespace hyphenation {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "compound");

            t_CompoundWordTokenFilterBase::install(module);
            t_DictionaryCompoundWordTokenFilter::install(module);
            t_DictionaryCompoundWordTokenFilterFactory::install(module);
            t_HyphenationCompoundWordTokenFilter::install(module);
            t_HyphenationCompoundWordTokenFilterFactory::install(module);
            hyphenation::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "compound");

            t_CompoundWordTokenFilterBase::initialize(module);
            t_DictionaryCompoundWordTokenFilter::initialize(module);
            t_DictionaryCompoundWordTokenFilterFactory::initialize(module);
            t_HyphenationCompoundWordTokenFilter::initialize(module);
            t_HyphenationCompoundWordTokenFilterFactory::initialize(module);
            hyphenation::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/compound/hyphenation/ByteVector.h"
#include "org/apache/lucene/analysis/compound/hyphenation/CharVector.h"
#include "org/apache/lucene/analysis/compound/hyphenation/Hyphen.h"
#include "org/apache/lucene/analysis/compound/hyphenation/Hyphenation.h"
#include "org/apache/lucene/analysis/compound/hyphenation/HyphenationTree.h"
#include "org/apache/lucene/analysis/compound/hyphenation/PatternConsumer.h"
#include "org/apache/lucene/analysis/compound/hyphenation/PatternParser.h"
#include "org/apache/lucene/analysis/compound/hyphenation/TernaryTree.h"
#include "org/apache/lucene/analysis/compound/hyphenation/TernaryTree$Iterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.compound", "hyphenation");

              t_ByteVector::install(module);
              t_CharVector::install(module);
              t_Hyphen::install(module);
              t_Hyphenation::install(module);
              t_HyphenationTree::install(module);
              t_PatternConsumer::install(module);
              t_PatternParser::install(module);
              t_TernaryTree::install(module);
              t_TernaryTree$Iterator::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.compound", "hyphenation");

              t_ByteVector::initialize(module);
              t_CharVector::initialize(module);
              t_Hyphen::initialize(module);
              t_Hyphenation::initialize(module);
              t_HyphenationTree::initialize(module);
              t_PatternConsumer::initialize(module);
              t_PatternParser::initialize(module);
              t_TernaryTree::initialize(module);
              t_TernaryTree$Iterator::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/core/DecimalDigitFilter.h"
#include "org/apache/lucene/analysis/core/DecimalDigitFilterFactory.h"
#include "org/apache/lucene/analysis/core/FlattenGraphFilter.h"
#include "org/apache/lucene/analysis/core/FlattenGraphFilterFactory.h"
#include "org/apache/lucene/analysis/core/KeywordAnalyzer.h"
#include "org/apache/lucene/analysis/core/KeywordTokenizer.h"
#include "org/apache/lucene/analysis/core/KeywordTokenizerFactory.h"
#include "org/apache/lucene/analysis/core/LetterTokenizer.h"
#include "org/apache/lucene/analysis/core/LetterTokenizerFactory.h"
#include "org/apache/lucene/analysis/core/LowerCaseFilter.h"
#include "org/apache/lucene/analysis/core/LowerCaseFilterFactory.h"
#include "org/apache/lucene/analysis/core/SimpleAnalyzer.h"
#include "org/apache/lucene/analysis/core/StopAnalyzer.h"
#include "org/apache/lucene/analysis/core/StopFilter.h"
#include "org/apache/lucene/analysis/core/StopFilterFactory.h"
#include "org/apache/lucene/analysis/core/TypeTokenFilter.h"
#include "org/apache/lucene/analysis/core/TypeTokenFilterFactory.h"
#include "org/apache/lucene/analysis/core/UnicodeWhitespaceAnalyzer.h"
#include "org/apache/lucene/analysis/core/UnicodeWhitespaceTokenizer.h"
#include "org/apache/lucene/analysis/core/UpperCaseFilter.h"
#include "org/apache/lucene/analysis/core/UpperCaseFilterFactory.h"
#include "org/apache/lucene/analysis/core/WhitespaceAnalyzer.h"
#include "org/apache/lucene/analysis/core/WhitespaceTokenizer.h"
#include "org/apache/lucene/analysis/core/WhitespaceTokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace core {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "core");

            t_DecimalDigitFilter::install(module);
            t_DecimalDigitFilterFactory::install(module);
            t_FlattenGraphFilter::install(module);
            t_FlattenGraphFilterFactory::install(module);
            t_KeywordAnalyzer::install(module);
            t_KeywordTokenizer::install(module);
            t_KeywordTokenizerFactory::install(module);
            t_LetterTokenizer::install(module);
            t_LetterTokenizerFactory::install(module);
            t_LowerCaseFilter::install(module);
            t_LowerCaseFilterFactory::install(module);
            t_SimpleAnalyzer::install(module);
            t_StopAnalyzer::install(module);
            t_StopFilter::install(module);
            t_StopFilterFactory::install(module);
            t_TypeTokenFilter::install(module);
            t_TypeTokenFilterFactory::install(module);
            t_UnicodeWhitespaceAnalyzer::install(module);
            t_UnicodeWhitespaceTokenizer::install(module);
            t_UpperCaseFilter::install(module);
            t_UpperCaseFilterFactory::install(module);
            t_WhitespaceAnalyzer::install(module);
            t_WhitespaceTokenizer::install(module);
            t_WhitespaceTokenizerFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "core");

            t_DecimalDigitFilter::initialize(module);
            t_DecimalDigitFilterFactory::initialize(module);
            t_FlattenGraphFilter::initialize(module);
            t_FlattenGraphFilterFactory::initialize(module);
            t_KeywordAnalyzer::initialize(module);
            t_KeywordTokenizer::initialize(module);
            t_KeywordTokenizerFactory::initialize(module);
            t_LetterTokenizer::initialize(module);
            t_LetterTokenizerFactory::initialize(module);
            t_LowerCaseFilter::initialize(module);
            t_LowerCaseFilterFactory::initialize(module);
            t_SimpleAnalyzer::initialize(module);
            t_StopAnalyzer::initialize(module);
            t_StopFilter::initialize(module);
            t_StopFilterFactory::initialize(module);
            t_TypeTokenFilter::initialize(module);
            t_TypeTokenFilterFactory::initialize(module);
            t_UnicodeWhitespaceAnalyzer::initialize(module);
            t_UnicodeWhitespaceTokenizer::initialize(module);
            t_UpperCaseFilter::initialize(module);
            t_UpperCaseFilterFactory::initialize(module);
            t_WhitespaceAnalyzer::initialize(module);
            t_WhitespaceTokenizer::initialize(module);
            t_WhitespaceTokenizerFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/custom/CustomAnalyzer.h"
#include "org/apache/lucene/analysis/custom/CustomAnalyzer$Builder.h"
#include "org/apache/lucene/analysis/custom/CustomAnalyzer$ConditionBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace custom {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "custom");

            t_CustomAnalyzer::install(module);
            t_CustomAnalyzer$Builder::install(module);
            t_CustomAnalyzer$ConditionBuilder::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "custom");

            t_CustomAnalyzer::initialize(module);
            t_CustomAnalyzer$Builder::initialize(module);
            t_CustomAnalyzer$ConditionBuilder::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/cz/CzechAnalyzer.h"
#include "org/apache/lucene/analysis/cz/CzechStemFilter.h"
#include "org/apache/lucene/analysis/cz/CzechStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace cz {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "cz");

            t_CzechAnalyzer::install(module);
            t_CzechStemFilter::install(module);
            t_CzechStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "cz");

            t_CzechAnalyzer::initialize(module);
            t_CzechStemFilter::initialize(module);
            t_CzechStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/da/DanishAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace da {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "da");

            t_DanishAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "da");

            t_DanishAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/de/GermanAnalyzer.h"
#include "org/apache/lucene/analysis/de/GermanLightStemFilter.h"
#include "org/apache/lucene/analysis/de/GermanLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/de/GermanMinimalStemFilter.h"
#include "org/apache/lucene/analysis/de/GermanMinimalStemFilterFactory.h"
#include "org/apache/lucene/analysis/de/GermanNormalizationFilter.h"
#include "org/apache/lucene/analysis/de/GermanNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/de/GermanStemFilter.h"
#include "org/apache/lucene/analysis/de/GermanStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace de {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "de");

            t_GermanAnalyzer::install(module);
            t_GermanLightStemFilter::install(module);
            t_GermanLightStemFilterFactory::install(module);
            t_GermanMinimalStemFilter::install(module);
            t_GermanMinimalStemFilterFactory::install(module);
            t_GermanNormalizationFilter::install(module);
            t_GermanNormalizationFilterFactory::install(module);
            t_GermanStemFilter::install(module);
            t_GermanStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "de");

            t_GermanAnalyzer::initialize(module);
            t_GermanLightStemFilter::initialize(module);
            t_GermanLightStemFilterFactory::initialize(module);
            t_GermanMinimalStemFilter::initialize(module);
            t_GermanMinimalStemFilterFactory::initialize(module);
            t_GermanNormalizationFilter::initialize(module);
            t_GermanNormalizationFilterFactory::initialize(module);
            t_GermanStemFilter::initialize(module);
            t_GermanStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/el/GreekAnalyzer.h"
#include "org/apache/lucene/analysis/el/GreekLowerCaseFilter.h"
#include "org/apache/lucene/analysis/el/GreekLowerCaseFilterFactory.h"
#include "org/apache/lucene/analysis/el/GreekStemFilter.h"
#include "org/apache/lucene/analysis/el/GreekStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace el {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "el");

            t_GreekAnalyzer::install(module);
            t_GreekLowerCaseFilter::install(module);
            t_GreekLowerCaseFilterFactory::install(module);
            t_GreekStemFilter::install(module);
            t_GreekStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "el");

            t_GreekAnalyzer::initialize(module);
            t_GreekLowerCaseFilter::initialize(module);
            t_GreekLowerCaseFilterFactory::initialize(module);
            t_GreekStemFilter::initialize(module);
            t_GreekStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/email/UAX29URLEmailAnalyzer.h"
#include "org/apache/lucene/analysis/email/UAX29URLEmailTokenizer.h"
#include "org/apache/lucene/analysis/email/UAX29URLEmailTokenizerFactory.h"
#include "org/apache/lucene/analysis/email/UAX29URLEmailTokenizerImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace email {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "email");

            t_UAX29URLEmailAnalyzer::install(module);
            t_UAX29URLEmailTokenizer::install(module);
            t_UAX29URLEmailTokenizerFactory::install(module);
            t_UAX29URLEmailTokenizerImpl::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "email");

            t_UAX29URLEmailAnalyzer::initialize(module);
            t_UAX29URLEmailTokenizer::initialize(module);
            t_UAX29URLEmailTokenizerFactory::initialize(module);
            t_UAX29URLEmailTokenizerImpl::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/en/AbstractWordsFileFilterFactory.h"
#include "org/apache/lucene/analysis/en/EnglishAnalyzer.h"
#include "org/apache/lucene/analysis/en/EnglishMinimalStemFilter.h"
#include "org/apache/lucene/analysis/en/EnglishMinimalStemFilterFactory.h"
#include "org/apache/lucene/analysis/en/EnglishPossessiveFilter.h"
#include "org/apache/lucene/analysis/en/EnglishPossessiveFilterFactory.h"
#include "org/apache/lucene/analysis/en/KStemFilter.h"
#include "org/apache/lucene/analysis/en/KStemFilterFactory.h"
#include "org/apache/lucene/analysis/en/PorterStemFilter.h"
#include "org/apache/lucene/analysis/en/PorterStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace en {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "en");

            t_AbstractWordsFileFilterFactory::install(module);
            t_EnglishAnalyzer::install(module);
            t_EnglishMinimalStemFilter::install(module);
            t_EnglishMinimalStemFilterFactory::install(module);
            t_EnglishPossessiveFilter::install(module);
            t_EnglishPossessiveFilterFactory::install(module);
            t_KStemFilter::install(module);
            t_KStemFilterFactory::install(module);
            t_PorterStemFilter::install(module);
            t_PorterStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "en");

            t_AbstractWordsFileFilterFactory::initialize(module);
            t_EnglishAnalyzer::initialize(module);
            t_EnglishMinimalStemFilter::initialize(module);
            t_EnglishMinimalStemFilterFactory::initialize(module);
            t_EnglishPossessiveFilter::initialize(module);
            t_EnglishPossessiveFilterFactory::initialize(module);
            t_KStemFilter::initialize(module);
            t_KStemFilterFactory::initialize(module);
            t_PorterStemFilter::initialize(module);
            t_PorterStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/es/SpanishAnalyzer.h"
#include "org/apache/lucene/analysis/es/SpanishLightStemFilter.h"
#include "org/apache/lucene/analysis/es/SpanishLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/es/SpanishMinimalStemFilter.h"
#include "org/apache/lucene/analysis/es/SpanishMinimalStemFilterFactory.h"
#include "org/apache/lucene/analysis/es/SpanishPluralStemFilter.h"
#include "org/apache/lucene/analysis/es/SpanishPluralStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace es {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "es");

            t_SpanishAnalyzer::install(module);
            t_SpanishLightStemFilter::install(module);
            t_SpanishLightStemFilterFactory::install(module);
            t_SpanishMinimalStemFilter::install(module);
            t_SpanishMinimalStemFilterFactory::install(module);
            t_SpanishPluralStemFilter::install(module);
            t_SpanishPluralStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "es");

            t_SpanishAnalyzer::initialize(module);
            t_SpanishLightStemFilter::initialize(module);
            t_SpanishLightStemFilterFactory::initialize(module);
            t_SpanishMinimalStemFilter::initialize(module);
            t_SpanishMinimalStemFilterFactory::initialize(module);
            t_SpanishPluralStemFilter::initialize(module);
            t_SpanishPluralStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/et/EstonianAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace et {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "et");

            t_EstonianAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "et");

            t_EstonianAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/eu/BasqueAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace eu {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "eu");

            t_BasqueAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "eu");

            t_BasqueAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/fa/PersianAnalyzer.h"
#include "org/apache/lucene/analysis/fa/PersianCharFilter.h"
#include "org/apache/lucene/analysis/fa/PersianCharFilterFactory.h"
#include "org/apache/lucene/analysis/fa/PersianNormalizationFilter.h"
#include "org/apache/lucene/analysis/fa/PersianNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/fa/PersianStemFilter.h"
#include "org/apache/lucene/analysis/fa/PersianStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace fa {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "fa");

            t_PersianAnalyzer::install(module);
            t_PersianCharFilter::install(module);
            t_PersianCharFilterFactory::install(module);
            t_PersianNormalizationFilter::install(module);
            t_PersianNormalizationFilterFactory::install(module);
            t_PersianStemFilter::install(module);
            t_PersianStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "fa");

            t_PersianAnalyzer::initialize(module);
            t_PersianCharFilter::initialize(module);
            t_PersianCharFilterFactory::initialize(module);
            t_PersianNormalizationFilter::initialize(module);
            t_PersianNormalizationFilterFactory::initialize(module);
            t_PersianStemFilter::initialize(module);
            t_PersianStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/fi/FinnishAnalyzer.h"
#include "org/apache/lucene/analysis/fi/FinnishLightStemFilter.h"
#include "org/apache/lucene/analysis/fi/FinnishLightStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace fi {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "fi");

            t_FinnishAnalyzer::install(module);
            t_FinnishLightStemFilter::install(module);
            t_FinnishLightStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "fi");

            t_FinnishAnalyzer::initialize(module);
            t_FinnishLightStemFilter::initialize(module);
            t_FinnishLightStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/fr/FrenchAnalyzer.h"
#include "org/apache/lucene/analysis/fr/FrenchLightStemFilter.h"
#include "org/apache/lucene/analysis/fr/FrenchLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/fr/FrenchMinimalStemFilter.h"
#include "org/apache/lucene/analysis/fr/FrenchMinimalStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace fr {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "fr");

            t_FrenchAnalyzer::install(module);
            t_FrenchLightStemFilter::install(module);
            t_FrenchLightStemFilterFactory::install(module);
            t_FrenchMinimalStemFilter::install(module);
            t_FrenchMinimalStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "fr");

            t_FrenchAnalyzer::initialize(module);
            t_FrenchLightStemFilter::initialize(module);
            t_FrenchLightStemFilterFactory::initialize(module);
            t_FrenchMinimalStemFilter::initialize(module);
            t_FrenchMinimalStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ga/IrishAnalyzer.h"
#include "org/apache/lucene/analysis/ga/IrishLowerCaseFilter.h"
#include "org/apache/lucene/analysis/ga/IrishLowerCaseFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ga {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ga");

            t_IrishAnalyzer::install(module);
            t_IrishLowerCaseFilter::install(module);
            t_IrishLowerCaseFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ga");

            t_IrishAnalyzer::initialize(module);
            t_IrishLowerCaseFilter::initialize(module);
            t_IrishLowerCaseFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/gl/GalicianAnalyzer.h"
#include "org/apache/lucene/analysis/gl/GalicianMinimalStemFilter.h"
#include "org/apache/lucene/analysis/gl/GalicianMinimalStemFilterFactory.h"
#include "org/apache/lucene/analysis/gl/GalicianStemFilter.h"
#include "org/apache/lucene/analysis/gl/GalicianStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace gl {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "gl");

            t_GalicianAnalyzer::install(module);
            t_GalicianMinimalStemFilter::install(module);
            t_GalicianMinimalStemFilterFactory::install(module);
            t_GalicianStemFilter::install(module);
            t_GalicianStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "gl");

            t_GalicianAnalyzer::initialize(module);
            t_GalicianMinimalStemFilter::initialize(module);
            t_GalicianMinimalStemFilterFactory::initialize(module);
            t_GalicianStemFilter::initialize(module);
            t_GalicianStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/hi/HindiAnalyzer.h"
#include "org/apache/lucene/analysis/hi/HindiNormalizationFilter.h"
#include "org/apache/lucene/analysis/hi/HindiNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/hi/HindiStemFilter.h"
#include "org/apache/lucene/analysis/hi/HindiStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hi {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hi");

            t_HindiAnalyzer::install(module);
            t_HindiNormalizationFilter::install(module);
            t_HindiNormalizationFilterFactory::install(module);
            t_HindiStemFilter::install(module);
            t_HindiStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hi");

            t_HindiAnalyzer::initialize(module);
            t_HindiNormalizationFilter::initialize(module);
            t_HindiNormalizationFilterFactory::initialize(module);
            t_HindiStemFilter::initialize(module);
            t_HindiStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/hu/HungarianAnalyzer.h"
#include "org/apache/lucene/analysis/hu/HungarianLightStemFilter.h"
#include "org/apache/lucene/analysis/hu/HungarianLightStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hu {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hu");

            t_HungarianAnalyzer::install(module);
            t_HungarianLightStemFilter::install(module);
            t_HungarianLightStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hu");

            t_HungarianAnalyzer::initialize(module);
            t_HungarianLightStemFilter::initialize(module);
            t_HungarianLightStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/hunspell/AffixedWord.h"
#include "org/apache/lucene/analysis/hunspell/AffixedWord$Affix.h"
#include "org/apache/lucene/analysis/hunspell/DictEntries.h"
#include "org/apache/lucene/analysis/hunspell/DictEntry.h"
#include "org/apache/lucene/analysis/hunspell/Dictionary.h"
#include "org/apache/lucene/analysis/hunspell/EntrySuggestion.h"
#include "org/apache/lucene/analysis/hunspell/FragmentChecker.h"
#include "org/apache/lucene/analysis/hunspell/Hunspell.h"
#include "org/apache/lucene/analysis/hunspell/HunspellStemFilter.h"
#include "org/apache/lucene/analysis/hunspell/HunspellStemFilterFactory.h"
#include "org/apache/lucene/analysis/hunspell/NGramFragmentChecker.h"
#include "org/apache/lucene/analysis/hunspell/NGramFragmentChecker$NGramConsumer.h"
#include "org/apache/lucene/analysis/hunspell/SortingStrategy.h"
#include "org/apache/lucene/analysis/hunspell/Suggester.h"
#include "org/apache/lucene/analysis/hunspell/SuggestionTimeoutException.h"
#include "org/apache/lucene/analysis/hunspell/TimeoutPolicy.h"
#include "org/apache/lucene/analysis/hunspell/WordFormGenerator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hunspell");

            t_AffixedWord::install(module);
            t_AffixedWord$Affix::install(module);
            t_DictEntries::install(module);
            t_DictEntry::install(module);
            t_Dictionary::install(module);
            t_EntrySuggestion::install(module);
            t_FragmentChecker::install(module);
            t_Hunspell::install(module);
            t_HunspellStemFilter::install(module);
            t_HunspellStemFilterFactory::install(module);
            t_NGramFragmentChecker::install(module);
            t_NGramFragmentChecker$NGramConsumer::install(module);
            t_SortingStrategy::install(module);
            t_Suggester::install(module);
            t_SuggestionTimeoutException::install(module);
            t_TimeoutPolicy::install(module);
            t_WordFormGenerator::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hunspell");

            t_AffixedWord::initialize(module);
            t_AffixedWord$Affix::initialize(module);
            t_DictEntries::initialize(module);
            t_DictEntry::initialize(module);
            t_Dictionary::initialize(module);
            t_EntrySuggestion::initialize(module);
            t_FragmentChecker::initialize(module);
            t_Hunspell::initialize(module);
            t_HunspellStemFilter::initialize(module);
            t_HunspellStemFilterFactory::initialize(module);
            t_NGramFragmentChecker::initialize(module);
            t_NGramFragmentChecker$NGramConsumer::initialize(module);
            t_SortingStrategy::initialize(module);
            t_Suggester::initialize(module);
            t_SuggestionTimeoutException::initialize(module);
            t_TimeoutPolicy::initialize(module);
            t_WordFormGenerator::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/hy/ArmenianAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hy {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hy");

            t_ArmenianAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "hy");

            t_ArmenianAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/id/IndonesianAnalyzer.h"
#include "org/apache/lucene/analysis/id/IndonesianStemFilter.h"
#include "org/apache/lucene/analysis/id/IndonesianStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace id {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "id");

            t_IndonesianAnalyzer::install(module);
            t_IndonesianStemFilter::install(module);
            t_IndonesianStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "id");

            t_IndonesianAnalyzer::initialize(module);
            t_IndonesianStemFilter::initialize(module);
            t_IndonesianStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/in/IndicNormalizationFilter.h"
#include "org/apache/lucene/analysis/in/IndicNormalizationFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace in {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "in");

            t_IndicNormalizationFilter::install(module);
            t_IndicNormalizationFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "in");

            t_IndicNormalizationFilter::initialize(module);
            t_IndicNormalizationFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/it/ItalianAnalyzer.h"
#include "org/apache/lucene/analysis/it/ItalianLightStemFilter.h"
#include "org/apache/lucene/analysis/it/ItalianLightStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace it {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "it");

            t_ItalianAnalyzer::install(module);
            t_ItalianLightStemFilter::install(module);
            t_ItalianLightStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "it");

            t_ItalianAnalyzer::initialize(module);
            t_ItalianLightStemFilter::initialize(module);
            t_ItalianLightStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ja/JapaneseAnalyzer.h"
#include "org/apache/lucene/analysis/ja/JapaneseBaseFormFilter.h"
#include "org/apache/lucene/analysis/ja/JapaneseBaseFormFilterFactory.h"
#include "org/apache/lucene/analysis/ja/JapaneseCompletionAnalyzer.h"
#include "org/apache/lucene/analysis/ja/JapaneseCompletionFilter.h"
#include "org/apache/lucene/analysis/ja/JapaneseCompletionFilter$Mode.h"
#include "org/apache/lucene/analysis/ja/JapaneseCompletionFilterFactory.h"
#include "org/apache/lucene/analysis/ja/JapaneseHiraganaUppercaseFilter.h"
#include "org/apache/lucene/analysis/ja/JapaneseHiraganaUppercaseFilterFactory.h"
#include "org/apache/lucene/analysis/ja/JapaneseIterationMarkCharFilter.h"
#include "org/apache/lucene/analysis/ja/JapaneseIterationMarkCharFilterFactory.h"
#include "org/apache/lucene/analysis/ja/JapaneseKatakanaStemFilter.h"
#include "org/apache/lucene/analysis/ja/JapaneseKatakanaStemFilterFactory.h"
#include "org/apache/lucene/analysis/ja/JapaneseKatakanaUppercaseFilter.h"
#include "org/apache/lucene/analysis/ja/JapaneseKatakanaUppercaseFilterFactory.h"
#include "org/apache/lucene/analysis/ja/JapaneseNumberFilter.h"
#include "org/apache/lucene/analysis/ja/JapaneseNumberFilter$NumberBuffer.h"
#include "org/apache/lucene/analysis/ja/JapaneseNumberFilterFactory.h"
#include "org/apache/lucene/analysis/ja/JapanesePartOfSpeechStopFilter.h"
#include "org/apache/lucene/analysis/ja/JapanesePartOfSpeechStopFilterFactory.h"
#include "org/apache/lucene/analysis/ja/JapaneseReadingFormFilter.h"
#include "org/apache/lucene/analysis/ja/JapaneseReadingFormFilterFactory.h"
#include "org/apache/lucene/analysis/ja/JapaneseTokenizer.h"
#include "org/apache/lucene/analysis/ja/JapaneseTokenizer$Mode.h"
#include "org/apache/lucene/analysis/ja/JapaneseTokenizerFactory.h"
#include "org/apache/lucene/analysis/ja/Token.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          namespace completion {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace dict {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace tokenattributes {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ja");

            t_JapaneseAnalyzer::install(module);
            t_JapaneseBaseFormFilter::install(module);
            t_JapaneseBaseFormFilterFactory::install(module);
            t_JapaneseCompletionAnalyzer::install(module);
            t_JapaneseCompletionFilter::install(module);
            t_JapaneseCompletionFilter$Mode::install(module);
            t_JapaneseCompletionFilterFactory::install(module);
            t_JapaneseHiraganaUppercaseFilter::install(module);
            t_JapaneseHiraganaUppercaseFilterFactory::install(module);
            t_JapaneseIterationMarkCharFilter::install(module);
            t_JapaneseIterationMarkCharFilterFactory::install(module);
            t_JapaneseKatakanaStemFilter::install(module);
            t_JapaneseKatakanaStemFilterFactory::install(module);
            t_JapaneseKatakanaUppercaseFilter::install(module);
            t_JapaneseKatakanaUppercaseFilterFactory::install(module);
            t_JapaneseNumberFilter::install(module);
            t_JapaneseNumberFilter$NumberBuffer::install(module);
            t_JapaneseNumberFilterFactory::install(module);
            t_JapanesePartOfSpeechStopFilter::install(module);
            t_JapanesePartOfSpeechStopFilterFactory::install(module);
            t_JapaneseReadingFormFilter::install(module);
            t_JapaneseReadingFormFilterFactory::install(module);
            t_JapaneseTokenizer::install(module);
            t_JapaneseTokenizer$Mode::install(module);
            t_JapaneseTokenizerFactory::install(module);
            t_Token::install(module);
            completion::__install__(module);
            dict::__install__(module);
            tokenattributes::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ja");

            t_JapaneseAnalyzer::initialize(module);
            t_JapaneseBaseFormFilter::initialize(module);
            t_JapaneseBaseFormFilterFactory::initialize(module);
            t_JapaneseCompletionAnalyzer::initialize(module);
            t_JapaneseCompletionFilter::initialize(module);
            t_JapaneseCompletionFilter$Mode::initialize(module);
            t_JapaneseCompletionFilterFactory::initialize(module);
            t_JapaneseHiraganaUppercaseFilter::initialize(module);
            t_JapaneseHiraganaUppercaseFilterFactory::initialize(module);
            t_JapaneseIterationMarkCharFilter::initialize(module);
            t_JapaneseIterationMarkCharFilterFactory::initialize(module);
            t_JapaneseKatakanaStemFilter::initialize(module);
            t_JapaneseKatakanaStemFilterFactory::initialize(module);
            t_JapaneseKatakanaUppercaseFilter::initialize(module);
            t_JapaneseKatakanaUppercaseFilterFactory::initialize(module);
            t_JapaneseNumberFilter::initialize(module);
            t_JapaneseNumberFilter$NumberBuffer::initialize(module);
            t_JapaneseNumberFilterFactory::initialize(module);
            t_JapanesePartOfSpeechStopFilter::initialize(module);
            t_JapanesePartOfSpeechStopFilterFactory::initialize(module);
            t_JapaneseReadingFormFilter::initialize(module);
            t_JapaneseReadingFormFilterFactory::initialize(module);
            t_JapaneseTokenizer::initialize(module);
            t_JapaneseTokenizer$Mode::initialize(module);
            t_JapaneseTokenizerFactory::initialize(module);
            t_Token::initialize(module);
            completion::__initialize__(module);
            dict::__initialize__(module);
            tokenattributes::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ja/completion/CharSequenceUtils.h"
#include "org/apache/lucene/analysis/ja/completion/KatakanaRomanizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace completion {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.ja", "completion");

              t_CharSequenceUtils::install(module);
              t_KatakanaRomanizer::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.ja", "completion");

              t_CharSequenceUtils::initialize(module);
              t_KatakanaRomanizer::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ja/dict/CharacterDefinition.h"
#include "org/apache/lucene/analysis/ja/dict/ConnectionCosts.h"
#include "org/apache/lucene/analysis/ja/dict/DictionaryBuilder.h"
#include "org/apache/lucene/analysis/ja/dict/DictionaryBuilder$DictionaryFormat.h"
#include "org/apache/lucene/analysis/ja/dict/JaMorphData.h"
#include "org/apache/lucene/analysis/ja/dict/ToStringUtil.h"
#include "org/apache/lucene/analysis/ja/dict/TokenInfoDictionary.h"
#include "org/apache/lucene/analysis/ja/dict/TokenInfoFST.h"
#include "org/apache/lucene/analysis/ja/dict/TokenInfoMorphData.h"
#include "org/apache/lucene/analysis/ja/dict/UnknownDictionary.h"
#include "org/apache/lucene/analysis/ja/dict/UnknownMorphData.h"
#include "org/apache/lucene/analysis/ja/dict/UserDictionary.h"
#include "org/apache/lucene/analysis/ja/dict/UserMorphData.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.ja", "dict");

              t_CharacterDefinition::install(module);
              t_ConnectionCosts::install(module);
              t_DictionaryBuilder::install(module);
              t_DictionaryBuilder$DictionaryFormat::install(module);
              t_JaMorphData::install(module);
              t_ToStringUtil::install(module);
              t_TokenInfoDictionary::install(module);
              t_TokenInfoFST::install(module);
              t_TokenInfoMorphData::install(module);
              t_UnknownDictionary::install(module);
              t_UnknownMorphData::install(module);
              t_UserDictionary::install(module);
              t_UserMorphData::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.ja", "dict");

              t_CharacterDefinition::initialize(module);
              t_ConnectionCosts::initialize(module);
              t_DictionaryBuilder::initialize(module);
              t_DictionaryBuilder$DictionaryFormat::initialize(module);
              t_JaMorphData::initialize(module);
              t_ToStringUtil::initialize(module);
              t_TokenInfoDictionary::initialize(module);
              t_TokenInfoFST::initialize(module);
              t_TokenInfoMorphData::initialize(module);
              t_UnknownDictionary::initialize(module);
              t_UnknownMorphData::initialize(module);
              t_UserDictionary::initialize(module);
              t_UserMorphData::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ja/tokenattributes/BaseFormAttribute.h"
#include "org/apache/lucene/analysis/ja/tokenattributes/BaseFormAttributeImpl.h"
#include "org/apache/lucene/analysis/ja/tokenattributes/InflectionAttribute.h"
#include "org/apache/lucene/analysis/ja/tokenattributes/InflectionAttributeImpl.h"
#include "org/apache/lucene/analysis/ja/tokenattributes/PartOfSpeechAttribute.h"
#include "org/apache/lucene/analysis/ja/tokenattributes/PartOfSpeechAttributeImpl.h"
#include "org/apache/lucene/analysis/ja/tokenattributes/ReadingAttribute.h"
#include "org/apache/lucene/analysis/ja/tokenattributes/ReadingAttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace tokenattributes {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.ja", "tokenattributes");

              t_BaseFormAttribute::install(module);
              t_BaseFormAttributeImpl::install(module);
              t_InflectionAttribute::install(module);
              t_InflectionAttributeImpl::install(module);
              t_PartOfSpeechAttribute::install(module);
              t_PartOfSpeechAttributeImpl::install(module);
              t_ReadingAttribute::install(module);
              t_ReadingAttributeImpl::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.ja", "tokenattributes");

              t_BaseFormAttribute::initialize(module);
              t_BaseFormAttributeImpl::initialize(module);
              t_InflectionAttribute::initialize(module);
              t_InflectionAttributeImpl::initialize(module);
              t_PartOfSpeechAttribute::initialize(module);
              t_PartOfSpeechAttributeImpl::initialize(module);
              t_ReadingAttribute::initialize(module);
              t_ReadingAttributeImpl::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ko/DecompoundToken.h"
#include "org/apache/lucene/analysis/ko/DictionaryToken.h"
#include "org/apache/lucene/analysis/ko/KoreanAnalyzer.h"
#include "org/apache/lucene/analysis/ko/KoreanNumberFilter.h"
#include "org/apache/lucene/analysis/ko/KoreanNumberFilter$NumberBuffer.h"
#include "org/apache/lucene/analysis/ko/KoreanNumberFilterFactory.h"
#include "org/apache/lucene/analysis/ko/KoreanPartOfSpeechStopFilter.h"
#include "org/apache/lucene/analysis/ko/KoreanPartOfSpeechStopFilterFactory.h"
#include "org/apache/lucene/analysis/ko/KoreanReadingFormFilter.h"
#include "org/apache/lucene/analysis/ko/KoreanReadingFormFilterFactory.h"
#include "org/apache/lucene/analysis/ko/KoreanTokenizer.h"
#include "org/apache/lucene/analysis/ko/KoreanTokenizer$DecompoundMode.h"
#include "org/apache/lucene/analysis/ko/KoreanTokenizerFactory.h"
#include "org/apache/lucene/analysis/ko/POS.h"
#include "org/apache/lucene/analysis/ko/POS$Tag.h"
#include "org/apache/lucene/analysis/ko/POS$Type.h"
#include "org/apache/lucene/analysis/ko/Token.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {

          namespace dict {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace tokenattributes {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ko");

            t_DecompoundToken::install(module);
            t_DictionaryToken::install(module);
            t_KoreanAnalyzer::install(module);
            t_KoreanNumberFilter::install(module);
            t_KoreanNumberFilter$NumberBuffer::install(module);
            t_KoreanNumberFilterFactory::install(module);
            t_KoreanPartOfSpeechStopFilter::install(module);
            t_KoreanPartOfSpeechStopFilterFactory::install(module);
            t_KoreanReadingFormFilter::install(module);
            t_KoreanReadingFormFilterFactory::install(module);
            t_KoreanTokenizer::install(module);
            t_KoreanTokenizer$DecompoundMode::install(module);
            t_KoreanTokenizerFactory::install(module);
            t_POS::install(module);
            t_POS$Tag::install(module);
            t_POS$Type::install(module);
            t_Token::install(module);
            dict::__install__(module);
            tokenattributes::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ko");

            t_DecompoundToken::initialize(module);
            t_DictionaryToken::initialize(module);
            t_KoreanAnalyzer::initialize(module);
            t_KoreanNumberFilter::initialize(module);
            t_KoreanNumberFilter$NumberBuffer::initialize(module);
            t_KoreanNumberFilterFactory::initialize(module);
            t_KoreanPartOfSpeechStopFilter::initialize(module);
            t_KoreanPartOfSpeechStopFilterFactory::initialize(module);
            t_KoreanReadingFormFilter::initialize(module);
            t_KoreanReadingFormFilterFactory::initialize(module);
            t_KoreanTokenizer::initialize(module);
            t_KoreanTokenizer$DecompoundMode::initialize(module);
            t_KoreanTokenizerFactory::initialize(module);
            t_POS::initialize(module);
            t_POS$Tag::initialize(module);
            t_POS$Type::initialize(module);
            t_Token::initialize(module);
            dict::__initialize__(module);
            tokenattributes::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ko/dict/CharacterDefinition.h"
#include "org/apache/lucene/analysis/ko/dict/ConnectionCosts.h"
#include "org/apache/lucene/analysis/ko/dict/DictionaryBuilder.h"
#include "org/apache/lucene/analysis/ko/dict/KoMorphData.h"
#include "org/apache/lucene/analysis/ko/dict/KoMorphData$Morpheme.h"
#include "org/apache/lucene/analysis/ko/dict/TokenInfoDictionary.h"
#include "org/apache/lucene/analysis/ko/dict/TokenInfoFST.h"
#include "org/apache/lucene/analysis/ko/dict/TokenInfoMorphData.h"
#include "org/apache/lucene/analysis/ko/dict/UnknownDictionary.h"
#include "org/apache/lucene/analysis/ko/dict/UnknownMorphData.h"
#include "org/apache/lucene/analysis/ko/dict/UserDictionary.h"
#include "org/apache/lucene/analysis/ko/dict/UserMorphData.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.ko", "dict");

              t_CharacterDefinition::install(module);
              t_ConnectionCosts::install(module);
              t_DictionaryBuilder::install(module);
              t_KoMorphData::install(module);
              t_KoMorphData$Morpheme::install(module);
              t_TokenInfoDictionary::install(module);
              t_TokenInfoFST::install(module);
              t_TokenInfoMorphData::install(module);
              t_UnknownDictionary::install(module);
              t_UnknownMorphData::install(module);
              t_UserDictionary::install(module);
              t_UserMorphData::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.ko", "dict");

              t_CharacterDefinition::initialize(module);
              t_ConnectionCosts::initialize(module);
              t_DictionaryBuilder::initialize(module);
              t_KoMorphData::initialize(module);
              t_KoMorphData$Morpheme::initialize(module);
              t_TokenInfoDictionary::initialize(module);
              t_TokenInfoFST::initialize(module);
              t_TokenInfoMorphData::initialize(module);
              t_UnknownDictionary::initialize(module);
              t_UnknownMorphData::initialize(module);
              t_UserDictionary::initialize(module);
              t_UserMorphData::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ko/tokenattributes/PartOfSpeechAttribute.h"
#include "org/apache/lucene/analysis/ko/tokenattributes/PartOfSpeechAttributeImpl.h"
#include "org/apache/lucene/analysis/ko/tokenattributes/ReadingAttribute.h"
#include "org/apache/lucene/analysis/ko/tokenattributes/ReadingAttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace tokenattributes {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.ko", "tokenattributes");

              t_PartOfSpeechAttribute::install(module);
              t_PartOfSpeechAttributeImpl::install(module);
              t_ReadingAttribute::install(module);
              t_ReadingAttributeImpl::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.ko", "tokenattributes");

              t_PartOfSpeechAttribute::initialize(module);
              t_PartOfSpeechAttributeImpl::initialize(module);
              t_ReadingAttribute::initialize(module);
              t_ReadingAttributeImpl::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/lt/LithuanianAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace lt {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "lt");

            t_LithuanianAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "lt");

            t_LithuanianAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/lv/LatvianAnalyzer.h"
#include "org/apache/lucene/analysis/lv/LatvianStemFilter.h"
#include "org/apache/lucene/analysis/lv/LatvianStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace lv {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "lv");

            t_LatvianAnalyzer::install(module);
            t_LatvianStemFilter::install(module);
            t_LatvianStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "lv");

            t_LatvianAnalyzer::initialize(module);
            t_LatvianStemFilter::initialize(module);
            t_LatvianStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/minhash/MinHashFilter.h"
#include "org/apache/lucene/analysis/minhash/MinHashFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace minhash {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "minhash");

            t_MinHashFilter::install(module);
            t_MinHashFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "minhash");

            t_MinHashFilter::initialize(module);
            t_MinHashFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/miscellaneous/ASCIIFoldingFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/ASCIIFoldingFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/CapitalizationFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/CapitalizationFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/CodepointCountFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/CodepointCountFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/ConcatenateGraphFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/ConcatenateGraphFilter$BytesRefBuilderTermAttribute.h"
#include "org/apache/lucene/analysis/miscellaneous/ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl.h"
#include "org/apache/lucene/analysis/miscellaneous/ConcatenateGraphFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/ConcatenatingTokenStream.h"
#include "org/apache/lucene/analysis/miscellaneous/ConditionalTokenFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/ConditionalTokenFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/DateRecognizerFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/DateRecognizerFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/DelimitedTermFrequencyTokenFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/DelimitedTermFrequencyTokenFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/DropIfFlaggedFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/DropIfFlaggedFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/EmptyTokenStream.h"
#include "org/apache/lucene/analysis/miscellaneous/FingerprintFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/FingerprintFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/FixBrokenOffsetsFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/FixBrokenOffsetsFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/HyphenatedWordsFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/HyphenatedWordsFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/KeepWordFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/KeepWordFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/KeywordMarkerFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/KeywordMarkerFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/KeywordRepeatFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/KeywordRepeatFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/LengthFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/LengthFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/LimitTokenCountAnalyzer.h"
#include "org/apache/lucene/analysis/miscellaneous/LimitTokenCountFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/LimitTokenCountFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/LimitTokenOffsetFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/LimitTokenOffsetFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/LimitTokenPositionFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/LimitTokenPositionFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/PatternKeywordMarkerFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/PerFieldAnalyzerWrapper.h"
#include "org/apache/lucene/analysis/miscellaneous/ProtectedTermFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/ProtectedTermFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/RemoveDuplicatesTokenFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/RemoveDuplicatesTokenFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/ScandinavianFoldingFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/ScandinavianFoldingFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/ScandinavianNormalizationFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/ScandinavianNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/ScandinavianNormalizer.h"
#include "org/apache/lucene/analysis/miscellaneous/ScandinavianNormalizer$Foldings.h"
#include "org/apache/lucene/analysis/miscellaneous/SetKeywordMarkerFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/StemmerOverrideFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/StemmerOverrideFilter$Builder.h"
#include "org/apache/lucene/analysis/miscellaneous/StemmerOverrideFilter$StemmerOverrideMap.h"
#include "org/apache/lucene/analysis/miscellaneous/StemmerOverrideFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/TrimFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/TrimFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/TruncateTokenFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/TruncateTokenFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/TypeAsSynonymFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/TypeAsSynonymFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/WordDelimiterFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/WordDelimiterFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/WordDelimiterGraphFilter.h"
#include "org/apache/lucene/analysis/miscellaneous/WordDelimiterGraphFilterFactory.h"
#include "org/apache/lucene/analysis/miscellaneous/WordDelimiterIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "miscellaneous");

            t_ASCIIFoldingFilter::install(module);
            t_ASCIIFoldingFilterFactory::install(module);
            t_CapitalizationFilter::install(module);
            t_CapitalizationFilterFactory::install(module);
            t_CodepointCountFilter::install(module);
            t_CodepointCountFilterFactory::install(module);
            t_ConcatenateGraphFilter::install(module);
            t_ConcatenateGraphFilter$BytesRefBuilderTermAttribute::install(module);
            t_ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl::install(module);
            t_ConcatenateGraphFilterFactory::install(module);
            t_ConcatenatingTokenStream::install(module);
            t_ConditionalTokenFilter::install(module);
            t_ConditionalTokenFilterFactory::install(module);
            t_DateRecognizerFilter::install(module);
            t_DateRecognizerFilterFactory::install(module);
            t_DelimitedTermFrequencyTokenFilter::install(module);
            t_DelimitedTermFrequencyTokenFilterFactory::install(module);
            t_DropIfFlaggedFilter::install(module);
            t_DropIfFlaggedFilterFactory::install(module);
            t_EmptyTokenStream::install(module);
            t_FingerprintFilter::install(module);
            t_FingerprintFilterFactory::install(module);
            t_FixBrokenOffsetsFilter::install(module);
            t_FixBrokenOffsetsFilterFactory::install(module);
            t_HyphenatedWordsFilter::install(module);
            t_HyphenatedWordsFilterFactory::install(module);
            t_KeepWordFilter::install(module);
            t_KeepWordFilterFactory::install(module);
            t_KeywordMarkerFilter::install(module);
            t_KeywordMarkerFilterFactory::install(module);
            t_KeywordRepeatFilter::install(module);
            t_KeywordRepeatFilterFactory::install(module);
            t_LengthFilter::install(module);
            t_LengthFilterFactory::install(module);
            t_LimitTokenCountAnalyzer::install(module);
            t_LimitTokenCountFilter::install(module);
            t_LimitTokenCountFilterFactory::install(module);
            t_LimitTokenOffsetFilter::install(module);
            t_LimitTokenOffsetFilterFactory::install(module);
            t_LimitTokenPositionFilter::install(module);
            t_LimitTokenPositionFilterFactory::install(module);
            t_PatternKeywordMarkerFilter::install(module);
            t_PerFieldAnalyzerWrapper::install(module);
            t_ProtectedTermFilter::install(module);
            t_ProtectedTermFilterFactory::install(module);
            t_RemoveDuplicatesTokenFilter::install(module);
            t_RemoveDuplicatesTokenFilterFactory::install(module);
            t_ScandinavianFoldingFilter::install(module);
            t_ScandinavianFoldingFilterFactory::install(module);
            t_ScandinavianNormalizationFilter::install(module);
            t_ScandinavianNormalizationFilterFactory::install(module);
            t_ScandinavianNormalizer::install(module);
            t_ScandinavianNormalizer$Foldings::install(module);
            t_SetKeywordMarkerFilter::install(module);
            t_StemmerOverrideFilter::install(module);
            t_StemmerOverrideFilter$Builder::install(module);
            t_StemmerOverrideFilter$StemmerOverrideMap::install(module);
            t_StemmerOverrideFilterFactory::install(module);
            t_TrimFilter::install(module);
            t_TrimFilterFactory::install(module);
            t_TruncateTokenFilter::install(module);
            t_TruncateTokenFilterFactory::install(module);
            t_TypeAsSynonymFilter::install(module);
            t_TypeAsSynonymFilterFactory::install(module);
            t_WordDelimiterFilter::install(module);
            t_WordDelimiterFilterFactory::install(module);
            t_WordDelimiterGraphFilter::install(module);
            t_WordDelimiterGraphFilterFactory::install(module);
            t_WordDelimiterIterator::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "miscellaneous");

            t_ASCIIFoldingFilter::initialize(module);
            t_ASCIIFoldingFilterFactory::initialize(module);
            t_CapitalizationFilter::initialize(module);
            t_CapitalizationFilterFactory::initialize(module);
            t_CodepointCountFilter::initialize(module);
            t_CodepointCountFilterFactory::initialize(module);
            t_ConcatenateGraphFilter::initialize(module);
            t_ConcatenateGraphFilter$BytesRefBuilderTermAttribute::initialize(module);
            t_ConcatenateGraphFilter$BytesRefBuilderTermAttributeImpl::initialize(module);
            t_ConcatenateGraphFilterFactory::initialize(module);
            t_ConcatenatingTokenStream::initialize(module);
            t_ConditionalTokenFilter::initialize(module);
            t_ConditionalTokenFilterFactory::initialize(module);
            t_DateRecognizerFilter::initialize(module);
            t_DateRecognizerFilterFactory::initialize(module);
            t_DelimitedTermFrequencyTokenFilter::initialize(module);
            t_DelimitedTermFrequencyTokenFilterFactory::initialize(module);
            t_DropIfFlaggedFilter::initialize(module);
            t_DropIfFlaggedFilterFactory::initialize(module);
            t_EmptyTokenStream::initialize(module);
            t_FingerprintFilter::initialize(module);
            t_FingerprintFilterFactory::initialize(module);
            t_FixBrokenOffsetsFilter::initialize(module);
            t_FixBrokenOffsetsFilterFactory::initialize(module);
            t_HyphenatedWordsFilter::initialize(module);
            t_HyphenatedWordsFilterFactory::initialize(module);
            t_KeepWordFilter::initialize(module);
            t_KeepWordFilterFactory::initialize(module);
            t_KeywordMarkerFilter::initialize(module);
            t_KeywordMarkerFilterFactory::initialize(module);
            t_KeywordRepeatFilter::initialize(module);
            t_KeywordRepeatFilterFactory::initialize(module);
            t_LengthFilter::initialize(module);
            t_LengthFilterFactory::initialize(module);
            t_LimitTokenCountAnalyzer::initialize(module);
            t_LimitTokenCountFilter::initialize(module);
            t_LimitTokenCountFilterFactory::initialize(module);
            t_LimitTokenOffsetFilter::initialize(module);
            t_LimitTokenOffsetFilterFactory::initialize(module);
            t_LimitTokenPositionFilter::initialize(module);
            t_LimitTokenPositionFilterFactory::initialize(module);
            t_PatternKeywordMarkerFilter::initialize(module);
            t_PerFieldAnalyzerWrapper::initialize(module);
            t_ProtectedTermFilter::initialize(module);
            t_ProtectedTermFilterFactory::initialize(module);
            t_RemoveDuplicatesTokenFilter::initialize(module);
            t_RemoveDuplicatesTokenFilterFactory::initialize(module);
            t_ScandinavianFoldingFilter::initialize(module);
            t_ScandinavianFoldingFilterFactory::initialize(module);
            t_ScandinavianNormalizationFilter::initialize(module);
            t_ScandinavianNormalizationFilterFactory::initialize(module);
            t_ScandinavianNormalizer::initialize(module);
            t_ScandinavianNormalizer$Foldings::initialize(module);
            t_SetKeywordMarkerFilter::initialize(module);
            t_StemmerOverrideFilter::initialize(module);
            t_StemmerOverrideFilter$Builder::initialize(module);
            t_StemmerOverrideFilter$StemmerOverrideMap::initialize(module);
            t_StemmerOverrideFilterFactory::initialize(module);
            t_TrimFilter::initialize(module);
            t_TrimFilterFactory::initialize(module);
            t_TruncateTokenFilter::initialize(module);
            t_TruncateTokenFilterFactory::initialize(module);
            t_TypeAsSynonymFilter::initialize(module);
            t_TypeAsSynonymFilterFactory::initialize(module);
            t_WordDelimiterFilter::initialize(module);
            t_WordDelimiterFilterFactory::initialize(module);
            t_WordDelimiterGraphFilter::initialize(module);
            t_WordDelimiterGraphFilterFactory::initialize(module);
            t_WordDelimiterIterator::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/morph/BinaryDictionary.h"
#include "org/apache/lucene/analysis/morph/BinaryDictionaryWriter.h"
#include "org/apache/lucene/analysis/morph/CharacterDefinition.h"
#include "org/apache/lucene/analysis/morph/CharacterDefinition$LookupCharacterClass.h"
#include "org/apache/lucene/analysis/morph/CharacterDefinitionWriter.h"
#include "org/apache/lucene/analysis/morph/ConnectionCosts.h"
#include "org/apache/lucene/analysis/morph/ConnectionCostsWriter.h"
#include "org/apache/lucene/analysis/morph/Dictionary.h"
#include "org/apache/lucene/analysis/morph/DictionaryEntryWriter.h"
#include "org/apache/lucene/analysis/morph/GraphvizFormatter.h"
#include "org/apache/lucene/analysis/morph/GraphvizFormatter$DictionaryProvider.h"
#include "org/apache/lucene/analysis/morph/MorphData.h"
#include "org/apache/lucene/analysis/morph/Token.h"
#include "org/apache/lucene/analysis/morph/TokenInfoFST.h"
#include "org/apache/lucene/analysis/morph/TokenType.h"
#include "org/apache/lucene/analysis/morph/Viterbi.h"
#include "org/apache/lucene/analysis/morph/Viterbi$Position.h"
#include "org/apache/lucene/analysis/morph/Viterbi$WrappedPositionArray.h"
#include "org/apache/lucene/analysis/morph/ViterbiNBest.h"
#include "org/apache/lucene/analysis/morph/ViterbiNBest$PositionNBest.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "morph");

            t_BinaryDictionary::install(module);
            t_BinaryDictionaryWriter::install(module);
            t_CharacterDefinition::install(module);
            t_CharacterDefinition$LookupCharacterClass::install(module);
            t_CharacterDefinitionWriter::install(module);
            t_ConnectionCosts::install(module);
            t_ConnectionCostsWriter::install(module);
            t_Dictionary::install(module);
            t_DictionaryEntryWriter::install(module);
            t_GraphvizFormatter::install(module);
            t_GraphvizFormatter$DictionaryProvider::install(module);
            t_MorphData::install(module);
            t_Token::install(module);
            t_TokenInfoFST::install(module);
            t_TokenType::install(module);
            t_Viterbi::install(module);
            t_Viterbi$Position::install(module);
            t_Viterbi$WrappedPositionArray::install(module);
            t_ViterbiNBest::install(module);
            t_ViterbiNBest$PositionNBest::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "morph");

            t_BinaryDictionary::initialize(module);
            t_BinaryDictionaryWriter::initialize(module);
            t_CharacterDefinition::initialize(module);
            t_CharacterDefinition$LookupCharacterClass::initialize(module);
            t_CharacterDefinitionWriter::initialize(module);
            t_ConnectionCosts::initialize(module);
            t_ConnectionCostsWriter::initialize(module);
            t_Dictionary::initialize(module);
            t_DictionaryEntryWriter::initialize(module);
            t_GraphvizFormatter::initialize(module);
            t_GraphvizFormatter$DictionaryProvider::initialize(module);
            t_MorphData::initialize(module);
            t_Token::initialize(module);
            t_TokenInfoFST::initialize(module);
            t_TokenType::initialize(module);
            t_Viterbi::initialize(module);
            t_Viterbi$Position::initialize(module);
            t_Viterbi$WrappedPositionArray::initialize(module);
            t_ViterbiNBest::initialize(module);
            t_ViterbiNBest$PositionNBest::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ne/NepaliAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ne {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ne");

            t_NepaliAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ne");

            t_NepaliAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ngram/EdgeNGramFilterFactory.h"
#include "org/apache/lucene/analysis/ngram/EdgeNGramTokenFilter.h"
#include "org/apache/lucene/analysis/ngram/EdgeNGramTokenizer.h"
#include "org/apache/lucene/analysis/ngram/EdgeNGramTokenizerFactory.h"
#include "org/apache/lucene/analysis/ngram/NGramFilterFactory.h"
#include "org/apache/lucene/analysis/ngram/NGramTokenFilter.h"
#include "org/apache/lucene/analysis/ngram/NGramTokenizer.h"
#include "org/apache/lucene/analysis/ngram/NGramTokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ngram {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ngram");

            t_EdgeNGramFilterFactory::install(module);
            t_EdgeNGramTokenFilter::install(module);
            t_EdgeNGramTokenizer::install(module);
            t_EdgeNGramTokenizerFactory::install(module);
            t_NGramFilterFactory::install(module);
            t_NGramTokenFilter::install(module);
            t_NGramTokenizer::install(module);
            t_NGramTokenizerFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ngram");

            t_EdgeNGramFilterFactory::initialize(module);
            t_EdgeNGramTokenFilter::initialize(module);
            t_EdgeNGramTokenizer::initialize(module);
            t_EdgeNGramTokenizerFactory::initialize(module);
            t_NGramFilterFactory::initialize(module);
            t_NGramTokenFilter::initialize(module);
            t_NGramTokenizer::initialize(module);
            t_NGramTokenizerFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/nl/DutchAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace nl {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "nl");

            t_DutchAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "nl");

            t_DutchAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/no/NorwegianAnalyzer.h"
#include "org/apache/lucene/analysis/no/NorwegianLightStemFilter.h"
#include "org/apache/lucene/analysis/no/NorwegianLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/no/NorwegianMinimalStemFilter.h"
#include "org/apache/lucene/analysis/no/NorwegianMinimalStemFilterFactory.h"
#include "org/apache/lucene/analysis/no/NorwegianNormalizationFilter.h"
#include "org/apache/lucene/analysis/no/NorwegianNormalizationFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace no {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "no");

            t_NorwegianAnalyzer::install(module);
            t_NorwegianLightStemFilter::install(module);
            t_NorwegianLightStemFilterFactory::install(module);
            t_NorwegianMinimalStemFilter::install(module);
            t_NorwegianMinimalStemFilterFactory::install(module);
            t_NorwegianNormalizationFilter::install(module);
            t_NorwegianNormalizationFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "no");

            t_NorwegianAnalyzer::initialize(module);
            t_NorwegianLightStemFilter::initialize(module);
            t_NorwegianLightStemFilterFactory::initialize(module);
            t_NorwegianMinimalStemFilter::initialize(module);
            t_NorwegianMinimalStemFilterFactory::initialize(module);
            t_NorwegianNormalizationFilter::initialize(module);
            t_NorwegianNormalizationFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/path/PathHierarchyTokenizer.h"
#include "org/apache/lucene/analysis/path/PathHierarchyTokenizerFactory.h"
#include "org/apache/lucene/analysis/path/ReversePathHierarchyTokenizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace path {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "path");

            t_PathHierarchyTokenizer::install(module);
            t_PathHierarchyTokenizerFactory::install(module);
            t_ReversePathHierarchyTokenizer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "path");

            t_PathHierarchyTokenizer::initialize(module);
            t_PathHierarchyTokenizerFactory::initialize(module);
            t_ReversePathHierarchyTokenizer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/pattern/PatternCaptureGroupFilterFactory.h"
#include "org/apache/lucene/analysis/pattern/PatternCaptureGroupTokenFilter.h"
#include "org/apache/lucene/analysis/pattern/PatternReplaceCharFilter.h"
#include "org/apache/lucene/analysis/pattern/PatternReplaceCharFilterFactory.h"
#include "org/apache/lucene/analysis/pattern/PatternReplaceFilter.h"
#include "org/apache/lucene/analysis/pattern/PatternReplaceFilterFactory.h"
#include "org/apache/lucene/analysis/pattern/PatternTokenizer.h"
#include "org/apache/lucene/analysis/pattern/PatternTokenizerFactory.h"
#include "org/apache/lucene/analysis/pattern/PatternTypingFilter.h"
#include "org/apache/lucene/analysis/pattern/PatternTypingFilter$PatternTypingRule.h"
#include "org/apache/lucene/analysis/pattern/PatternTypingFilterFactory.h"
#include "org/apache/lucene/analysis/pattern/SimplePatternSplitTokenizer.h"
#include "org/apache/lucene/analysis/pattern/SimplePatternSplitTokenizerFactory.h"
#include "org/apache/lucene/analysis/pattern/SimplePatternTokenizer.h"
#include "org/apache/lucene/analysis/pattern/SimplePatternTokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "pattern");

            t_PatternCaptureGroupFilterFactory::install(module);
            t_PatternCaptureGroupTokenFilter::install(module);
            t_PatternReplaceCharFilter::install(module);
            t_PatternReplaceCharFilterFactory::install(module);
            t_PatternReplaceFilter::install(module);
            t_PatternReplaceFilterFactory::install(module);
            t_PatternTokenizer::install(module);
            t_PatternTokenizerFactory::install(module);
            t_PatternTypingFilter::install(module);
            t_PatternTypingFilter$PatternTypingRule::install(module);
            t_PatternTypingFilterFactory::install(module);
            t_SimplePatternSplitTokenizer::install(module);
            t_SimplePatternSplitTokenizerFactory::install(module);
            t_SimplePatternTokenizer::install(module);
            t_SimplePatternTokenizerFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "pattern");

            t_PatternCaptureGroupFilterFactory::initialize(module);
            t_PatternCaptureGroupTokenFilter::initialize(module);
            t_PatternReplaceCharFilter::initialize(module);
            t_PatternReplaceCharFilterFactory::initialize(module);
            t_PatternReplaceFilter::initialize(module);
            t_PatternReplaceFilterFactory::initialize(module);
            t_PatternTokenizer::initialize(module);
            t_PatternTokenizerFactory::initialize(module);
            t_PatternTypingFilter::initialize(module);
            t_PatternTypingFilter$PatternTypingRule::initialize(module);
            t_PatternTypingFilterFactory::initialize(module);
            t_SimplePatternSplitTokenizer::initialize(module);
            t_SimplePatternSplitTokenizerFactory::initialize(module);
            t_SimplePatternTokenizer::initialize(module);
            t_SimplePatternTokenizerFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/payloads/AbstractEncoder.h"
#include "org/apache/lucene/analysis/payloads/DelimitedPayloadTokenFilter.h"
#include "org/apache/lucene/analysis/payloads/DelimitedPayloadTokenFilterFactory.h"
#include "org/apache/lucene/analysis/payloads/FloatEncoder.h"
#include "org/apache/lucene/analysis/payloads/IdentityEncoder.h"
#include "org/apache/lucene/analysis/payloads/IntegerEncoder.h"
#include "org/apache/lucene/analysis/payloads/NumericPayloadTokenFilter.h"
#include "org/apache/lucene/analysis/payloads/NumericPayloadTokenFilterFactory.h"
#include "org/apache/lucene/analysis/payloads/PayloadEncoder.h"
#include "org/apache/lucene/analysis/payloads/PayloadHelper.h"
#include "org/apache/lucene/analysis/payloads/TokenOffsetPayloadTokenFilter.h"
#include "org/apache/lucene/analysis/payloads/TokenOffsetPayloadTokenFilterFactory.h"
#include "org/apache/lucene/analysis/payloads/TypeAsPayloadTokenFilter.h"
#include "org/apache/lucene/analysis/payloads/TypeAsPayloadTokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace payloads {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "payloads");

            t_AbstractEncoder::install(module);
            t_DelimitedPayloadTokenFilter::install(module);
            t_DelimitedPayloadTokenFilterFactory::install(module);
            t_FloatEncoder::install(module);
            t_IdentityEncoder::install(module);
            t_IntegerEncoder::install(module);
            t_NumericPayloadTokenFilter::install(module);
            t_NumericPayloadTokenFilterFactory::install(module);
            t_PayloadEncoder::install(module);
            t_PayloadHelper::install(module);
            t_TokenOffsetPayloadTokenFilter::install(module);
            t_TokenOffsetPayloadTokenFilterFactory::install(module);
            t_TypeAsPayloadTokenFilter::install(module);
            t_TypeAsPayloadTokenFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "payloads");

            t_AbstractEncoder::initialize(module);
            t_DelimitedPayloadTokenFilter::initialize(module);
            t_DelimitedPayloadTokenFilterFactory::initialize(module);
            t_FloatEncoder::initialize(module);
            t_IdentityEncoder::initialize(module);
            t_IntegerEncoder::initialize(module);
            t_NumericPayloadTokenFilter::initialize(module);
            t_NumericPayloadTokenFilterFactory::initialize(module);
            t_PayloadEncoder::initialize(module);
            t_PayloadHelper::initialize(module);
            t_TokenOffsetPayloadTokenFilter::initialize(module);
            t_TokenOffsetPayloadTokenFilterFactory::initialize(module);
            t_TypeAsPayloadTokenFilter::initialize(module);
            t_TypeAsPayloadTokenFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/pl/PolishAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pl {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "pl");

            t_PolishAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "pl");

            t_PolishAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/pt/PortugueseAnalyzer.h"
#include "org/apache/lucene/analysis/pt/PortugueseLightStemFilter.h"
#include "org/apache/lucene/analysis/pt/PortugueseLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/pt/PortugueseMinimalStemFilter.h"
#include "org/apache/lucene/analysis/pt/PortugueseMinimalStemFilterFactory.h"
#include "org/apache/lucene/analysis/pt/PortugueseStemFilter.h"
#include "org/apache/lucene/analysis/pt/PortugueseStemFilterFactory.h"
#include "org/apache/lucene/analysis/pt/RSLPStemmerBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pt {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "pt");

            t_PortugueseAnalyzer::install(module);
            t_PortugueseLightStemFilter::install(module);
            t_PortugueseLightStemFilterFactory::install(module);
            t_PortugueseMinimalStemFilter::install(module);
            t_PortugueseMinimalStemFilterFactory::install(module);
            t_PortugueseStemFilter::install(module);
            t_PortugueseStemFilterFactory::install(module);
            t_RSLPStemmerBase::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "pt");

            t_PortugueseAnalyzer::initialize(module);
            t_PortugueseLightStemFilter::initialize(module);
            t_PortugueseLightStemFilterFactory::initialize(module);
            t_PortugueseMinimalStemFilter::initialize(module);
            t_PortugueseMinimalStemFilterFactory::initialize(module);
            t_PortugueseStemFilter::initialize(module);
            t_PortugueseStemFilterFactory::initialize(module);
            t_RSLPStemmerBase::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/query/QueryAutoStopWordAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace query {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "query");

            t_QueryAutoStopWordAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "query");

            t_QueryAutoStopWordAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/reverse/ReverseStringFilter.h"
#include "org/apache/lucene/analysis/reverse/ReverseStringFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace reverse {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "reverse");

            t_ReverseStringFilter::install(module);
            t_ReverseStringFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "reverse");

            t_ReverseStringFilter::initialize(module);
            t_ReverseStringFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ro/RomanianAnalyzer.h"
#include "org/apache/lucene/analysis/ro/RomanianNormalizationFilter.h"
#include "org/apache/lucene/analysis/ro/RomanianNormalizationFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ro {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ro");

            t_RomanianAnalyzer::install(module);
            t_RomanianNormalizationFilter::install(module);
            t_RomanianNormalizationFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ro");

            t_RomanianAnalyzer::initialize(module);
            t_RomanianNormalizationFilter::initialize(module);
            t_RomanianNormalizationFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ru/RussianAnalyzer.h"
#include "org/apache/lucene/analysis/ru/RussianLightStemFilter.h"
#include "org/apache/lucene/analysis/ru/RussianLightStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ru {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ru");

            t_RussianAnalyzer::install(module);
            t_RussianLightStemFilter::install(module);
            t_RussianLightStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ru");

            t_RussianAnalyzer::initialize(module);
            t_RussianLightStemFilter::initialize(module);
            t_RussianLightStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/shingle/FixedShingleFilter.h"
#include "org/apache/lucene/analysis/shingle/FixedShingleFilterFactory.h"
#include "org/apache/lucene/analysis/shingle/ShingleAnalyzerWrapper.h"
#include "org/apache/lucene/analysis/shingle/ShingleFilter.h"
#include "org/apache/lucene/analysis/shingle/ShingleFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace shingle {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "shingle");

            t_FixedShingleFilter::install(module);
            t_FixedShingleFilterFactory::install(module);
            t_ShingleAnalyzerWrapper::install(module);
            t_ShingleFilter::install(module);
            t_ShingleFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "shingle");

            t_FixedShingleFilter::initialize(module);
            t_FixedShingleFilterFactory::initialize(module);
            t_ShingleAnalyzerWrapper::initialize(module);
            t_ShingleFilter::initialize(module);
            t_ShingleFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/sinks/TeeSinkTokenFilter.h"
#include "org/apache/lucene/analysis/sinks/TeeSinkTokenFilter$SinkTokenStream.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace sinks {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "sinks");

            t_TeeSinkTokenFilter::install(module);
            t_TeeSinkTokenFilter$SinkTokenStream::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "sinks");

            t_TeeSinkTokenFilter::initialize(module);
            t_TeeSinkTokenFilter$SinkTokenStream::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/snowball/SnowballFilter.h"
#include "org/apache/lucene/analysis/snowball/SnowballPorterFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace snowball {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "snowball");

            t_SnowballFilter::install(module);
            t_SnowballPorterFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "snowball");

            t_SnowballFilter::initialize(module);
            t_SnowballPorterFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/sr/SerbianAnalyzer.h"
#include "org/apache/lucene/analysis/sr/SerbianNormalizationFilter.h"
#include "org/apache/lucene/analysis/sr/SerbianNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/sr/SerbianNormalizationRegularFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace sr {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "sr");

            t_SerbianAnalyzer::install(module);
            t_SerbianNormalizationFilter::install(module);
            t_SerbianNormalizationFilterFactory::install(module);
            t_SerbianNormalizationRegularFilter::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "sr");

            t_SerbianAnalyzer::initialize(module);
            t_SerbianNormalizationFilter::initialize(module);
            t_SerbianNormalizationFilterFactory::initialize(module);
            t_SerbianNormalizationRegularFilter::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/standard/StandardAnalyzer.h"
#include "org/apache/lucene/analysis/standard/StandardTokenizer.h"
#include "org/apache/lucene/analysis/standard/StandardTokenizerFactory.h"
#include "org/apache/lucene/analysis/standard/StandardTokenizerImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace standard {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "standard");

            t_StandardAnalyzer::install(module);
            t_StandardTokenizer::install(module);
            t_StandardTokenizerFactory::install(module);
            t_StandardTokenizerImpl::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "standard");

            t_StandardAnalyzer::initialize(module);
            t_StandardTokenizer::initialize(module);
            t_StandardTokenizerFactory::initialize(module);
            t_StandardTokenizerImpl::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/stempel/StempelFilter.h"
#include "org/apache/lucene/analysis/stempel/StempelPolishStemFilterFactory.h"
#include "org/apache/lucene/analysis/stempel/StempelStemmer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace stempel {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "stempel");

            t_StempelFilter::install(module);
            t_StempelPolishStemFilterFactory::install(module);
            t_StempelStemmer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "stempel");

            t_StempelFilter::initialize(module);
            t_StempelPolishStemFilterFactory::initialize(module);
            t_StempelStemmer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/sv/SwedishAnalyzer.h"
#include "org/apache/lucene/analysis/sv/SwedishLightStemFilter.h"
#include "org/apache/lucene/analysis/sv/SwedishLightStemFilterFactory.h"
#include "org/apache/lucene/analysis/sv/SwedishMinimalStemFilter.h"
#include "org/apache/lucene/analysis/sv/SwedishMinimalStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace sv {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "sv");

            t_SwedishAnalyzer::install(module);
            t_SwedishLightStemFilter::install(module);
            t_SwedishLightStemFilterFactory::install(module);
            t_SwedishMinimalStemFilter::install(module);
            t_SwedishMinimalStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "sv");

            t_SwedishAnalyzer::initialize(module);
            t_SwedishLightStemFilter::initialize(module);
            t_SwedishLightStemFilterFactory::initialize(module);
            t_SwedishMinimalStemFilter::initialize(module);
            t_SwedishMinimalStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/synonym/SolrSynonymParser.h"
#include "org/apache/lucene/analysis/synonym/SynonymFilter.h"
#include "org/apache/lucene/analysis/synonym/SynonymFilterFactory.h"
#include "org/apache/lucene/analysis/synonym/SynonymGraphFilter.h"
#include "org/apache/lucene/analysis/synonym/SynonymGraphFilterFactory.h"
#include "org/apache/lucene/analysis/synonym/SynonymMap.h"
#include "org/apache/lucene/analysis/synonym/SynonymMap$Builder.h"
#include "org/apache/lucene/analysis/synonym/SynonymMap$Parser.h"
#include "org/apache/lucene/analysis/synonym/WordnetSynonymParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {

          namespace word2vec {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "synonym");

            t_SolrSynonymParser::install(module);
            t_SynonymFilter::install(module);
            t_SynonymFilterFactory::install(module);
            t_SynonymGraphFilter::install(module);
            t_SynonymGraphFilterFactory::install(module);
            t_SynonymMap::install(module);
            t_SynonymMap$Builder::install(module);
            t_SynonymMap$Parser::install(module);
            t_WordnetSynonymParser::install(module);
            word2vec::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "synonym");

            t_SolrSynonymParser::initialize(module);
            t_SynonymFilter::initialize(module);
            t_SynonymFilterFactory::initialize(module);
            t_SynonymGraphFilter::initialize(module);
            t_SynonymGraphFilterFactory::initialize(module);
            t_SynonymMap::initialize(module);
            t_SynonymMap$Builder::initialize(module);
            t_SynonymMap$Parser::initialize(module);
            t_WordnetSynonymParser::initialize(module);
            word2vec::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/synonym/word2vec/Dl4jModelReader.h"
#include "org/apache/lucene/analysis/synonym/word2vec/TermAndBoost.h"
#include "org/apache/lucene/analysis/synonym/word2vec/Word2VecModel.h"
#include "org/apache/lucene/analysis/synonym/word2vec/Word2VecSynonymFilter.h"
#include "org/apache/lucene/analysis/synonym/word2vec/Word2VecSynonymFilterFactory.h"
#include "org/apache/lucene/analysis/synonym/word2vec/Word2VecSynonymProvider.h"
#include "org/apache/lucene/analysis/synonym/word2vec/Word2VecSynonymProviderFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {
          namespace word2vec {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.synonym", "word2vec");

              t_Dl4jModelReader::install(module);
              t_TermAndBoost::install(module);
              t_Word2VecModel::install(module);
              t_Word2VecSynonymFilter::install(module);
              t_Word2VecSynonymFilterFactory::install(module);
              t_Word2VecSynonymProvider::install(module);
              t_Word2VecSynonymProviderFactory::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.analysis.synonym", "word2vec");

              t_Dl4jModelReader::initialize(module);
              t_TermAndBoost::initialize(module);
              t_Word2VecModel::initialize(module);
              t_Word2VecSynonymFilter::initialize(module);
              t_Word2VecSynonymFilterFactory::initialize(module);
              t_Word2VecSynonymProvider::initialize(module);
              t_Word2VecSynonymProviderFactory::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/ta/TamilAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ta {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ta");

            t_TamilAnalyzer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "ta");

            t_TamilAnalyzer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/te/TeluguAnalyzer.h"
#include "org/apache/lucene/analysis/te/TeluguNormalizationFilter.h"
#include "org/apache/lucene/analysis/te/TeluguNormalizationFilterFactory.h"
#include "org/apache/lucene/analysis/te/TeluguStemFilter.h"
#include "org/apache/lucene/analysis/te/TeluguStemFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace te {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "te");

            t_TeluguAnalyzer::install(module);
            t_TeluguNormalizationFilter::install(module);
            t_TeluguNormalizationFilterFactory::install(module);
            t_TeluguStemFilter::install(module);
            t_TeluguStemFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "te");

            t_TeluguAnalyzer::initialize(module);
            t_TeluguNormalizationFilter::initialize(module);
            t_TeluguNormalizationFilterFactory::initialize(module);
            t_TeluguStemFilter::initialize(module);
            t_TeluguStemFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/th/ThaiAnalyzer.h"
#include "org/apache/lucene/analysis/th/ThaiTokenizer.h"
#include "org/apache/lucene/analysis/th/ThaiTokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace th {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "th");

            t_ThaiAnalyzer::install(module);
            t_ThaiTokenizer::install(module);
            t_ThaiTokenizerFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "th");

            t_ThaiAnalyzer::initialize(module);
            t_ThaiTokenizer::initialize(module);
            t_ThaiTokenizerFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/tokenattributes/BytesTermAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/BytesTermAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/CharTermAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/CharTermAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/FlagsAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/FlagsAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/KeywordAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/KeywordAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/OffsetAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/OffsetAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/PackedTokenAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/PayloadAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/PayloadAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/PositionIncrementAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/PositionIncrementAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/PositionLengthAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/PositionLengthAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/SentenceAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/SentenceAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/TermFrequencyAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/TermFrequencyAttributeImpl.h"
#include "org/apache/lucene/analysis/tokenattributes/TermToBytesRefAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/TypeAttribute.h"
#include "org/apache/lucene/analysis/tokenattributes/TypeAttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "tokenattributes");

            t_BytesTermAttribute::install(module);
            t_BytesTermAttributeImpl::install(module);
            t_CharTermAttribute::install(module);
            t_CharTermAttributeImpl::install(module);
            t_FlagsAttribute::install(module);
            t_FlagsAttributeImpl::install(module);
            t_KeywordAttribute::install(module);
            t_KeywordAttributeImpl::install(module);
            t_OffsetAttribute::install(module);
            t_OffsetAttributeImpl::install(module);
            t_PackedTokenAttributeImpl::install(module);
            t_PayloadAttribute::install(module);
            t_PayloadAttributeImpl::install(module);
            t_PositionIncrementAttribute::install(module);
            t_PositionIncrementAttributeImpl::install(module);
            t_PositionLengthAttribute::install(module);
            t_PositionLengthAttributeImpl::install(module);
            t_SentenceAttribute::install(module);
            t_SentenceAttributeImpl::install(module);
            t_TermFrequencyAttribute::install(module);
            t_TermFrequencyAttributeImpl::install(module);
            t_TermToBytesRefAttribute::install(module);
            t_TypeAttribute::install(module);
            t_TypeAttributeImpl::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "tokenattributes");

            t_BytesTermAttribute::initialize(module);
            t_BytesTermAttributeImpl::initialize(module);
            t_CharTermAttribute::initialize(module);
            t_CharTermAttributeImpl::initialize(module);
            t_FlagsAttribute::initialize(module);
            t_FlagsAttributeImpl::initialize(module);
            t_KeywordAttribute::initialize(module);
            t_KeywordAttributeImpl::initialize(module);
            t_OffsetAttribute::initialize(module);
            t_OffsetAttributeImpl::initialize(module);
            t_PackedTokenAttributeImpl::initialize(module);
            t_PayloadAttribute::initialize(module);
            t_PayloadAttributeImpl::initialize(module);
            t_PositionIncrementAttribute::initialize(module);
            t_PositionIncrementAttributeImpl::initialize(module);
            t_PositionLengthAttribute::initialize(module);
            t_PositionLengthAttributeImpl::initialize(module);
            t_SentenceAttribute::initialize(module);
            t_SentenceAttributeImpl::initialize(module);
            t_TermFrequencyAttribute::initialize(module);
            t_TermFrequencyAttributeImpl::initialize(module);
            t_TermToBytesRefAttribute::initialize(module);
            t_TypeAttribute::initialize(module);
            t_TypeAttributeImpl::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/tr/ApostropheFilter.h"
#include "org/apache/lucene/analysis/tr/ApostropheFilterFactory.h"
#include "org/apache/lucene/analysis/tr/TurkishAnalyzer.h"
#include "org/apache/lucene/analysis/tr/TurkishLowerCaseFilter.h"
#include "org/apache/lucene/analysis/tr/TurkishLowerCaseFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tr {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "tr");

            t_ApostropheFilter::install(module);
            t_ApostropheFilterFactory::install(module);
            t_TurkishAnalyzer::install(module);
            t_TurkishLowerCaseFilter::install(module);
            t_TurkishLowerCaseFilterFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "tr");

            t_ApostropheFilter::initialize(module);
            t_ApostropheFilterFactory::initialize(module);
            t_TurkishAnalyzer::initialize(module);
            t_TurkishLowerCaseFilter::initialize(module);
            t_TurkishLowerCaseFilterFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/util/CSVUtil.h"
#include "org/apache/lucene/analysis/util/CharArrayIterator.h"
#include "org/apache/lucene/analysis/util/CharTokenizer.h"
#include "org/apache/lucene/analysis/util/ElisionFilter.h"
#include "org/apache/lucene/analysis/util/ElisionFilterFactory.h"
#include "org/apache/lucene/analysis/util/FilesystemResourceLoader.h"
#include "org/apache/lucene/analysis/util/OpenStringBuilder.h"
#include "org/apache/lucene/analysis/util/RollingCharBuffer.h"
#include "org/apache/lucene/analysis/util/SegmentingTokenizerBase.h"
#include "org/apache/lucene/analysis/util/StemmerUtil.h"
#include "org/apache/lucene/analysis/util/UnicodeProps.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "util");

            t_CSVUtil::install(module);
            t_CharArrayIterator::install(module);
            t_CharTokenizer::install(module);
            t_ElisionFilter::install(module);
            t_ElisionFilterFactory::install(module);
            t_FilesystemResourceLoader::install(module);
            t_OpenStringBuilder::install(module);
            t_RollingCharBuffer::install(module);
            t_SegmentingTokenizerBase::install(module);
            t_StemmerUtil::install(module);
            t_UnicodeProps::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "util");

            t_CSVUtil::initialize(module);
            t_CharArrayIterator::initialize(module);
            t_CharTokenizer::initialize(module);
            t_ElisionFilter::initialize(module);
            t_ElisionFilterFactory::initialize(module);
            t_FilesystemResourceLoader::initialize(module);
            t_OpenStringBuilder::initialize(module);
            t_RollingCharBuffer::initialize(module);
            t_SegmentingTokenizerBase::initialize(module);
            t_StemmerUtil::initialize(module);
            t_UnicodeProps::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/analysis/wikipedia/WikipediaTokenizer.h"
#include "org/apache/lucene/analysis/wikipedia/WikipediaTokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace wikipedia {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "wikipedia");

            t_WikipediaTokenizer::install(module);
            t_WikipediaTokenizerFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.analysis", "wikipedia");

            t_WikipediaTokenizer::initialize(module);
            t_WikipediaTokenizerFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/Placeholder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {

        namespace compressing {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene40 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene50 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene60 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene70 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene80 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene84 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene86 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene87 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene90 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene91 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene912 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene92 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene94 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene95 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene99 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace packed {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace store {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "backward_codecs");

          t_Placeholder::install(module);
          compressing::__install__(module);
          lucene40::__install__(module);
          lucene50::__install__(module);
          lucene60::__install__(module);
          lucene70::__install__(module);
          lucene80::__install__(module);
          lucene84::__install__(module);
          lucene86::__install__(module);
          lucene87::__install__(module);
          lucene90::__install__(module);
          lucene91::__install__(module);
          lucene912::__install__(module);
          lucene92::__install__(module);
          lucene94::__install__(module);
          lucene95::__install__(module);
          lucene99::__install__(module);
          packed::__install__(module);
          store::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "backward_codecs");

          t_Placeholder::initialize(module);
          compressing::__initialize__(module);
          lucene40::__initialize__(module);
          lucene50::__initialize__(module);
          lucene60::__initialize__(module);
          lucene70::__initialize__(module);
          lucene80::__initialize__(module);
          lucene84::__initialize__(module);
          lucene86::__initialize__(module);
          lucene87::__initialize__(module);
          lucene90::__initialize__(module);
          lucene91::__initialize__(module);
          lucene912::__initialize__(module);
          lucene92::__initialize__(module);
          lucene94::__initialize__(module);
          lucene95::__initialize__(module);
          lucene99::__initialize__(module);
          packed::__initialize__(module);
          store::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/compressing/CompressionMode.h"
#include "org/apache/lucene/backward_codecs/compressing/Compressor.h"
#include "org/apache/lucene/backward_codecs/compressing/Decompressor.h"
#include "org/apache/lucene/backward_codecs/compressing/MatchingReaders.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace compressing {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "compressing");

            t_CompressionMode::install(module);
            t_Compressor::install(module);
            t_Decompressor::install(module);
            t_MatchingReaders::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "compressing");

            t_CompressionMode::initialize(module);
            t_Compressor::initialize(module);
            t_Decompressor::initialize(module);
            t_MatchingReaders::initialize(module);
          }
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene40 {

          namespace blocktree {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene40");

            blocktree::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene40");

            blocktree::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene40/blocktree/FieldReader.h"
#include "org/apache/lucene/backward_codecs/lucene40/blocktree/Lucene40BlockTreeTermsReader.h"
#include "org/apache/lucene/backward_codecs/lucene40/blocktree/Stats.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene40 {
          namespace blocktree {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.backward_codecs.lucene40", "blocktree");

              t_FieldReader::install(module);
              t_Lucene40BlockTreeTermsReader::install(module);
              t_Stats::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.backward_codecs.lucene40", "blocktree");

              t_FieldReader::initialize(module);
              t_Lucene40BlockTreeTermsReader::initialize(module);
              t_Stats::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene50/Lucene50CompoundFormat.h"
#include "org/apache/lucene/backward_codecs/lucene50/Lucene50CompoundReader$FileEntry.h"
#include "org/apache/lucene/backward_codecs/lucene50/Lucene50LiveDocsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene50/Lucene50PostingsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene50/Lucene50PostingsFormat$IntBlockTermState.h"
#include "org/apache/lucene/backward_codecs/lucene50/Lucene50PostingsReader.h"
#include "org/apache/lucene/backward_codecs/lucene50/Lucene50StoredFieldsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene50/Lucene50StoredFieldsFormat$Mode.h"
#include "org/apache/lucene/backward_codecs/lucene50/Lucene50TermVectorsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene50 {

          namespace compressing {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene50");

            t_Lucene50CompoundFormat::install(module);
            t_Lucene50CompoundReader$FileEntry::install(module);
            t_Lucene50LiveDocsFormat::install(module);
            t_Lucene50PostingsFormat::install(module);
            t_Lucene50PostingsFormat$IntBlockTermState::install(module);
            t_Lucene50PostingsReader::install(module);
            t_Lucene50StoredFieldsFormat::install(module);
            t_Lucene50StoredFieldsFormat$Mode::install(module);
            t_Lucene50TermVectorsFormat::install(module);
            compressing::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene50");

            t_Lucene50CompoundFormat::initialize(module);
            t_Lucene50CompoundReader$FileEntry::initialize(module);
            t_Lucene50LiveDocsFormat::initialize(module);
            t_Lucene50PostingsFormat::initialize(module);
            t_Lucene50PostingsFormat$IntBlockTermState::initialize(module);
            t_Lucene50PostingsReader::initialize(module);
            t_Lucene50StoredFieldsFormat::initialize(module);
            t_Lucene50StoredFieldsFormat$Mode::initialize(module);
            t_Lucene50TermVectorsFormat::initialize(module);
            compressing::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene50/compressing/Lucene50CompressingStoredFieldsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene50/compressing/Lucene50CompressingStoredFieldsReader.h"
#include "org/apache/lucene/backward_codecs/lucene50/compressing/Lucene50CompressingTermVectorsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene50/compressing/Lucene50CompressingTermVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene50 {
          namespace compressing {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.backward_codecs.lucene50", "compressing");

              t_Lucene50CompressingStoredFieldsFormat::install(module);
              t_Lucene50CompressingStoredFieldsReader::install(module);
              t_Lucene50CompressingTermVectorsFormat::install(module);
              t_Lucene50CompressingTermVectorsReader::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.backward_codecs.lucene50", "compressing");

              t_Lucene50CompressingStoredFieldsFormat::initialize(module);
              t_Lucene50CompressingStoredFieldsReader::initialize(module);
              t_Lucene50CompressingTermVectorsFormat::initialize(module);
              t_Lucene50CompressingTermVectorsReader::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene60/Lucene60FieldInfosFormat.h"
#include "org/apache/lucene/backward_codecs/lucene60/Lucene60PointsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene60/Lucene60PointsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene60 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene60");

            t_Lucene60FieldInfosFormat::install(module);
            t_Lucene60PointsFormat::install(module);
            t_Lucene60PointsReader::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene60");

            t_Lucene60FieldInfosFormat::initialize(module);
            t_Lucene60PointsFormat::initialize(module);
            t_Lucene60PointsReader::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene70/Lucene70SegmentInfoFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene70 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene70");

            t_Lucene70SegmentInfoFormat::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene70");

            t_Lucene70SegmentInfoFormat::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene80/Lucene80Codec.h"
#include "org/apache/lucene/backward_codecs/lucene80/Lucene80DocValuesFormat.h"
#include "org/apache/lucene/backward_codecs/lucene80/Lucene80DocValuesFormat$Mode.h"
#include "org/apache/lucene/backward_codecs/lucene80/Lucene80NormsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene80 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene80");

            t_Lucene80Codec::install(module);
            t_Lucene80DocValuesFormat::install(module);
            t_Lucene80DocValuesFormat$Mode::install(module);
            t_Lucene80NormsFormat::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene80");

            t_Lucene80Codec::initialize(module);
            t_Lucene80DocValuesFormat::initialize(module);
            t_Lucene80DocValuesFormat$Mode::initialize(module);
            t_Lucene80NormsFormat::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene84/ForDeltaUtil.h"
#include "org/apache/lucene/backward_codecs/lucene84/Lucene84Codec.h"
#include "org/apache/lucene/backward_codecs/lucene84/Lucene84PostingsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene84/Lucene84PostingsFormat$IntBlockTermState.h"
#include "org/apache/lucene/backward_codecs/lucene84/Lucene84PostingsReader.h"
#include "org/apache/lucene/backward_codecs/lucene84/PForUtil.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene84 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene84");

            t_ForDeltaUtil::install(module);
            t_Lucene84Codec::install(module);
            t_Lucene84PostingsFormat::install(module);
            t_Lucene84PostingsFormat$IntBlockTermState::install(module);
            t_Lucene84PostingsReader::install(module);
            t_PForUtil::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene84");

            t_ForDeltaUtil::initialize(module);
            t_Lucene84Codec::initialize(module);
            t_Lucene84PostingsFormat::initialize(module);
            t_Lucene84PostingsFormat$IntBlockTermState::initialize(module);
            t_Lucene84PostingsReader::initialize(module);
            t_PForUtil::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene86/Lucene86Codec.h"
#include "org/apache/lucene/backward_codecs/lucene86/Lucene86PointsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene86/Lucene86PointsReader.h"
#include "org/apache/lucene/backward_codecs/lucene86/Lucene86SegmentInfoFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene86 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene86");

            t_Lucene86Codec::install(module);
            t_Lucene86PointsFormat::install(module);
            t_Lucene86PointsReader::install(module);
            t_Lucene86SegmentInfoFormat::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene86");

            t_Lucene86Codec::initialize(module);
            t_Lucene86PointsFormat::initialize(module);
            t_Lucene86PointsReader::initialize(module);
            t_Lucene86SegmentInfoFormat::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene87/DeflateWithPresetDictCompressionMode.h"
#include "org/apache/lucene/backward_codecs/lucene87/LZ4WithPresetDictCompressionMode.h"
#include "org/apache/lucene/backward_codecs/lucene87/Lucene87Codec.h"
#include "org/apache/lucene/backward_codecs/lucene87/Lucene87Codec$Mode.h"
#include "org/apache/lucene/backward_codecs/lucene87/Lucene87StoredFieldsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene87/Lucene87StoredFieldsFormat$Mode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene87 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene87");

            t_DeflateWithPresetDictCompressionMode::install(module);
            t_LZ4WithPresetDictCompressionMode::install(module);
            t_Lucene87Codec::install(module);
            t_Lucene87Codec$Mode::install(module);
            t_Lucene87StoredFieldsFormat::install(module);
            t_Lucene87StoredFieldsFormat$Mode::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene87");

            t_DeflateWithPresetDictCompressionMode::initialize(module);
            t_LZ4WithPresetDictCompressionMode::initialize(module);
            t_Lucene87Codec::initialize(module);
            t_Lucene87Codec$Mode::initialize(module);
            t_Lucene87StoredFieldsFormat::initialize(module);
            t_Lucene87StoredFieldsFormat$Mode::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene90/Lucene90BoundsChecker.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90BoundsChecker$Max.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90BoundsChecker$Min.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90Codec.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90Codec$Mode.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90FieldInfosFormat.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90HnswGraphBuilder.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90HnswVectorsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90HnswVectorsReader.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90NeighborArray.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90OnHeapHnswGraph.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90PostingsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90PostingsFormat$IntBlockTermState.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90PostingsReader.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90PostingsWriter.h"
#include "org/apache/lucene/backward_codecs/lucene90/Lucene90SegmentInfoFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene90 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene90");

            t_Lucene90BoundsChecker::install(module);
            t_Lucene90BoundsChecker$Max::install(module);
            t_Lucene90BoundsChecker$Min::install(module);
            t_Lucene90Codec::install(module);
            t_Lucene90Codec$Mode::install(module);
            t_Lucene90FieldInfosFormat::install(module);
            t_Lucene90HnswGraphBuilder::install(module);
            t_Lucene90HnswVectorsFormat::install(module);
            t_Lucene90HnswVectorsReader::install(module);
            t_Lucene90NeighborArray::install(module);
            t_Lucene90OnHeapHnswGraph::install(module);
            t_Lucene90PostingsFormat::install(module);
            t_Lucene90PostingsFormat$IntBlockTermState::install(module);
            t_Lucene90PostingsReader::install(module);
            t_Lucene90PostingsWriter::install(module);
            t_Lucene90SegmentInfoFormat::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene90");

            t_Lucene90BoundsChecker::initialize(module);
            t_Lucene90BoundsChecker$Max::initialize(module);
            t_Lucene90BoundsChecker$Min::initialize(module);
            t_Lucene90Codec::initialize(module);
            t_Lucene90Codec$Mode::initialize(module);
            t_Lucene90FieldInfosFormat::initialize(module);
            t_Lucene90HnswGraphBuilder::initialize(module);
            t_Lucene90HnswVectorsFormat::initialize(module);
            t_Lucene90HnswVectorsReader::initialize(module);
            t_Lucene90NeighborArray::initialize(module);
            t_Lucene90OnHeapHnswGraph::initialize(module);
            t_Lucene90PostingsFormat::initialize(module);
            t_Lucene90PostingsFormat$IntBlockTermState::initialize(module);
            t_Lucene90PostingsReader::initialize(module);
            t_Lucene90PostingsWriter::initialize(module);
            t_Lucene90SegmentInfoFormat::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene91/Lucene91BoundsChecker.h"
#include "org/apache/lucene/backward_codecs/lucene91/Lucene91BoundsChecker$Max.h"
#include "org/apache/lucene/backward_codecs/lucene91/Lucene91BoundsChecker$Min.h"
#include "org/apache/lucene/backward_codecs/lucene91/Lucene91Codec.h"
#include "org/apache/lucene/backward_codecs/lucene91/Lucene91Codec$Mode.h"
#include "org/apache/lucene/backward_codecs/lucene91/Lucene91HnswVectorsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene91/Lucene91HnswVectorsReader.h"
#include "org/apache/lucene/backward_codecs/lucene91/Lucene91NeighborArray.h"
#include "org/apache/lucene/backward_codecs/lucene91/Lucene91OnHeapHnswGraph.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene91 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene91");

            t_Lucene91BoundsChecker::install(module);
            t_Lucene91BoundsChecker$Max::install(module);
            t_Lucene91BoundsChecker$Min::install(module);
            t_Lucene91Codec::install(module);
            t_Lucene91Codec$Mode::install(module);
            t_Lucene91HnswVectorsFormat::install(module);
            t_Lucene91HnswVectorsReader::install(module);
            t_Lucene91NeighborArray::install(module);
            t_Lucene91OnHeapHnswGraph::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene91");

            t_Lucene91BoundsChecker::initialize(module);
            t_Lucene91BoundsChecker$Max::initialize(module);
            t_Lucene91BoundsChecker$Min::initialize(module);
            t_Lucene91Codec::initialize(module);
            t_Lucene91Codec$Mode::initialize(module);
            t_Lucene91HnswVectorsFormat::initialize(module);
            t_Lucene91HnswVectorsReader::initialize(module);
            t_Lucene91NeighborArray::initialize(module);
            t_Lucene91OnHeapHnswGraph::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene912/Lucene912Codec.h"
#include "org/apache/lucene/backward_codecs/lucene912/Lucene912Codec$Mode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene912 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene912");

            t_Lucene912Codec::install(module);
            t_Lucene912Codec$Mode::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene912");

            t_Lucene912Codec::initialize(module);
            t_Lucene912Codec$Mode::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene92/Lucene92Codec.h"
#include "org/apache/lucene/backward_codecs/lucene92/Lucene92Codec$Mode.h"
#include "org/apache/lucene/backward_codecs/lucene92/Lucene92HnswVectorsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene92/Lucene92HnswVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene92 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene92");

            t_Lucene92Codec::install(module);
            t_Lucene92Codec$Mode::install(module);
            t_Lucene92HnswVectorsFormat::install(module);
            t_Lucene92HnswVectorsReader::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene92");

            t_Lucene92Codec::initialize(module);
            t_Lucene92Codec$Mode::initialize(module);
            t_Lucene92HnswVectorsFormat::initialize(module);
            t_Lucene92HnswVectorsReader::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene94/Lucene94Codec.h"
#include "org/apache/lucene/backward_codecs/lucene94/Lucene94Codec$Mode.h"
#include "org/apache/lucene/backward_codecs/lucene94/Lucene94HnswVectorsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene94/Lucene94HnswVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene94 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene94");

            t_Lucene94Codec::install(module);
            t_Lucene94Codec$Mode::install(module);
            t_Lucene94HnswVectorsFormat::install(module);
            t_Lucene94HnswVectorsReader::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene94");

            t_Lucene94Codec::initialize(module);
            t_Lucene94Codec$Mode::initialize(module);
            t_Lucene94HnswVectorsFormat::initialize(module);
            t_Lucene94HnswVectorsReader::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene95/Lucene95Codec.h"
#include "org/apache/lucene/backward_codecs/lucene95/Lucene95Codec$Mode.h"
#include "org/apache/lucene/backward_codecs/lucene95/Lucene95HnswVectorsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene95/Lucene95HnswVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene95 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene95");

            t_Lucene95Codec::install(module);
            t_Lucene95Codec$Mode::install(module);
            t_Lucene95HnswVectorsFormat::install(module);
            t_Lucene95HnswVectorsReader::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene95");

            t_Lucene95Codec::initialize(module);
            t_Lucene95Codec$Mode::initialize(module);
            t_Lucene95HnswVectorsFormat::initialize(module);
            t_Lucene95HnswVectorsReader::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/lucene99/ForDeltaUtil.h"
#include "org/apache/lucene/backward_codecs/lucene99/Lucene99Codec.h"
#include "org/apache/lucene/backward_codecs/lucene99/Lucene99Codec$Mode.h"
#include "org/apache/lucene/backward_codecs/lucene99/Lucene99PostingsFormat.h"
#include "org/apache/lucene/backward_codecs/lucene99/Lucene99PostingsFormat$IntBlockTermState.h"
#include "org/apache/lucene/backward_codecs/lucene99/Lucene99PostingsReader.h"
#include "org/apache/lucene/backward_codecs/lucene99/Lucene99SkipReader.h"
#include "org/apache/lucene/backward_codecs/lucene99/Lucene99SkipWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene99 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene99");

            t_ForDeltaUtil::install(module);
            t_Lucene99Codec::install(module);
            t_Lucene99Codec$Mode::install(module);
            t_Lucene99PostingsFormat::install(module);
            t_Lucene99PostingsFormat$IntBlockTermState::install(module);
            t_Lucene99PostingsReader::install(module);
            t_Lucene99SkipReader::install(module);
            t_Lucene99SkipWriter::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "lucene99");

            t_ForDeltaUtil::initialize(module);
            t_Lucene99Codec::initialize(module);
            t_Lucene99Codec$Mode::initialize(module);
            t_Lucene99PostingsFormat::initialize(module);
            t_Lucene99PostingsFormat$IntBlockTermState::initialize(module);
            t_Lucene99PostingsReader::initialize(module);
            t_Lucene99SkipReader::initialize(module);
            t_Lucene99SkipWriter::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/packed/LegacyDirectMonotonicReader.h"
#include "org/apache/lucene/backward_codecs/packed/LegacyDirectMonotonicReader$Meta.h"
#include "org/apache/lucene/backward_codecs/packed/LegacyDirectMonotonicWriter.h"
#include "org/apache/lucene/backward_codecs/packed/LegacyDirectReader.h"
#include "org/apache/lucene/backward_codecs/packed/LegacyDirectWriter.h"
#include "org/apache/lucene/backward_codecs/packed/LegacyPackedInts.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace packed {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "packed");

            t_LegacyDirectMonotonicReader::install(module);
            t_LegacyDirectMonotonicReader$Meta::install(module);
            t_LegacyDirectMonotonicWriter::install(module);
            t_LegacyDirectReader::install(module);
            t_LegacyDirectWriter::install(module);
            t_LegacyPackedInts::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "packed");

            t_LegacyDirectMonotonicReader::initialize(module);
            t_LegacyDirectMonotonicReader$Meta::initialize(module);
            t_LegacyDirectMonotonicWriter::initialize(module);
            t_LegacyDirectReader::initialize(module);
            t_LegacyDirectWriter::initialize(module);
            t_LegacyPackedInts::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/backward_codecs/store/EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput.h"
#include "org/apache/lucene/backward_codecs/store/EndiannessReverserUtil.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace store {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "store");

            t_EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput::install(module);
            t_EndiannessReverserUtil::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.backward_codecs", "store");

            t_EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput::initialize(module);
            t_EndiannessReverserUtil::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/classification/BM25NBClassifier.h"
#include "org/apache/lucene/classification/BooleanPerceptronClassifier.h"
#include "org/apache/lucene/classification/CachingNaiveBayesClassifier.h"
#include "org/apache/lucene/classification/ClassificationResult.h"
#include "org/apache/lucene/classification/Classifier.h"
#include "org/apache/lucene/classification/KNearestFuzzyClassifier.h"
#include "org/apache/lucene/classification/KNearestNeighborClassifier.h"
#include "org/apache/lucene/classification/SimpleNaiveBayesClassifier.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {

        namespace document {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace utils {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "classification");

          t_BM25NBClassifier::install(module);
          t_BooleanPerceptronClassifier::install(module);
          t_CachingNaiveBayesClassifier::install(module);
          t_ClassificationResult::install(module);
          t_Classifier::install(module);
          t_KNearestFuzzyClassifier::install(module);
          t_KNearestNeighborClassifier::install(module);
          t_SimpleNaiveBayesClassifier::install(module);
          document::__install__(module);
          utils::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "classification");

          t_BM25NBClassifier::initialize(module);
          t_BooleanPerceptronClassifier::initialize(module);
          t_CachingNaiveBayesClassifier::initialize(module);
          t_ClassificationResult::initialize(module);
          t_Classifier::initialize(module);
          t_KNearestFuzzyClassifier::initialize(module);
          t_KNearestNeighborClassifier::initialize(module);
          t_SimpleNaiveBayesClassifier::initialize(module);
          document::__initialize__(module);
          utils::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/classification/document/DocumentClassifier.h"
#include "org/apache/lucene/classification/document/KNearestNeighborDocumentClassifier.h"
#include "org/apache/lucene/classification/document/SimpleNaiveBayesDocumentClassifier.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        namespace document {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.classification", "document");

            t_DocumentClassifier::install(module);
            t_KNearestNeighborDocumentClassifier::install(module);
            t_SimpleNaiveBayesDocumentClassifier::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.classification", "document");

            t_DocumentClassifier::initialize(module);
            t_KNearestNeighborDocumentClassifier::initialize(module);
            t_SimpleNaiveBayesDocumentClassifier::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/classification/utils/ConfusionMatrixGenerator.h"
#include "org/apache/lucene/classification/utils/ConfusionMatrixGenerator$ConfusionMatrix.h"
#include "org/apache/lucene/classification/utils/DatasetSplitter.h"
#include "org/apache/lucene/classification/utils/DocToDoubleVectorUtils.h"
#include "org/apache/lucene/classification/utils/NearestFuzzyQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {
        namespace utils {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.classification", "utils");

            t_ConfusionMatrixGenerator::install(module);
            t_ConfusionMatrixGenerator$ConfusionMatrix::install(module);
            t_DatasetSplitter::install(module);
            t_DocToDoubleVectorUtils::install(module);
            t_NearestFuzzyQuery::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.classification", "utils");

            t_ConfusionMatrixGenerator::initialize(module);
            t_ConfusionMatrixGenerator$ConfusionMatrix::initialize(module);
            t_DatasetSplitter::initialize(module);
            t_DocToDoubleVectorUtils::initialize(module);
            t_NearestFuzzyQuery::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/BlockTermState.h"
#include "org/apache/lucene/codecs/BufferingKnnVectorsWriter.h"
#include "org/apache/lucene/codecs/Codec.h"
#include "org/apache/lucene/codecs/CodecUtil.h"
#include "org/apache/lucene/codecs/CompetitiveImpactAccumulator.h"
#include "org/apache/lucene/codecs/CompoundDirectory.h"
#include "org/apache/lucene/codecs/CompoundFormat.h"
#include "org/apache/lucene/codecs/DocValuesConsumer.h"
#include "org/apache/lucene/codecs/DocValuesFormat.h"
#include "org/apache/lucene/codecs/DocValuesProducer.h"
#include "org/apache/lucene/codecs/FieldInfosFormat.h"
#include "org/apache/lucene/codecs/FieldsConsumer.h"
#include "org/apache/lucene/codecs/FieldsProducer.h"
#include "org/apache/lucene/codecs/FilterCodec.h"
#include "org/apache/lucene/codecs/KnnFieldVectorsWriter.h"
#include "org/apache/lucene/codecs/KnnVectorsFormat.h"
#include "org/apache/lucene/codecs/KnnVectorsReader.h"
#include "org/apache/lucene/codecs/KnnVectorsWriter.h"
#include "org/apache/lucene/codecs/KnnVectorsWriter$MergedVectorValues.h"
#include "org/apache/lucene/codecs/LiveDocsFormat.h"
#include "org/apache/lucene/codecs/MultiLevelSkipListReader.h"
#include "org/apache/lucene/codecs/MultiLevelSkipListWriter.h"
#include "org/apache/lucene/codecs/MutablePointTree.h"
#include "org/apache/lucene/codecs/NormsConsumer.h"
#include "org/apache/lucene/codecs/NormsFormat.h"
#include "org/apache/lucene/codecs/NormsProducer.h"
#include "org/apache/lucene/codecs/PointsFormat.h"
#include "org/apache/lucene/codecs/PointsReader.h"
#include "org/apache/lucene/codecs/PointsWriter.h"
#include "org/apache/lucene/codecs/PostingsFormat.h"
#include "org/apache/lucene/codecs/PostingsReaderBase.h"
#include "org/apache/lucene/codecs/PostingsWriterBase.h"
#include "org/apache/lucene/codecs/PushPostingsWriterBase.h"
#include "org/apache/lucene/codecs/SegmentInfoFormat.h"
#include "org/apache/lucene/codecs/StoredFieldsFormat.h"
#include "org/apache/lucene/codecs/StoredFieldsReader.h"
#include "org/apache/lucene/codecs/StoredFieldsWriter.h"
#include "org/apache/lucene/codecs/TermStats.h"
#include "org/apache/lucene/codecs/TermVectorsFormat.h"
#include "org/apache/lucene/codecs/TermVectorsReader.h"
#include "org/apache/lucene/codecs/TermVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        namespace bitvectors {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace blockterms {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace blocktreeords {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace bloom {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace compressing {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace hnsw {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene100 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene90 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene912 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene94 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene95 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace lucene99 {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace memory {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace perfield {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace simpletext {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace uniformsplit {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "codecs");

          t_BlockTermState::install(module);
          t_BufferingKnnVectorsWriter::install(module);
          t_Codec::install(module);
          t_CodecUtil::install(module);
          t_CompetitiveImpactAccumulator::install(module);
          t_CompoundDirectory::install(module);
          t_CompoundFormat::install(module);
          t_DocValuesConsumer::install(module);
          t_DocValuesFormat::install(module);
          t_DocValuesProducer::install(module);
          t_FieldInfosFormat::install(module);
          t_FieldsConsumer::install(module);
          t_FieldsProducer::install(module);
          t_FilterCodec::install(module);
          t_KnnFieldVectorsWriter::install(module);
          t_KnnVectorsFormat::install(module);
          t_KnnVectorsReader::install(module);
          t_KnnVectorsWriter::install(module);
          t_KnnVectorsWriter$MergedVectorValues::install(module);
          t_LiveDocsFormat::install(module);
          t_MultiLevelSkipListReader::install(module);
          t_MultiLevelSkipListWriter::install(module);
          t_MutablePointTree::install(module);
          t_NormsConsumer::install(module);
          t_NormsFormat::install(module);
          t_NormsProducer::install(module);
          t_PointsFormat::install(module);
          t_PointsReader::install(module);
          t_PointsWriter::install(module);
          t_PostingsFormat::install(module);
          t_PostingsReaderBase::install(module);
          t_PostingsWriterBase::install(module);
          t_PushPostingsWriterBase::install(module);
          t_SegmentInfoFormat::install(module);
          t_StoredFieldsFormat::install(module);
          t_StoredFieldsReader::install(module);
          t_StoredFieldsWriter::install(module);
          t_TermStats::install(module);
          t_TermVectorsFormat::install(module);
          t_TermVectorsReader::install(module);
          t_TermVectorsWriter::install(module);
          bitvectors::__install__(module);
          blockterms::__install__(module);
          blocktreeords::__install__(module);
          bloom::__install__(module);
          compressing::__install__(module);
          hnsw::__install__(module);
          lucene100::__install__(module);
          lucene90::__install__(module);
          lucene912::__install__(module);
          lucene94::__install__(module);
          lucene95::__install__(module);
          lucene99::__install__(module);
          memory::__install__(module);
          perfield::__install__(module);
          simpletext::__install__(module);
          uniformsplit::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "codecs");

          t_BlockTermState::initialize(module);
          t_BufferingKnnVectorsWriter::initialize(module);
          t_Codec::initialize(module);
          t_CodecUtil::initialize(module);
          t_CompetitiveImpactAccumulator::initialize(module);
          t_CompoundDirectory::initialize(module);
          t_CompoundFormat::initialize(module);
          t_DocValuesConsumer::initialize(module);
          t_DocValuesFormat::initialize(module);
          t_DocValuesProducer::initialize(module);
          t_FieldInfosFormat::initialize(module);
          t_FieldsConsumer::initialize(module);
          t_FieldsProducer::initialize(module);
          t_FilterCodec::initialize(module);
          t_KnnFieldVectorsWriter::initialize(module);
          t_KnnVectorsFormat::initialize(module);
          t_KnnVectorsReader::initialize(module);
          t_KnnVectorsWriter::initialize(module);
          t_KnnVectorsWriter$MergedVectorValues::initialize(module);
          t_LiveDocsFormat::initialize(module);
          t_MultiLevelSkipListReader::initialize(module);
          t_MultiLevelSkipListWriter::initialize(module);
          t_MutablePointTree::initialize(module);
          t_NormsConsumer::initialize(module);
          t_NormsFormat::initialize(module);
          t_NormsProducer::initialize(module);
          t_PointsFormat::initialize(module);
          t_PointsReader::initialize(module);
          t_PointsWriter::initialize(module);
          t_PostingsFormat::initialize(module);
          t_PostingsReaderBase::initialize(module);
          t_PostingsWriterBase::initialize(module);
          t_PushPostingsWriterBase::initialize(module);
          t_SegmentInfoFormat::initialize(module);
          t_StoredFieldsFormat::initialize(module);
          t_StoredFieldsReader::initialize(module);
          t_StoredFieldsWriter::initialize(module);
          t_TermStats::initialize(module);
          t_TermVectorsFormat::initialize(module);
          t_TermVectorsReader::initialize(module);
          t_TermVectorsWriter::initialize(module);
          bitvectors::__initialize__(module);
          blockterms::__initialize__(module);
          blocktreeords::__initialize__(module);
          bloom::__initialize__(module);
          compressing::__initialize__(module);
          hnsw::__initialize__(module);
          lucene100::__initialize__(module);
          lucene90::__initialize__(module);
          lucene912::__initialize__(module);
          lucene94::__initialize__(module);
          lucene95::__initialize__(module);
          lucene99::__initialize__(module);
          memory::__initialize__(module);
          perfield::__initialize__(module);
          simpletext::__initialize__(module);
          uniformsplit::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/bitvectors/FlatBitVectorsScorer.h"
#include "org/apache/lucene/codecs/bitvectors/HnswBitVectorsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace bitvectors {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "bitvectors");

            t_FlatBitVectorsScorer::install(module);
            t_HnswBitVectorsFormat::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "bitvectors");

            t_FlatBitVectorsScorer::initialize(module);
            t_HnswBitVectorsFormat::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/blockterms/BlockTermsReader.h"
#include "org/apache/lucene/codecs/blockterms/BlockTermsWriter.h"
#include "org/apache/lucene/codecs/blockterms/FixedGapTermsIndexReader.h"
#include "org/apache/lucene/codecs/blockterms/FixedGapTermsIndexWriter.h"
#include "org/apache/lucene/codecs/blockterms/TermsIndexReaderBase.h"
#include "org/apache/lucene/codecs/blockterms/TermsIndexReaderBase$FieldIndexEnum.h"
#include "org/apache/lucene/codecs/blockterms/TermsIndexWriterBase.h"
#include "org/apache/lucene/codecs/blockterms/TermsIndexWriterBase$FieldWriter.h"
#include "org/apache/lucene/codecs/blockterms/VariableGapTermsIndexReader.h"
#include "org/apache/lucene/codecs/blockterms/VariableGapTermsIndexWriter.h"
#include "org/apache/lucene/codecs/blockterms/VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector.h"
#include "org/apache/lucene/codecs/blockterms/VariableGapTermsIndexWriter$EveryNTermSelector.h"
#include "org/apache/lucene/codecs/blockterms/VariableGapTermsIndexWriter$IndexTermSelector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "blockterms");

            t_BlockTermsReader::install(module);
            t_BlockTermsWriter::install(module);
            t_FixedGapTermsIndexReader::install(module);
            t_FixedGapTermsIndexWriter::install(module);
            t_TermsIndexReaderBase::install(module);
            t_TermsIndexReaderBase$FieldIndexEnum::install(module);
            t_TermsIndexWriterBase::install(module);
            t_TermsIndexWriterBase$FieldWriter::install(module);
            t_VariableGapTermsIndexReader::install(module);
            t_VariableGapTermsIndexWriter::install(module);
            t_VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector::install(module);
            t_VariableGapTermsIndexWriter$EveryNTermSelector::install(module);
            t_VariableGapTermsIndexWriter$IndexTermSelector::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "blockterms");

            t_BlockTermsReader::initialize(module);
            t_BlockTermsWriter::initialize(module);
            t_FixedGapTermsIndexReader::initialize(module);
            t_FixedGapTermsIndexWriter::initialize(module);
            t_TermsIndexReaderBase::initialize(module);
            t_TermsIndexReaderBase$FieldIndexEnum::initialize(module);
            t_TermsIndexWriterBase::initialize(module);
            t_TermsIndexWriterBase$FieldWriter::initialize(module);
            t_VariableGapTermsIndexReader::initialize(module);
            t_VariableGapTermsIndexWriter::initialize(module);
            t_VariableGapTermsIndexWriter$EveryNOrDocFreqTermSelector::initialize(module);
            t_VariableGapTermsIndexWriter$EveryNTermSelector::initialize(module);
            t_VariableGapTermsIndexWriter$IndexTermSelector::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/blocktreeords/BlockTreeOrdsPostingsFormat.h"
#include "org/apache/lucene/codecs/blocktreeords/FSTOrdsOutputs$Output.h"
#include "org/apache/lucene/codecs/blocktreeords/OrdsBlockTreeTermsReader.h"
#include "org/apache/lucene/codecs/blocktreeords/OrdsBlockTreeTermsWriter.h"
#include "org/apache/lucene/codecs/blocktreeords/OrdsSegmentTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blocktreeords {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "blocktreeords");

            t_BlockTreeOrdsPostingsFormat::install(module);
            t_FSTOrdsOutputs$Output::install(module);
            t_OrdsBlockTreeTermsReader::install(module);
            t_OrdsBlockTreeTermsWriter::install(module);
            t_OrdsSegmentTermsEnum::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "blocktreeords");

            t_BlockTreeOrdsPostingsFormat::initialize(module);
            t_FSTOrdsOutputs$Output::initialize(module);
            t_OrdsBlockTreeTermsReader::initialize(module);
            t_OrdsBlockTreeTermsWriter::initialize(module);
            t_OrdsSegmentTermsEnum::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/bloom/BloomFilterFactory.h"
#include "org/apache/lucene/codecs/bloom/BloomFilteringPostingsFormat.h"
#include "org/apache/lucene/codecs/bloom/DefaultBloomFilterFactory.h"
#include "org/apache/lucene/codecs/bloom/FuzzySet.h"
#include "org/apache/lucene/codecs/bloom/FuzzySet$ContainsResult.h"
#include "org/apache/lucene/codecs/bloom/HashFunction.h"
#include "org/apache/lucene/codecs/bloom/MurmurHash64.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace bloom {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "bloom");

            t_BloomFilterFactory::install(module);
            t_BloomFilteringPostingsFormat::install(module);
            t_DefaultBloomFilterFactory::install(module);
            t_FuzzySet::install(module);
            t_FuzzySet$ContainsResult::install(module);
            t_HashFunction::install(module);
            t_MurmurHash64::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "bloom");

            t_BloomFilterFactory::initialize(module);
            t_BloomFilteringPostingsFormat::initialize(module);
            t_DefaultBloomFilterFactory::initialize(module);
            t_FuzzySet::initialize(module);
            t_FuzzySet$ContainsResult::initialize(module);
            t_HashFunction::initialize(module);
            t_MurmurHash64::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/compressing/CompressionMode.h"
#include "org/apache/lucene/codecs/compressing/Compressor.h"
#include "org/apache/lucene/codecs/compressing/Decompressor.h"
#include "org/apache/lucene/codecs/compressing/MatchingReaders.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace compressing {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "compressing");

            t_CompressionMode::install(module);
            t_Compressor::install(module);
            t_Decompressor::install(module);
            t_MatchingReaders::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "compressing");

            t_CompressionMode::initialize(module);
            t_Compressor::initialize(module);
            t_Decompressor::initialize(module);
            t_MatchingReaders::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/hnsw/DefaultFlatVectorScorer.h"
#include "org/apache/lucene/codecs/hnsw/FlatFieldVectorsWriter.h"
#include "org/apache/lucene/codecs/hnsw/FlatVectorScorerUtil.h"
#include "org/apache/lucene/codecs/hnsw/FlatVectorsFormat.h"
#include "org/apache/lucene/codecs/hnsw/FlatVectorsReader.h"
#include "org/apache/lucene/codecs/hnsw/FlatVectorsScorer.h"
#include "org/apache/lucene/codecs/hnsw/FlatVectorsWriter.h"
#include "org/apache/lucene/codecs/hnsw/HnswGraphProvider.h"
#include "org/apache/lucene/codecs/hnsw/ScalarQuantizedVectorScorer.h"
#include "org/apache/lucene/codecs/hnsw/ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace hnsw {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "hnsw");

            t_DefaultFlatVectorScorer::install(module);
            t_FlatFieldVectorsWriter::install(module);
            t_FlatVectorScorerUtil::install(module);
            t_FlatVectorsFormat::install(module);
            t_FlatVectorsReader::install(module);
            t_FlatVectorsScorer::install(module);
            t_FlatVectorsWriter::install(module);
            t_HnswGraphProvider::install(module);
            t_ScalarQuantizedVectorScorer::install(module);
            t_ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "hnsw");

            t_DefaultFlatVectorScorer::initialize(module);
            t_FlatFieldVectorsWriter::initialize(module);
            t_FlatVectorScorerUtil::initialize(module);
            t_FlatVectorsFormat::initialize(module);
            t_FlatVectorsReader::initialize(module);
            t_FlatVectorsScorer::initialize(module);
            t_FlatVectorsWriter::initialize(module);
            t_HnswGraphProvider::initialize(module);
            t_ScalarQuantizedVectorScorer::initialize(module);
            t_ScalarQuantizedVectorScorer$ScalarQuantizedRandomVectorScorerSupplier::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene100/Lucene100Codec.h"
#include "org/apache/lucene/codecs/lucene100/Lucene100Codec$Mode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene100 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene100");

            t_Lucene100Codec::install(module);
            t_Lucene100Codec$Mode::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene100");

            t_Lucene100Codec::initialize(module);
            t_Lucene100Codec$Mode::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene90/DeflateWithPresetDictCompressionMode.h"
#include "org/apache/lucene/codecs/lucene90/IndexedDISI.h"
#include "org/apache/lucene/codecs/lucene90/LZ4WithPresetDictCompressionMode.h"
#include "org/apache/lucene/codecs/lucene90/Lucene90CompoundFormat.h"
#include "org/apache/lucene/codecs/lucene90/Lucene90CompoundReader$FileEntry.h"
#include "org/apache/lucene/codecs/lucene90/Lucene90DocValuesFormat.h"
#include "org/apache/lucene/codecs/lucene90/Lucene90LiveDocsFormat.h"
#include "org/apache/lucene/codecs/lucene90/Lucene90NormsFormat.h"
#include "org/apache/lucene/codecs/lucene90/Lucene90PointsFormat.h"
#include "org/apache/lucene/codecs/lucene90/Lucene90PointsReader.h"
#include "org/apache/lucene/codecs/lucene90/Lucene90PointsWriter.h"
#include "org/apache/lucene/codecs/lucene90/Lucene90StoredFieldsFormat.h"
#include "org/apache/lucene/codecs/lucene90/Lucene90StoredFieldsFormat$Mode.h"
#include "org/apache/lucene/codecs/lucene90/Lucene90TermVectorsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {

          namespace blocktree {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace compressing {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene90");

            t_DeflateWithPresetDictCompressionMode::install(module);
            t_IndexedDISI::install(module);
            t_LZ4WithPresetDictCompressionMode::install(module);
            t_Lucene90CompoundFormat::install(module);
            t_Lucene90CompoundReader$FileEntry::install(module);
            t_Lucene90DocValuesFormat::install(module);
            t_Lucene90LiveDocsFormat::install(module);
            t_Lucene90NormsFormat::install(module);
            t_Lucene90PointsFormat::install(module);
            t_Lucene90PointsReader::install(module);
            t_Lucene90PointsWriter::install(module);
            t_Lucene90StoredFieldsFormat::install(module);
            t_Lucene90StoredFieldsFormat$Mode::install(module);
            t_Lucene90TermVectorsFormat::install(module);
            blocktree::__install__(module);
            compressing::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene90");

            t_DeflateWithPresetDictCompressionMode::initialize(module);
            t_IndexedDISI::initialize(module);
            t_LZ4WithPresetDictCompressionMode::initialize(module);
            t_Lucene90CompoundFormat::initialize(module);
            t_Lucene90CompoundReader$FileEntry::initialize(module);
            t_Lucene90DocValuesFormat::initialize(module);
            t_Lucene90LiveDocsFormat::initialize(module);
            t_Lucene90NormsFormat::initialize(module);
            t_Lucene90PointsFormat::initialize(module);
            t_Lucene90PointsReader::initialize(module);
            t_Lucene90PointsWriter::initialize(module);
            t_Lucene90StoredFieldsFormat::initialize(module);
            t_Lucene90StoredFieldsFormat$Mode::initialize(module);
            t_Lucene90TermVectorsFormat::initialize(module);
            blocktree::__initialize__(module);
            compressing::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene90/blocktree/FieldReader.h"
#include "org/apache/lucene/codecs/lucene90/blocktree/Lucene90BlockTreeTermsReader.h"
#include "org/apache/lucene/codecs/lucene90/blocktree/Lucene90BlockTreeTermsWriter.h"
#include "org/apache/lucene/codecs/lucene90/blocktree/Stats.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          namespace blocktree {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.codecs.lucene90", "blocktree");

              t_FieldReader::install(module);
              t_Lucene90BlockTreeTermsReader::install(module);
              t_Lucene90BlockTreeTermsWriter::install(module);
              t_Stats::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.codecs.lucene90", "blocktree");

              t_FieldReader::initialize(module);
              t_Lucene90BlockTreeTermsReader::initialize(module);
              t_Lucene90BlockTreeTermsWriter::initialize(module);
              t_Stats::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene90/compressing/FieldsIndexWriter.h"
#include "org/apache/lucene/codecs/lucene90/compressing/Lucene90CompressingStoredFieldsFormat.h"
#include "org/apache/lucene/codecs/lucene90/compressing/Lucene90CompressingStoredFieldsReader.h"
#include "org/apache/lucene/codecs/lucene90/compressing/Lucene90CompressingStoredFieldsWriter.h"
#include "org/apache/lucene/codecs/lucene90/compressing/Lucene90CompressingTermVectorsFormat.h"
#include "org/apache/lucene/codecs/lucene90/compressing/Lucene90CompressingTermVectorsReader.h"
#include "org/apache/lucene/codecs/lucene90/compressing/Lucene90CompressingTermVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          namespace compressing {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.codecs.lucene90", "compressing");

              t_FieldsIndexWriter::install(module);
              t_Lucene90CompressingStoredFieldsFormat::install(module);
              t_Lucene90CompressingStoredFieldsReader::install(module);
              t_Lucene90CompressingStoredFieldsWriter::install(module);
              t_Lucene90CompressingTermVectorsFormat::install(module);
              t_Lucene90CompressingTermVectorsReader::install(module);
              t_Lucene90CompressingTermVectorsWriter::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.codecs.lucene90", "compressing");

              t_FieldsIndexWriter::initialize(module);
              t_Lucene90CompressingStoredFieldsFormat::initialize(module);
              t_Lucene90CompressingStoredFieldsReader::initialize(module);
              t_Lucene90CompressingStoredFieldsWriter::initialize(module);
              t_Lucene90CompressingTermVectorsFormat::initialize(module);
              t_Lucene90CompressingTermVectorsReader::initialize(module);
              t_Lucene90CompressingTermVectorsWriter::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene912/ForDeltaUtil.h"
#include "org/apache/lucene/codecs/lucene912/ForUtil.h"
#include "org/apache/lucene/codecs/lucene912/Lucene912PostingsFormat.h"
#include "org/apache/lucene/codecs/lucene912/Lucene912PostingsFormat$IntBlockTermState.h"
#include "org/apache/lucene/codecs/lucene912/Lucene912PostingsReader.h"
#include "org/apache/lucene/codecs/lucene912/Lucene912PostingsWriter.h"
#include "org/apache/lucene/codecs/lucene912/PostingIndexInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene912 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene912");

            t_ForDeltaUtil::install(module);
            t_ForUtil::install(module);
            t_Lucene912PostingsFormat::install(module);
            t_Lucene912PostingsFormat$IntBlockTermState::install(module);
            t_Lucene912PostingsReader::install(module);
            t_Lucene912PostingsWriter::install(module);
            t_PostingIndexInput::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene912");

            t_ForDeltaUtil::initialize(module);
            t_ForUtil::initialize(module);
            t_Lucene912PostingsFormat::initialize(module);
            t_Lucene912PostingsFormat$IntBlockTermState::initialize(module);
            t_Lucene912PostingsReader::initialize(module);
            t_Lucene912PostingsWriter::initialize(module);
            t_PostingIndexInput::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene94/Lucene94FieldInfosFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene94 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene94");

            t_Lucene94FieldInfosFormat::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene94");

            t_Lucene94FieldInfosFormat::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene95/HasIndexSlice.h"
#include "org/apache/lucene/codecs/lucene95/OffHeapByteVectorValues.h"
#include "org/apache/lucene/codecs/lucene95/OffHeapByteVectorValues$DenseOffHeapVectorValues.h"
#include "org/apache/lucene/codecs/lucene95/OffHeapFloatVectorValues.h"
#include "org/apache/lucene/codecs/lucene95/OffHeapFloatVectorValues$DenseOffHeapVectorValues.h"
#include "org/apache/lucene/codecs/lucene95/OrdToDocDISIReaderConfiguration.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene95 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene95");

            t_HasIndexSlice::install(module);
            t_OffHeapByteVectorValues::install(module);
            t_OffHeapByteVectorValues$DenseOffHeapVectorValues::install(module);
            t_OffHeapFloatVectorValues::install(module);
            t_OffHeapFloatVectorValues$DenseOffHeapVectorValues::install(module);
            t_OrdToDocDISIReaderConfiguration::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene95");

            t_HasIndexSlice::initialize(module);
            t_OffHeapByteVectorValues::initialize(module);
            t_OffHeapByteVectorValues$DenseOffHeapVectorValues::initialize(module);
            t_OffHeapFloatVectorValues::initialize(module);
            t_OffHeapFloatVectorValues$DenseOffHeapVectorValues::initialize(module);
            t_OrdToDocDISIReaderConfiguration::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/lucene99/Lucene99FlatVectorsFormat.h"
#include "org/apache/lucene/codecs/lucene99/Lucene99FlatVectorsReader.h"
#include "org/apache/lucene/codecs/lucene99/Lucene99FlatVectorsWriter.h"
#include "org/apache/lucene/codecs/lucene99/Lucene99HnswScalarQuantizedVectorsFormat.h"
#include "org/apache/lucene/codecs/lucene99/Lucene99HnswVectorsFormat.h"
#include "org/apache/lucene/codecs/lucene99/Lucene99HnswVectorsReader.h"
#include "org/apache/lucene/codecs/lucene99/Lucene99HnswVectorsWriter.h"
#include "org/apache/lucene/codecs/lucene99/Lucene99ScalarQuantizedVectorScorer.h"
#include "org/apache/lucene/codecs/lucene99/Lucene99ScalarQuantizedVectorsFormat.h"
#include "org/apache/lucene/codecs/lucene99/Lucene99ScalarQuantizedVectorsReader.h"
#include "org/apache/lucene/codecs/lucene99/Lucene99ScalarQuantizedVectorsWriter.h"
#include "org/apache/lucene/codecs/lucene99/Lucene99SegmentInfoFormat.h"
#include "org/apache/lucene/codecs/lucene99/OffHeapQuantizedByteVectorValues.h"
#include "org/apache/lucene/codecs/lucene99/OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene99 {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene99");

            t_Lucene99FlatVectorsFormat::install(module);
            t_Lucene99FlatVectorsReader::install(module);
            t_Lucene99FlatVectorsWriter::install(module);
            t_Lucene99HnswScalarQuantizedVectorsFormat::install(module);
            t_Lucene99HnswVectorsFormat::install(module);
            t_Lucene99HnswVectorsReader::install(module);
            t_Lucene99HnswVectorsWriter::install(module);
            t_Lucene99ScalarQuantizedVectorScorer::install(module);
            t_Lucene99ScalarQuantizedVectorsFormat::install(module);
            t_Lucene99ScalarQuantizedVectorsReader::install(module);
            t_Lucene99ScalarQuantizedVectorsWriter::install(module);
            t_Lucene99SegmentInfoFormat::install(module);
            t_OffHeapQuantizedByteVectorValues::install(module);
            t_OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "lucene99");

            t_Lucene99FlatVectorsFormat::initialize(module);
            t_Lucene99FlatVectorsReader::initialize(module);
            t_Lucene99FlatVectorsWriter::initialize(module);
            t_Lucene99HnswScalarQuantizedVectorsFormat::initialize(module);
            t_Lucene99HnswVectorsFormat::initialize(module);
            t_Lucene99HnswVectorsReader::initialize(module);
            t_Lucene99HnswVectorsWriter::initialize(module);
            t_Lucene99ScalarQuantizedVectorScorer::initialize(module);
            t_Lucene99ScalarQuantizedVectorsFormat::initialize(module);
            t_Lucene99ScalarQuantizedVectorsReader::initialize(module);
            t_Lucene99ScalarQuantizedVectorsWriter::initialize(module);
            t_Lucene99SegmentInfoFormat::initialize(module);
            t_OffHeapQuantizedByteVectorValues::initialize(module);
            t_OffHeapQuantizedByteVectorValues$DenseOffHeapVectorValues::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/memory/DirectPostingsFormat.h"
#include "org/apache/lucene/codecs/memory/FSTPostingsFormat.h"
#include "org/apache/lucene/codecs/memory/FSTTermsReader.h"
#include "org/apache/lucene/codecs/memory/FSTTermsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace memory {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "memory");

            t_DirectPostingsFormat::install(module);
            t_FSTPostingsFormat::install(module);
            t_FSTTermsReader::install(module);
            t_FSTTermsWriter::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "memory");

            t_DirectPostingsFormat::initialize(module);
            t_FSTPostingsFormat::initialize(module);
            t_FSTTermsReader::initialize(module);
            t_FSTTermsWriter::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/perfield/PerFieldDocValuesFormat.h"
#include "org/apache/lucene/codecs/perfield/PerFieldKnnVectorsFormat.h"
#include "org/apache/lucene/codecs/perfield/PerFieldKnnVectorsFormat$FieldsReader.h"
#include "org/apache/lucene/codecs/perfield/PerFieldPostingsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace perfield {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "perfield");

            t_PerFieldDocValuesFormat::install(module);
            t_PerFieldKnnVectorsFormat::install(module);
            t_PerFieldKnnVectorsFormat$FieldsReader::install(module);
            t_PerFieldPostingsFormat::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "perfield");

            t_PerFieldDocValuesFormat::initialize(module);
            t_PerFieldKnnVectorsFormat::initialize(module);
            t_PerFieldKnnVectorsFormat$FieldsReader::initialize(module);
            t_PerFieldPostingsFormat::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/simpletext/SimpleTextCodec.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextCompoundFormat.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextFieldInfosFormat.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextKnnVectorsFormat.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextKnnVectorsReader.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextKnnVectorsWriter.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextLiveDocsFormat.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextNormsFormat.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextNormsFormat$SimpleTextNormsConsumer.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextNormsFormat$SimpleTextNormsProducer.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextPointsFormat.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextSegmentInfoFormat.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextStoredFieldsFormat.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextStoredFieldsReader.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextStoredFieldsWriter.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextTermVectorsFormat.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextTermVectorsReader.h"
#include "org/apache/lucene/codecs/simpletext/SimpleTextTermVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace simpletext {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "simpletext");

            t_SimpleTextCodec::install(module);
            t_SimpleTextCompoundFormat::install(module);
            t_SimpleTextFieldInfosFormat::install(module);
            t_SimpleTextKnnVectorsFormat::install(module);
            t_SimpleTextKnnVectorsReader::install(module);
            t_SimpleTextKnnVectorsWriter::install(module);
            t_SimpleTextLiveDocsFormat::install(module);
            t_SimpleTextNormsFormat::install(module);
            t_SimpleTextNormsFormat$SimpleTextNormsConsumer::install(module);
            t_SimpleTextNormsFormat$SimpleTextNormsProducer::install(module);
            t_SimpleTextPointsFormat::install(module);
            t_SimpleTextSegmentInfoFormat::install(module);
            t_SimpleTextStoredFieldsFormat::install(module);
            t_SimpleTextStoredFieldsReader::install(module);
            t_SimpleTextStoredFieldsWriter::install(module);
            t_SimpleTextTermVectorsFormat::install(module);
            t_SimpleTextTermVectorsReader::install(module);
            t_SimpleTextTermVectorsWriter::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "simpletext");

            t_SimpleTextCodec::initialize(module);
            t_SimpleTextCompoundFormat::initialize(module);
            t_SimpleTextFieldInfosFormat::initialize(module);
            t_SimpleTextKnnVectorsFormat::initialize(module);
            t_SimpleTextKnnVectorsReader::initialize(module);
            t_SimpleTextKnnVectorsWriter::initialize(module);
            t_SimpleTextLiveDocsFormat::initialize(module);
            t_SimpleTextNormsFormat::initialize(module);
            t_SimpleTextNormsFormat$SimpleTextNormsConsumer::initialize(module);
            t_SimpleTextNormsFormat$SimpleTextNormsProducer::initialize(module);
            t_SimpleTextPointsFormat::initialize(module);
            t_SimpleTextSegmentInfoFormat::initialize(module);
            t_SimpleTextStoredFieldsFormat::initialize(module);
            t_SimpleTextStoredFieldsReader::initialize(module);
            t_SimpleTextStoredFieldsWriter::initialize(module);
            t_SimpleTextTermVectorsFormat::initialize(module);
            t_SimpleTextTermVectorsReader::initialize(module);
            t_SimpleTextTermVectorsWriter::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/uniformsplit/BlockDecoder.h"
#include "org/apache/lucene/codecs/uniformsplit/BlockEncoder.h"
#include "org/apache/lucene/codecs/uniformsplit/BlockEncoder$WritableBytes.h"
#include "org/apache/lucene/codecs/uniformsplit/BlockHeader.h"
#include "org/apache/lucene/codecs/uniformsplit/BlockHeader$Serializer.h"
#include "org/apache/lucene/codecs/uniformsplit/BlockLine.h"
#include "org/apache/lucene/codecs/uniformsplit/BlockLine$Serializer.h"
#include "org/apache/lucene/codecs/uniformsplit/BlockReader.h"
#include "org/apache/lucene/codecs/uniformsplit/BlockWriter.h"
#include "org/apache/lucene/codecs/uniformsplit/DeltaBaseTermStateSerializer.h"
#include "org/apache/lucene/codecs/uniformsplit/FSTDictionary.h"
#include "org/apache/lucene/codecs/uniformsplit/FSTDictionary$BrowserSupplier.h"
#include "org/apache/lucene/codecs/uniformsplit/FSTDictionary$Builder.h"
#include "org/apache/lucene/codecs/uniformsplit/FieldMetadata.h"
#include "org/apache/lucene/codecs/uniformsplit/FieldMetadata$Serializer.h"
#include "org/apache/lucene/codecs/uniformsplit/IndexDictionary.h"
#include "org/apache/lucene/codecs/uniformsplit/IndexDictionary$Browser.h"
#include "org/apache/lucene/codecs/uniformsplit/IndexDictionary$BrowserSupplier.h"
#include "org/apache/lucene/codecs/uniformsplit/IndexDictionary$Builder.h"
#include "org/apache/lucene/codecs/uniformsplit/IntersectBlockReader.h"
#include "org/apache/lucene/codecs/uniformsplit/RamUsageUtil.h"
#include "org/apache/lucene/codecs/uniformsplit/TermBytes.h"
#include "org/apache/lucene/codecs/uniformsplit/UniformSplitPostingsFormat.h"
#include "org/apache/lucene/codecs/uniformsplit/UniformSplitTerms.h"
#include "org/apache/lucene/codecs/uniformsplit/UniformSplitTermsReader.h"
#include "org/apache/lucene/codecs/uniformsplit/UniformSplitTermsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          namespace sharedterms {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "uniformsplit");

            t_BlockDecoder::install(module);
            t_BlockEncoder::install(module);
            t_BlockEncoder$WritableBytes::install(module);
            t_BlockHeader::install(module);
            t_BlockHeader$Serializer::install(module);
            t_BlockLine::install(module);
            t_BlockLine$Serializer::install(module);
            t_BlockReader::install(module);
            t_BlockWriter::install(module);
            t_DeltaBaseTermStateSerializer::install(module);
            t_FSTDictionary::install(module);
            t_FSTDictionary$BrowserSupplier::install(module);
            t_FSTDictionary$Builder::install(module);
            t_FieldMetadata::install(module);
            t_FieldMetadata$Serializer::install(module);
            t_IndexDictionary::install(module);
            t_IndexDictionary$Browser::install(module);
            t_IndexDictionary$BrowserSupplier::install(module);
            t_IndexDictionary$Builder::install(module);
            t_IntersectBlockReader::install(module);
            t_RamUsageUtil::install(module);
            t_TermBytes::install(module);
            t_UniformSplitPostingsFormat::install(module);
            t_UniformSplitTerms::install(module);
            t_UniformSplitTermsReader::install(module);
            t_UniformSplitTermsWriter::install(module);
            sharedterms::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.codecs", "uniformsplit");

            t_BlockDecoder::initialize(module);
            t_BlockEncoder::initialize(module);
            t_BlockEncoder$WritableBytes::initialize(module);
            t_BlockHeader::initialize(module);
            t_BlockHeader$Serializer::initialize(module);
            t_BlockLine::initialize(module);
            t_BlockLine$Serializer::initialize(module);
            t_BlockReader::initialize(module);
            t_BlockWriter::initialize(module);
            t_DeltaBaseTermStateSerializer::initialize(module);
            t_FSTDictionary::initialize(module);
            t_FSTDictionary$BrowserSupplier::initialize(module);
            t_FSTDictionary$Builder::initialize(module);
            t_FieldMetadata::initialize(module);
            t_FieldMetadata$Serializer::initialize(module);
            t_IndexDictionary::initialize(module);
            t_IndexDictionary$Browser::initialize(module);
            t_IndexDictionary$BrowserSupplier::initialize(module);
            t_IndexDictionary$Builder::initialize(module);
            t_IntersectBlockReader::initialize(module);
            t_RamUsageUtil::initialize(module);
            t_TermBytes::initialize(module);
            t_UniformSplitPostingsFormat::initialize(module);
            t_UniformSplitTerms::initialize(module);
            t_UniformSplitTermsReader::initialize(module);
            t_UniformSplitTermsWriter::initialize(module);
            sharedterms::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/codecs/uniformsplit/sharedterms/FieldMetadataTermState.h"
#include "org/apache/lucene/codecs/uniformsplit/sharedterms/STBlockLine.h"
#include "org/apache/lucene/codecs/uniformsplit/sharedterms/STBlockLine$Serializer.h"
#include "org/apache/lucene/codecs/uniformsplit/sharedterms/STBlockReader.h"
#include "org/apache/lucene/codecs/uniformsplit/sharedterms/STBlockWriter.h"
#include "org/apache/lucene/codecs/uniformsplit/sharedterms/STIntersectBlockReader.h"
#include "org/apache/lucene/codecs/uniformsplit/sharedterms/STMergingBlockReader.h"
#include "org/apache/lucene/codecs/uniformsplit/sharedterms/STUniformSplitPostingsFormat.h"
#include "org/apache/lucene/codecs/uniformsplit/sharedterms/STUniformSplitTerms.h"
#include "org/apache/lucene/codecs/uniformsplit/sharedterms/STUniformSplitTermsReader.h"
#include "org/apache/lucene/codecs/uniformsplit/sharedterms/STUniformSplitTermsWriter.h"
#include "org/apache/lucene/codecs/uniformsplit/sharedterms/UnionFieldMetadataBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.codecs.uniformsplit", "sharedterms");

              t_FieldMetadataTermState::install(module);
              t_STBlockLine::install(module);
              t_STBlockLine$Serializer::install(module);
              t_STBlockReader::install(module);
              t_STBlockWriter::install(module);
              t_STIntersectBlockReader::install(module);
              t_STMergingBlockReader::install(module);
              t_STUniformSplitPostingsFormat::install(module);
              t_STUniformSplitTerms::install(module);
              t_STUniformSplitTermsReader::install(module);
              t_STUniformSplitTermsWriter::install(module);
              t_UnionFieldMetadataBuilder::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.codecs.uniformsplit", "sharedterms");

              t_FieldMetadataTermState::initialize(module);
              t_STBlockLine::initialize(module);
              t_STBlockLine$Serializer::initialize(module);
              t_STBlockReader::initialize(module);
              t_STBlockWriter::initialize(module);
              t_STIntersectBlockReader::initialize(module);
              t_STMergingBlockReader::initialize(module);
              t_STUniformSplitPostingsFormat::initialize(module);
              t_STUniformSplitTerms::initialize(module);
              t_STUniformSplitTermsReader::initialize(module);
              t_STUniformSplitTermsWriter::initialize(module);
              t_UnionFieldMetadataBuilder::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/collation/CollationAttributeFactory.h"
#include "org/apache/lucene/collation/CollationDocValuesField.h"
#include "org/apache/lucene/collation/CollationKeyAnalyzer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {

        namespace tokenattributes {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "collation");

          t_CollationAttributeFactory::install(module);
          t_CollationDocValuesField::install(module);
          t_CollationKeyAnalyzer::install(module);
          tokenattributes::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "collation");

          t_CollationAttributeFactory::initialize(module);
          t_CollationDocValuesField::initialize(module);
          t_CollationKeyAnalyzer::initialize(module);
          tokenattributes::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/collation/tokenattributes/CollatedTermAttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {
        namespace tokenattributes {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.collation", "tokenattributes");

            t_CollatedTermAttributeImpl::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.collation", "tokenattributes");

            t_CollatedTermAttributeImpl::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/document/BinaryDocValuesField.h"
#include "org/apache/lucene/document/BinaryPoint.h"
#include "org/apache/lucene/document/BinaryRangeDocValues.h"
#include "org/apache/lucene/document/BinaryRangeDocValuesField.h"
#include "org/apache/lucene/document/DateTools.h"
#include "org/apache/lucene/document/DateTools$Resolution.h"
#include "org/apache/lucene/document/Document.h"
#include "org/apache/lucene/document/DocumentStoredFieldVisitor.h"
#include "org/apache/lucene/document/DoubleDocValuesField.h"
#include "org/apache/lucene/document/DoubleField.h"
#include "org/apache/lucene/document/DoublePoint.h"
#include "org/apache/lucene/document/DoubleRange.h"
#include "org/apache/lucene/document/DoubleRangeDocValuesField.h"
#include "org/apache/lucene/document/FeatureField.h"
#include "org/apache/lucene/document/Field.h"
#include "org/apache/lucene/document/Field$Store.h"
#include "org/apache/lucene/document/FieldType.h"
#include "org/apache/lucene/document/FloatDocValuesField.h"
#include "org/apache/lucene/document/FloatField.h"
#include "org/apache/lucene/document/FloatPoint.h"
#include "org/apache/lucene/document/FloatRange.h"
#include "org/apache/lucene/document/FloatRangeDocValuesField.h"
#include "org/apache/lucene/document/InetAddressPoint.h"
#include "org/apache/lucene/document/InetAddressRange.h"
#include "org/apache/lucene/document/IntField.h"
#include "org/apache/lucene/document/IntPoint.h"
#include "org/apache/lucene/document/IntRange.h"
#include "org/apache/lucene/document/IntRangeDocValuesField.h"
#include "org/apache/lucene/document/InvertableType.h"
#include "org/apache/lucene/document/KeywordField.h"
#include "org/apache/lucene/document/KnnByteVectorField.h"
#include "org/apache/lucene/document/KnnFloatVectorField.h"
#include "org/apache/lucene/document/LatLonDocValuesField.h"
#include "org/apache/lucene/document/LatLonPoint.h"
#include "org/apache/lucene/document/LatLonShape.h"
#include "org/apache/lucene/document/LatLonShapeDocValues.h"
#include "org/apache/lucene/document/LatLonShapeDocValuesField.h"
#include "org/apache/lucene/document/LongField.h"
#include "org/apache/lucene/document/LongPoint.h"
#include "org/apache/lucene/document/LongRange.h"
#include "org/apache/lucene/document/LongRangeDocValuesField.h"
#include "org/apache/lucene/document/NumericDocValuesField.h"
#include "org/apache/lucene/document/RangeFieldQuery.h"
#include "org/apache/lucene/document/RangeFieldQuery$QueryType.h"
#include "org/apache/lucene/document/ShapeDocValues.h"
#include "org/apache/lucene/document/ShapeDocValuesField.h"
#include "org/apache/lucene/document/ShapeField.h"
#include "org/apache/lucene/document/ShapeField$DecodedTriangle.h"
#include "org/apache/lucene/document/ShapeField$DecodedTriangle$TYPE.h"
#include "org/apache/lucene/document/ShapeField$QueryRelation.h"
#include "org/apache/lucene/document/ShapeField$Triangle.h"
#include "org/apache/lucene/document/SortedDocValuesField.h"
#include "org/apache/lucene/document/SortedNumericDocValuesField.h"
#include "org/apache/lucene/document/SortedSetDocValuesField.h"
#include "org/apache/lucene/document/SpatialQuery$EncodedRectangle.h"
#include "org/apache/lucene/document/StoredField.h"
#include "org/apache/lucene/document/StoredValue.h"
#include "org/apache/lucene/document/StoredValue$Type.h"
#include "org/apache/lucene/document/StringField.h"
#include "org/apache/lucene/document/TextField.h"
#include "org/apache/lucene/document/XYDocValuesField.h"
#include "org/apache/lucene/document/XYDocValuesPointInGeometryQuery.h"
#include "org/apache/lucene/document/XYPointField.h"
#include "org/apache/lucene/document/XYShape.h"
#include "org/apache/lucene/document/XYShapeDocValues.h"
#include "org/apache/lucene/document/XYShapeDocValuesField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "document");

          t_BinaryDocValuesField::install(module);
          t_BinaryPoint::install(module);
          t_BinaryRangeDocValues::install(module);
          t_BinaryRangeDocValuesField::install(module);
          t_DateTools::install(module);
          t_DateTools$Resolution::install(module);
          t_Document::install(module);
          t_DocumentStoredFieldVisitor::install(module);
          t_DoubleDocValuesField::install(module);
          t_DoubleField::install(module);
          t_DoublePoint::install(module);
          t_DoubleRange::install(module);
          t_DoubleRangeDocValuesField::install(module);
          t_FeatureField::install(module);
          t_Field::install(module);
          t_Field$Store::install(module);
          t_FieldType::install(module);
          t_FloatDocValuesField::install(module);
          t_FloatField::install(module);
          t_FloatPoint::install(module);
          t_FloatRange::install(module);
          t_FloatRangeDocValuesField::install(module);
          t_InetAddressPoint::install(module);
          t_InetAddressRange::install(module);
          t_IntField::install(module);
          t_IntPoint::install(module);
          t_IntRange::install(module);
          t_IntRangeDocValuesField::install(module);
          t_InvertableType::install(module);
          t_KeywordField::install(module);
          t_KnnByteVectorField::install(module);
          t_KnnFloatVectorField::install(module);
          t_LatLonDocValuesField::install(module);
          t_LatLonPoint::install(module);
          t_LatLonShape::install(module);
          t_LatLonShapeDocValues::install(module);
          t_LatLonShapeDocValuesField::install(module);
          t_LongField::install(module);
          t_LongPoint::install(module);
          t_LongRange::install(module);
          t_LongRangeDocValuesField::install(module);
          t_NumericDocValuesField::install(module);
          t_RangeFieldQuery::install(module);
          t_RangeFieldQuery$QueryType::install(module);
          t_ShapeDocValues::install(module);
          t_ShapeDocValuesField::install(module);
          t_ShapeField::install(module);
          t_ShapeField$DecodedTriangle::install(module);
          t_ShapeField$DecodedTriangle$TYPE::install(module);
          t_ShapeField$QueryRelation::install(module);
          t_ShapeField$Triangle::install(module);
          t_SortedDocValuesField::install(module);
          t_SortedNumericDocValuesField::install(module);
          t_SortedSetDocValuesField::install(module);
          t_SpatialQuery$EncodedRectangle::install(module);
          t_StoredField::install(module);
          t_StoredValue::install(module);
          t_StoredValue$Type::install(module);
          t_StringField::install(module);
          t_TextField::install(module);
          t_XYDocValuesField::install(module);
          t_XYDocValuesPointInGeometryQuery::install(module);
          t_XYPointField::install(module);
          t_XYShape::install(module);
          t_XYShapeDocValues::install(module);
          t_XYShapeDocValuesField::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "document");

          t_BinaryDocValuesField::initialize(module);
          t_BinaryPoint::initialize(module);
          t_BinaryRangeDocValues::initialize(module);
          t_BinaryRangeDocValuesField::initialize(module);
          t_DateTools::initialize(module);
          t_DateTools$Resolution::initialize(module);
          t_Document::initialize(module);
          t_DocumentStoredFieldVisitor::initialize(module);
          t_DoubleDocValuesField::initialize(module);
          t_DoubleField::initialize(module);
          t_DoublePoint::initialize(module);
          t_DoubleRange::initialize(module);
          t_DoubleRangeDocValuesField::initialize(module);
          t_FeatureField::initialize(module);
          t_Field::initialize(module);
          t_Field$Store::initialize(module);
          t_FieldType::initialize(module);
          t_FloatDocValuesField::initialize(module);
          t_FloatField::initialize(module);
          t_FloatPoint::initialize(module);
          t_FloatRange::initialize(module);
          t_FloatRangeDocValuesField::initialize(module);
          t_InetAddressPoint::initialize(module);
          t_InetAddressRange::initialize(module);
          t_IntField::initialize(module);
          t_IntPoint::initialize(module);
          t_IntRange::initialize(module);
          t_IntRangeDocValuesField::initialize(module);
          t_InvertableType::initialize(module);
          t_KeywordField::initialize(module);
          t_KnnByteVectorField::initialize(module);
          t_KnnFloatVectorField::initialize(module);
          t_LatLonDocValuesField::initialize(module);
          t_LatLonPoint::initialize(module);
          t_LatLonShape::initialize(module);
          t_LatLonShapeDocValues::initialize(module);
          t_LatLonShapeDocValuesField::initialize(module);
          t_LongField::initialize(module);
          t_LongPoint::initialize(module);
          t_LongRange::initialize(module);
          t_LongRangeDocValuesField::initialize(module);
          t_NumericDocValuesField::initialize(module);
          t_RangeFieldQuery::initialize(module);
          t_RangeFieldQuery$QueryType::initialize(module);
          t_ShapeDocValues::initialize(module);
          t_ShapeDocValuesField::initialize(module);
          t_ShapeField::initialize(module);
          t_ShapeField$DecodedTriangle::initialize(module);
          t_ShapeField$DecodedTriangle$TYPE::initialize(module);
          t_ShapeField$QueryRelation::initialize(module);
          t_ShapeField$Triangle::initialize(module);
          t_SortedDocValuesField::initialize(module);
          t_SortedNumericDocValuesField::initialize(module);
          t_SortedSetDocValuesField::initialize(module);
          t_SpatialQuery$EncodedRectangle::initialize(module);
          t_StoredField::initialize(module);
          t_StoredValue::initialize(module);
          t_StoredValue$Type::initialize(module);
          t_StringField::initialize(module);
          t_TextField::initialize(module);
          t_XYDocValuesField::initialize(module);
          t_XYDocValuesPointInGeometryQuery::initialize(module);
          t_XYPointField::initialize(module);
          t_XYShape::initialize(module);
          t_XYShapeDocValues::initialize(module);
          t_XYShapeDocValuesField::initialize(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/expressions/Bindings.h"
#include "org/apache/lucene/expressions/Expression.h"
#include "org/apache/lucene/expressions/SimpleBindings.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {

        namespace js {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "expressions");

          t_Bindings::install(module);
          t_Expression::install(module);
          t_SimpleBindings::install(module);
          js::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "expressions");

          t_Bindings::initialize(module);
          t_Expression::initialize(module);
          t_SimpleBindings::initialize(module);
          js::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/expressions/js/ExpressionMath.h"
#include "org/apache/lucene/expressions/js/JavascriptCompiler.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$AddsubContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$BoolandContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$BoolcompContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$BooleqneContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$BoolorContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$BwandContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$BworContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$BwshiftContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$BwxorContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$CompileContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$ConditionalContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$ExpressionContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$ExternalContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$MuldivContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$NumericContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$PrecedenceContext.h"
#include "org/apache/lucene/expressions/js/JavascriptParser$UnaryContext.h"
#include "org/apache/lucene/expressions/js/VariableContext.h"
#include "org/apache/lucene/expressions/js/VariableContext$Type.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace expressions {
        namespace js {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.expressions", "js");

            t_ExpressionMath::install(module);
            t_JavascriptCompiler::install(module);
            t_JavascriptParser$AddsubContext::install(module);
            t_JavascriptParser$BoolandContext::install(module);
            t_JavascriptParser$BoolcompContext::install(module);
            t_JavascriptParser$BooleqneContext::install(module);
            t_JavascriptParser$BoolorContext::install(module);
            t_JavascriptParser$BwandContext::install(module);
            t_JavascriptParser$BworContext::install(module);
            t_JavascriptParser$BwshiftContext::install(module);
            t_JavascriptParser$BwxorContext::install(module);
            t_JavascriptParser$CompileContext::install(module);
            t_JavascriptParser$ConditionalContext::install(module);
            t_JavascriptParser$ExpressionContext::install(module);
            t_JavascriptParser$ExternalContext::install(module);
            t_JavascriptParser$MuldivContext::install(module);
            t_JavascriptParser$NumericContext::install(module);
            t_JavascriptParser$PrecedenceContext::install(module);
            t_JavascriptParser$UnaryContext::install(module);
            t_VariableContext::install(module);
            t_VariableContext$Type::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.expressions", "js");

            t_ExpressionMath::initialize(module);
            t_JavascriptCompiler::initialize(module);
            t_JavascriptParser$AddsubContext::initialize(module);
            t_JavascriptParser$BoolandContext::initialize(module);
            t_JavascriptParser$BoolcompContext::initialize(module);
            t_JavascriptParser$BooleqneContext::initialize(module);
            t_JavascriptParser$BoolorContext::initialize(module);
            t_JavascriptParser$BwandContext::initialize(module);
            t_JavascriptParser$BworContext::initialize(module);
            t_JavascriptParser$BwshiftContext::initialize(module);
            t_JavascriptParser$BwxorContext::initialize(module);
            t_JavascriptParser$CompileContext::initialize(module);
            t_JavascriptParser$ConditionalContext::initialize(module);
            t_JavascriptParser$ExpressionContext::initialize(module);
            t_JavascriptParser$ExternalContext::initialize(module);
            t_JavascriptParser$MuldivContext::initialize(module);
            t_JavascriptParser$NumericContext::initialize(module);
            t_JavascriptParser$PrecedenceContext::initialize(module);
            t_JavascriptParser$UnaryContext::initialize(module);
            t_VariableContext::initialize(module);
            t_VariableContext$Type::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/facet/DrillDownQuery.h"
#include "org/apache/lucene/facet/DrillSideways.h"
#include "org/apache/lucene/facet/DrillSideways$ConcurrentDrillSidewaysResult.h"
#include "org/apache/lucene/facet/DrillSideways$DrillSidewaysResult.h"
#include "org/apache/lucene/facet/DrillSideways$Result.h"
#include "org/apache/lucene/facet/FacetCountsWithFilterQuery.h"
#include "org/apache/lucene/facet/FacetField.h"
#include "org/apache/lucene/facet/FacetQuery.h"
#include "org/apache/lucene/facet/FacetResult.h"
#include "org/apache/lucene/facet/FacetUtils.h"
#include "org/apache/lucene/facet/Facets.h"
#include "org/apache/lucene/facet/FacetsCollector.h"
#include "org/apache/lucene/facet/FacetsCollector$MatchingDocs.h"
#include "org/apache/lucene/facet/FacetsCollectorManager.h"
#include "org/apache/lucene/facet/FacetsCollectorManager$FacetsResult.h"
#include "org/apache/lucene/facet/FacetsConfig.h"
#include "org/apache/lucene/facet/FacetsConfig$DimConfig.h"
#include "org/apache/lucene/facet/FacetsConfig$DrillDownTermsIndexing.h"
#include "org/apache/lucene/facet/LabelAndValue.h"
#include "org/apache/lucene/facet/LongValueFacetCounts.h"
#include "org/apache/lucene/facet/MultiDoubleValues.h"
#include "org/apache/lucene/facet/MultiDoubleValuesSource.h"
#include "org/apache/lucene/facet/MultiFacetQuery.h"
#include "org/apache/lucene/facet/MultiFacets.h"
#include "org/apache/lucene/facet/MultiLongValues.h"
#include "org/apache/lucene/facet/MultiLongValuesSource.h"
#include "org/apache/lucene/facet/RandomSamplingFacetsCollector.h"
#include "org/apache/lucene/facet/StringDocValuesReaderState.h"
#include "org/apache/lucene/facet/StringValueFacetCounts.h"
#include "org/apache/lucene/facet/TopOrdAndFloatQueue.h"
#include "org/apache/lucene/facet/TopOrdAndFloatQueue$OrdAndFloat.h"
#include "org/apache/lucene/facet/TopOrdAndIntQueue.h"
#include "org/apache/lucene/facet/TopOrdAndIntQueue$OrdAndInt.h"
#include "org/apache/lucene/facet/TopOrdAndNumberQueue.h"
#include "org/apache/lucene/facet/TopOrdAndNumberQueue$OrdAndValue.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        namespace facetset {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace range {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace rangeonrange {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace sortedset {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace taxonomy {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "facet");

          t_DrillDownQuery::install(module);
          t_DrillSideways::install(module);
          t_DrillSideways$ConcurrentDrillSidewaysResult::install(module);
          t_DrillSideways$DrillSidewaysResult::install(module);
          t_DrillSideways$Result::install(module);
          t_FacetCountsWithFilterQuery::install(module);
          t_FacetField::install(module);
          t_FacetQuery::install(module);
          t_FacetResult::install(module);
          t_FacetUtils::install(module);
          t_Facets::install(module);
          t_FacetsCollector::install(module);
          t_FacetsCollector$MatchingDocs::install(module);
          t_FacetsCollectorManager::install(module);
          t_FacetsCollectorManager$FacetsResult::install(module);
          t_FacetsConfig::install(module);
          t_FacetsConfig$DimConfig::install(module);
          t_FacetsConfig$DrillDownTermsIndexing::install(module);
          t_LabelAndValue::install(module);
          t_LongValueFacetCounts::install(module);
          t_MultiDoubleValues::install(module);
          t_MultiDoubleValuesSource::install(module);
          t_MultiFacetQuery::install(module);
          t_MultiFacets::install(module);
          t_MultiLongValues::install(module);
          t_MultiLongValuesSource::install(module);
          t_RandomSamplingFacetsCollector::install(module);
          t_StringDocValuesReaderState::install(module);
          t_StringValueFacetCounts::install(module);
          t_TopOrdAndFloatQueue::install(module);
          t_TopOrdAndFloatQueue$OrdAndFloat::install(module);
          t_TopOrdAndIntQueue::install(module);
          t_TopOrdAndIntQueue$OrdAndInt::install(module);
          t_TopOrdAndNumberQueue::install(module);
          t_TopOrdAndNumberQueue$OrdAndValue::install(module);
          facetset::__install__(module);
          range::__install__(module);
          rangeonrange::__install__(module);
          sortedset::__install__(module);
          taxonomy::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "facet");

          t_DrillDownQuery::initialize(module);
          t_DrillSideways::initialize(module);
          t_DrillSideways$ConcurrentDrillSidewaysResult::initialize(module);
          t_DrillSideways$DrillSidewaysResult::initialize(module);
          t_DrillSideways$Result::initialize(module);
          t_FacetCountsWithFilterQuery::initialize(module);
          t_FacetField::initialize(module);
          t_FacetQuery::initialize(module);
          t_FacetResult::initialize(module);
          t_FacetUtils::initialize(module);
          t_Facets::initialize(module);
          t_FacetsCollector::initialize(module);
          t_FacetsCollector$MatchingDocs::initialize(module);
          t_FacetsCollectorManager::initialize(module);
          t_FacetsCollectorManager$FacetsResult::initialize(module);
          t_FacetsConfig::initialize(module);
          t_FacetsConfig$DimConfig::initialize(module);
          t_FacetsConfig$DrillDownTermsIndexing::initialize(module);
          t_LabelAndValue::initialize(module);
          t_LongValueFacetCounts::initialize(module);
          t_MultiDoubleValues::initialize(module);
          t_MultiDoubleValuesSource::initialize(module);
          t_MultiFacetQuery::initialize(module);
          t_MultiFacets::initialize(module);
          t_MultiLongValues::initialize(module);
          t_MultiLongValuesSource::initialize(module);
          t_RandomSamplingFacetsCollector::initialize(module);
          t_StringDocValuesReaderState::initialize(module);
          t_StringValueFacetCounts::initialize(module);
          t_TopOrdAndFloatQueue::initialize(module);
          t_TopOrdAndFloatQueue$OrdAndFloat::initialize(module);
          t_TopOrdAndIntQueue::initialize(module);
          t_TopOrdAndIntQueue$OrdAndInt::initialize(module);
          t_TopOrdAndNumberQueue::initialize(module);
          t_TopOrdAndNumberQueue$OrdAndValue::initialize(module);
          facetset::__initialize__(module);
          range::__initialize__(module);
          rangeonrange::__initialize__(module);
          sortedset::__initialize__(module);
          taxonomy::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/facet/facetset/DimRange.h"
#include "org/apache/lucene/facet/facetset/DoubleFacetSet.h"
#include "org/apache/lucene/facet/facetset/ExactFacetSetMatcher.h"
#include "org/apache/lucene/facet/facetset/FacetSet.h"
#include "org/apache/lucene/facet/facetset/FacetSetDecoder.h"
#include "org/apache/lucene/facet/facetset/FacetSetMatcher.h"
#include "org/apache/lucene/facet/facetset/FacetSetsField.h"
#include "org/apache/lucene/facet/facetset/FloatFacetSet.h"
#include "org/apache/lucene/facet/facetset/IntFacetSet.h"
#include "org/apache/lucene/facet/facetset/LongFacetSet.h"
#include "org/apache/lucene/facet/facetset/MatchingFacetSetsCounts.h"
#include "org/apache/lucene/facet/facetset/RangeFacetSetMatcher.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace facetset {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "facetset");

            t_DimRange::install(module);
            t_DoubleFacetSet::install(module);
            t_ExactFacetSetMatcher::install(module);
            t_FacetSet::install(module);
            t_FacetSetDecoder::install(module);
            t_FacetSetMatcher::install(module);
            t_FacetSetsField::install(module);
            t_FloatFacetSet::install(module);
            t_IntFacetSet::install(module);
            t_LongFacetSet::install(module);
            t_MatchingFacetSetsCounts::install(module);
            t_RangeFacetSetMatcher::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "facetset");

            t_DimRange::initialize(module);
            t_DoubleFacetSet::initialize(module);
            t_ExactFacetSetMatcher::initialize(module);
            t_FacetSet::initialize(module);
            t_FacetSetDecoder::initialize(module);
            t_FacetSetMatcher::initialize(module);
            t_FacetSetsField::initialize(module);
            t_FloatFacetSet::initialize(module);
            t_IntFacetSet::initialize(module);
            t_LongFacetSet::initialize(module);
            t_MatchingFacetSetsCounts::initialize(module);
            t_RangeFacetSetMatcher::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/facet/range/DoubleRange.h"
#include "org/apache/lucene/facet/range/DoubleRangeFacetCounts.h"
#include "org/apache/lucene/facet/range/DynamicRangeUtil.h"
#include "org/apache/lucene/facet/range/DynamicRangeUtil$DynamicRangeInfo.h"
#include "org/apache/lucene/facet/range/LongRange.h"
#include "org/apache/lucene/facet/range/LongRangeFacetCounts.h"
#include "org/apache/lucene/facet/range/OverlappingLongRangeCounter$LongRangeNode.h"
#include "org/apache/lucene/facet/range/Range.h"
#include "org/apache/lucene/facet/range/RangeFacetCounts.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "range");

            t_DoubleRange::install(module);
            t_DoubleRangeFacetCounts::install(module);
            t_DynamicRangeUtil::install(module);
            t_DynamicRangeUtil$DynamicRangeInfo::install(module);
            t_LongRange::install(module);
            t_LongRangeFacetCounts::install(module);
            t_OverlappingLongRangeCounter$LongRangeNode::install(module);
            t_Range::install(module);
            t_RangeFacetCounts::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "range");

            t_DoubleRange::initialize(module);
            t_DoubleRangeFacetCounts::initialize(module);
            t_DynamicRangeUtil::initialize(module);
            t_DynamicRangeUtil$DynamicRangeInfo::initialize(module);
            t_LongRange::initialize(module);
            t_LongRangeFacetCounts::initialize(module);
            t_OverlappingLongRangeCounter$LongRangeNode::initialize(module);
            t_Range::initialize(module);
            t_RangeFacetCounts::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/facet/rangeonrange/DoubleRange.h"
#include "org/apache/lucene/facet/rangeonrange/DoubleRangeOnRangeFacetCounts.h"
#include "org/apache/lucene/facet/rangeonrange/LongRange.h"
#include "org/apache/lucene/facet/rangeonrange/LongRangeOnRangeFacetCounts.h"
#include "org/apache/lucene/facet/rangeonrange/Range.h"
#include "org/apache/lucene/facet/rangeonrange/RangeOnRangeFacetCounts.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace rangeonrange {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "rangeonrange");

            t_DoubleRange::install(module);
            t_DoubleRangeOnRangeFacetCounts::install(module);
            t_LongRange::install(module);
            t_LongRangeOnRangeFacetCounts::install(module);
            t_Range::install(module);
            t_RangeOnRangeFacetCounts::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "rangeonrange");

            t_DoubleRange::initialize(module);
            t_DoubleRangeOnRangeFacetCounts::initialize(module);
            t_LongRange::initialize(module);
            t_LongRangeOnRangeFacetCounts::initialize(module);
            t_Range::initialize(module);
            t_RangeOnRangeFacetCounts::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/facet/sortedset/AbstractSortedSetDocValueFacetCounts.h"
#include "org/apache/lucene/facet/sortedset/ConcurrentSortedSetDocValuesFacetCounts.h"
#include "org/apache/lucene/facet/sortedset/DefaultSortedSetDocValuesReaderState.h"
#include "org/apache/lucene/facet/sortedset/SortedSetDocValuesFacetCounts.h"
#include "org/apache/lucene/facet/sortedset/SortedSetDocValuesFacetField.h"
#include "org/apache/lucene/facet/sortedset/SortedSetDocValuesReaderState.h"
#include "org/apache/lucene/facet/sortedset/SortedSetDocValuesReaderState$DimTree.h"
#include "org/apache/lucene/facet/sortedset/SortedSetDocValuesReaderState$OrdRange.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "sortedset");

            t_AbstractSortedSetDocValueFacetCounts::install(module);
            t_ConcurrentSortedSetDocValuesFacetCounts::install(module);
            t_DefaultSortedSetDocValuesReaderState::install(module);
            t_SortedSetDocValuesFacetCounts::install(module);
            t_SortedSetDocValuesFacetField::install(module);
            t_SortedSetDocValuesReaderState::install(module);
            t_SortedSetDocValuesReaderState$DimTree::install(module);
            t_SortedSetDocValuesReaderState$OrdRange::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "sortedset");

            t_AbstractSortedSetDocValueFacetCounts::initialize(module);
            t_ConcurrentSortedSetDocValuesFacetCounts::initialize(module);
            t_DefaultSortedSetDocValuesReaderState::initialize(module);
            t_SortedSetDocValuesFacetCounts::initialize(module);
            t_SortedSetDocValuesFacetField::initialize(module);
            t_SortedSetDocValuesReaderState::initialize(module);
            t_SortedSetDocValuesReaderState$DimTree::initialize(module);
            t_SortedSetDocValuesReaderState$OrdRange::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/facet/taxonomy/AssociationAggregationFunction.h"
#include "org/apache/lucene/facet/taxonomy/AssociationFacetField.h"
#include "org/apache/lucene/facet/taxonomy/FacetLabel.h"
#include "org/apache/lucene/facet/taxonomy/FastTaxonomyFacetCounts.h"
#include "org/apache/lucene/facet/taxonomy/FloatAssociationFacetField.h"
#include "org/apache/lucene/facet/taxonomy/FloatTaxonomyFacets.h"
#include "org/apache/lucene/facet/taxonomy/IntAssociationFacetField.h"
#include "org/apache/lucene/facet/taxonomy/IntTaxonomyFacets.h"
#include "org/apache/lucene/facet/taxonomy/LRUHashMap.h"
#include "org/apache/lucene/facet/taxonomy/OrdinalMappingLeafReader.h"
#include "org/apache/lucene/facet/taxonomy/ParallelTaxonomyArrays.h"
#include "org/apache/lucene/facet/taxonomy/ParallelTaxonomyArrays$IntArray.h"
#include "org/apache/lucene/facet/taxonomy/PrintTaxonomyStats.h"
#include "org/apache/lucene/facet/taxonomy/SearcherTaxonomyManager.h"
#include "org/apache/lucene/facet/taxonomy/SearcherTaxonomyManager$SearcherAndTaxonomy.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyFacetFloatAssociations.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyFacetIntAssociations.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyFacetLabels.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyFacetLabels$FacetLabelReader.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyFacets.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyMergeUtils.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyReader.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyReader$ChildrenIterator.h"
#include "org/apache/lucene/facet/taxonomy/TaxonomyWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          namespace directory {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace writercache {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "taxonomy");

            t_AssociationAggregationFunction::install(module);
            t_AssociationFacetField::install(module);
            t_FacetLabel::install(module);
            t_FastTaxonomyFacetCounts::install(module);
            t_FloatAssociationFacetField::install(module);
            t_FloatTaxonomyFacets::install(module);
            t_IntAssociationFacetField::install(module);
            t_IntTaxonomyFacets::install(module);
            t_LRUHashMap::install(module);
            t_OrdinalMappingLeafReader::install(module);
            t_ParallelTaxonomyArrays::install(module);
            t_ParallelTaxonomyArrays$IntArray::install(module);
            t_PrintTaxonomyStats::install(module);
            t_SearcherTaxonomyManager::install(module);
            t_SearcherTaxonomyManager$SearcherAndTaxonomy::install(module);
            t_TaxonomyFacetFloatAssociations::install(module);
            t_TaxonomyFacetIntAssociations::install(module);
            t_TaxonomyFacetLabels::install(module);
            t_TaxonomyFacetLabels$FacetLabelReader::install(module);
            t_TaxonomyFacets::install(module);
            t_TaxonomyMergeUtils::install(module);
            t_TaxonomyReader::install(module);
            t_TaxonomyReader$ChildrenIterator::install(module);
            t_TaxonomyWriter::install(module);
            directory::__install__(module);
            writercache::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.facet", "taxonomy");

            t_AssociationAggregationFunction::initialize(module);
            t_AssociationFacetField::initialize(module);
            t_FacetLabel::initialize(module);
            t_FastTaxonomyFacetCounts::initialize(module);
            t_FloatAssociationFacetField::initialize(module);
            t_FloatTaxonomyFacets::initialize(module);
            t_IntAssociationFacetField::initialize(module);
            t_IntTaxonomyFacets::initialize(module);
            t_LRUHashMap::initialize(module);
            t_OrdinalMappingLeafReader::initialize(module);
            t_ParallelTaxonomyArrays::initialize(module);
            t_ParallelTaxonomyArrays$IntArray::initialize(module);
            t_PrintTaxonomyStats::initialize(module);
            t_SearcherTaxonomyManager::initialize(module);
            t_SearcherTaxonomyManager$SearcherAndTaxonomy::initialize(module);
            t_TaxonomyFacetFloatAssociations::initialize(module);
            t_TaxonomyFacetIntAssociations::initialize(module);
            t_TaxonomyFacetLabels::initialize(module);
            t_TaxonomyFacetLabels$FacetLabelReader::initialize(module);
            t_TaxonomyFacets::initialize(module);
            t_TaxonomyMergeUtils::initialize(module);
            t_TaxonomyReader::initialize(module);
            t_TaxonomyReader$ChildrenIterator::initialize(module);
            t_TaxonomyWriter::initialize(module);
            directory::__initialize__(module);
            writercache::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/facet/taxonomy/directory/DirectoryTaxonomyReader.h"
#include "org/apache/lucene/facet/taxonomy/directory/DirectoryTaxonomyWriter.h"
#include "org/apache/lucene/facet/taxonomy/directory/DirectoryTaxonomyWriter$DiskOrdinalMap.h"
#include "org/apache/lucene/facet/taxonomy/directory/DirectoryTaxonomyWriter$MemoryOrdinalMap.h"
#include "org/apache/lucene/facet/taxonomy/directory/DirectoryTaxonomyWriter$OrdinalMap.h"
#include "org/apache/lucene/facet/taxonomy/directory/ReindexingEnrichedDirectoryTaxonomyWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace directory {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.facet.taxonomy", "directory");

              t_DirectoryTaxonomyReader::install(module);
              t_DirectoryTaxonomyWriter::install(module);
              t_DirectoryTaxonomyWriter$DiskOrdinalMap::install(module);
              t_DirectoryTaxonomyWriter$MemoryOrdinalMap::install(module);
              t_DirectoryTaxonomyWriter$OrdinalMap::install(module);
              t_ReindexingEnrichedDirectoryTaxonomyWriter::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.facet.taxonomy", "directory");

              t_DirectoryTaxonomyReader::initialize(module);
              t_DirectoryTaxonomyWriter::initialize(module);
              t_DirectoryTaxonomyWriter$DiskOrdinalMap::initialize(module);
              t_DirectoryTaxonomyWriter$MemoryOrdinalMap::initialize(module);
              t_DirectoryTaxonomyWriter$OrdinalMap::initialize(module);
              t_ReindexingEnrichedDirectoryTaxonomyWriter::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/facet/taxonomy/writercache/LabelToOrdinal.h"
#include "org/apache/lucene/facet/taxonomy/writercache/LruTaxonomyWriterCache.h"
#include "org/apache/lucene/facet/taxonomy/writercache/LruTaxonomyWriterCache$LRUType.h"
#include "org/apache/lucene/facet/taxonomy/writercache/NameHashIntCacheLRU.h"
#include "org/apache/lucene/facet/taxonomy/writercache/NameIntCacheLRU.h"
#include "org/apache/lucene/facet/taxonomy/writercache/TaxonomyWriterCache.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          namespace writercache {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.facet.taxonomy", "writercache");

              t_LabelToOrdinal::install(module);
              t_LruTaxonomyWriterCache::install(module);
              t_LruTaxonomyWriterCache$LRUType::install(module);
              t_NameHashIntCacheLRU::install(module);
              t_NameIntCacheLRU::install(module);
              t_TaxonomyWriterCache::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.facet.taxonomy", "writercache");

              t_LabelToOrdinal::initialize(module);
              t_LruTaxonomyWriterCache::initialize(module);
              t_LruTaxonomyWriterCache$LRUType::initialize(module);
              t_NameHashIntCacheLRU::initialize(module);
              t_NameIntCacheLRU::initialize(module);
              t_TaxonomyWriterCache::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/geo/Circle.h"
#include "org/apache/lucene/geo/Component2D.h"
#include "org/apache/lucene/geo/Component2D$WithinRelation.h"
#include "org/apache/lucene/geo/GeoEncodingUtils.h"
#include "org/apache/lucene/geo/GeoEncodingUtils$Component2DPredicate.h"
#include "org/apache/lucene/geo/GeoEncodingUtils$DistancePredicate.h"
#include "org/apache/lucene/geo/GeoEncodingUtils$Grid.h"
#include "org/apache/lucene/geo/GeoUtils.h"
#include "org/apache/lucene/geo/GeoUtils$WindingOrder.h"
#include "org/apache/lucene/geo/Geometry.h"
#include "org/apache/lucene/geo/LatLonGeometry.h"
#include "org/apache/lucene/geo/Line.h"
#include "org/apache/lucene/geo/Point.h"
#include "org/apache/lucene/geo/Polygon.h"
#include "org/apache/lucene/geo/Rectangle.h"
#include "org/apache/lucene/geo/SimpleWKTShapeParser.h"
#include "org/apache/lucene/geo/SimpleWKTShapeParser$ShapeType.h"
#include "org/apache/lucene/geo/Tessellator.h"
#include "org/apache/lucene/geo/Tessellator$Monitor.h"
#include "org/apache/lucene/geo/Tessellator$Triangle.h"
#include "org/apache/lucene/geo/XYCircle.h"
#include "org/apache/lucene/geo/XYEncodingUtils.h"
#include "org/apache/lucene/geo/XYGeometry.h"
#include "org/apache/lucene/geo/XYLine.h"
#include "org/apache/lucene/geo/XYPoint.h"
#include "org/apache/lucene/geo/XYPolygon.h"
#include "org/apache/lucene/geo/XYRectangle.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace geo {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "geo");

          t_Circle::install(module);
          t_Component2D::install(module);
          t_Component2D$WithinRelation::install(module);
          t_GeoEncodingUtils::install(module);
          t_GeoEncodingUtils$Component2DPredicate::install(module);
          t_GeoEncodingUtils$DistancePredicate::install(module);
          t_GeoEncodingUtils$Grid::install(module);
          t_GeoUtils::install(module);
          t_GeoUtils$WindingOrder::install(module);
          t_Geometry::install(module);
          t_LatLonGeometry::install(module);
          t_Line::install(module);
          t_Point::install(module);
          t_Polygon::install(module);
          t_Rectangle::install(module);
          t_SimpleWKTShapeParser::install(module);
          t_SimpleWKTShapeParser$ShapeType::install(module);
          t_Tessellator::install(module);
          t_Tessellator$Monitor::install(module);
          t_Tessellator$Triangle::install(module);
          t_XYCircle::install(module);
          t_XYEncodingUtils::install(module);
          t_XYGeometry::install(module);
          t_XYLine::install(module);
          t_XYPoint::install(module);
          t_XYPolygon::install(module);
          t_XYRectangle::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "geo");

          t_Circle::initialize(module);
          t_Component2D::initialize(module);
          t_Component2D$WithinRelation::initialize(module);
          t_GeoEncodingUtils::initialize(module);
          t_GeoEncodingUtils$Component2DPredicate::initialize(module);
          t_GeoEncodingUtils$DistancePredicate::initialize(module);
          t_GeoEncodingUtils$Grid::initialize(module);
          t_GeoUtils::initialize(module);
          t_GeoUtils$WindingOrder::initialize(module);
          t_Geometry::initialize(module);
          t_LatLonGeometry::initialize(module);
          t_Line::initialize(module);
          t_Point::initialize(module);
          t_Polygon::initialize(module);
          t_Rectangle::initialize(module);
          t_SimpleWKTShapeParser::initialize(module);
          t_SimpleWKTShapeParser$ShapeType::initialize(module);
          t_Tessellator::initialize(module);
          t_Tessellator$Monitor::initialize(module);
          t_Tessellator$Triangle::initialize(module);
          t_XYCircle::initialize(module);
          t_XYEncodingUtils::initialize(module);
          t_XYGeometry::initialize(module);
          t_XYLine::initialize(module);
          t_XYPoint::initialize(module);
          t_XYPolygon::initialize(module);
          t_XYRectangle::initialize(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/index/AutomatonTermsEnum.h"
#include "org/apache/lucene/index/BaseCompositeReader.h"
#include "org/apache/lucene/index/BaseTermsEnum.h"
#include "org/apache/lucene/index/BinaryDocValues.h"
#include "org/apache/lucene/index/ByteVectorValues.h"
#include "org/apache/lucene/index/CheckIndex.h"
#include "org/apache/lucene/index/CheckIndex$CheckIndexException.h"
#include "org/apache/lucene/index/CheckIndex$Level.h"
#include "org/apache/lucene/index/CheckIndex$Options.h"
#include "org/apache/lucene/index/CheckIndex$Status.h"
#include "org/apache/lucene/index/CheckIndex$Status$DocValuesStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$FieldInfoStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$FieldNormStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$IndexSortStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$LiveDocStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$PointsStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$SegmentInfoStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$SoftDeletesStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$StoredFieldStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$TermIndexStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$TermVectorStatus.h"
#include "org/apache/lucene/index/CheckIndex$Status$VectorValuesStatus.h"
#include "org/apache/lucene/index/CheckIndex$VerifyPointsVisitor.h"
#include "org/apache/lucene/index/CodecReader.h"
#include "org/apache/lucene/index/CompositeReader.h"
#include "org/apache/lucene/index/CompositeReaderContext.h"
#include "org/apache/lucene/index/ConcurrentMergeScheduler.h"
#include "org/apache/lucene/index/CorruptIndexException.h"
#include "org/apache/lucene/index/DirectoryReader.h"
#include "org/apache/lucene/index/DocIDMerger.h"
#include "org/apache/lucene/index/DocIDMerger$Sub.h"
#include "org/apache/lucene/index/DocValues.h"
#include "org/apache/lucene/index/DocValuesIterator.h"
#include "org/apache/lucene/index/DocValuesSkipIndexType.h"
#include "org/apache/lucene/index/DocValuesSkipper.h"
#include "org/apache/lucene/index/DocValuesType.h"
#include "org/apache/lucene/index/DocsWithFieldSet.h"
#include "org/apache/lucene/index/EmptyDocValuesProducer.h"
#include "org/apache/lucene/index/ExitableDirectoryReader.h"
#include "org/apache/lucene/index/ExitableDirectoryReader$ExitableFilterAtomicReader.h"
#include "org/apache/lucene/index/ExitableDirectoryReader$ExitableSubReaderWrapper.h"
#include "org/apache/lucene/index/ExitableDirectoryReader$ExitableTerms.h"
#include "org/apache/lucene/index/ExitableDirectoryReader$ExitableTermsEnum.h"
#include "org/apache/lucene/index/ExitableDirectoryReader$ExitingReaderException.h"
#include "org/apache/lucene/index/FieldInfo.h"
#include "org/apache/lucene/index/FieldInfos.h"
#include "org/apache/lucene/index/FieldInvertState.h"
#include "org/apache/lucene/index/FieldTermIterator.h"
#include "org/apache/lucene/index/Fields.h"
#include "org/apache/lucene/index/FilterBinaryDocValues.h"
#include "org/apache/lucene/index/FilterCodecReader.h"
#include "org/apache/lucene/index/FilterDirectoryReader.h"
#include "org/apache/lucene/index/FilterDirectoryReader$SubReaderWrapper.h"
#include "org/apache/lucene/index/FilterLeafReader.h"
#include "org/apache/lucene/index/FilterLeafReader$FilterFields.h"
#include "org/apache/lucene/index/FilterLeafReader$FilterPostingsEnum.h"
#include "org/apache/lucene/index/FilterLeafReader$FilterTerms.h"
#include "org/apache/lucene/index/FilterLeafReader$FilterTermsEnum.h"
#include "org/apache/lucene/index/FilterMergePolicy.h"
#include "org/apache/lucene/index/FilterNumericDocValues.h"
#include "org/apache/lucene/index/FilterSortedDocValues.h"
#include "org/apache/lucene/index/FilterSortedNumericDocValues.h"
#include "org/apache/lucene/index/FilterSortedSetDocValues.h"
#include "org/apache/lucene/index/FilteredTermsEnum.h"
#include "org/apache/lucene/index/FloatVectorValues.h"
#include "org/apache/lucene/index/Impact.h"
#include "org/apache/lucene/index/Impacts.h"
#include "org/apache/lucene/index/ImpactsEnum.h"
#include "org/apache/lucene/index/ImpactsSource.h"
#include "org/apache/lucene/index/IndexCommit.h"
#include "org/apache/lucene/index/IndexDeletionPolicy.h"
#include "org/apache/lucene/index/IndexFileNames.h"
#include "org/apache/lucene/index/IndexFormatTooNewException.h"
#include "org/apache/lucene/index/IndexFormatTooOldException.h"
#include "org/apache/lucene/index/IndexNotFoundException.h"
#include "org/apache/lucene/index/IndexOptions.h"
#include "org/apache/lucene/index/IndexReader.h"
#include "org/apache/lucene/index/IndexReader$CacheHelper.h"
#include "org/apache/lucene/index/IndexReader$CacheKey.h"
#include "org/apache/lucene/index/IndexReader$ClosedListener.h"
#include "org/apache/lucene/index/IndexReaderContext.h"
#include "org/apache/lucene/index/IndexSorter.h"
#include "org/apache/lucene/index/IndexSorter$ComparableProvider.h"
#include "org/apache/lucene/index/IndexSorter$DocComparator.h"
#include "org/apache/lucene/index/IndexSorter$DoubleSorter.h"
#include "org/apache/lucene/index/IndexSorter$FloatSorter.h"
#include "org/apache/lucene/index/IndexSorter$IntSorter.h"
#include "org/apache/lucene/index/IndexSorter$LongSorter.h"
#include "org/apache/lucene/index/IndexSorter$NumericDocValuesProvider.h"
#include "org/apache/lucene/index/IndexSorter$SortedDocValuesProvider.h"
#include "org/apache/lucene/index/IndexSorter$StringSorter.h"
#include "org/apache/lucene/index/IndexUpgrader.h"
#include "org/apache/lucene/index/IndexWriter.h"
#include "org/apache/lucene/index/IndexWriter$DocStats.h"
#include "org/apache/lucene/index/IndexWriter$IndexReaderWarmer.h"
#include "org/apache/lucene/index/IndexWriterConfig.h"
#include "org/apache/lucene/index/IndexWriterConfig$OpenMode.h"
#include "org/apache/lucene/index/IndexWriterEventListener.h"
#include "org/apache/lucene/index/IndexableField.h"
#include "org/apache/lucene/index/IndexableFieldType.h"
#include "org/apache/lucene/index/KeepOnlyLastCommitDeletionPolicy.h"
#include "org/apache/lucene/index/KnnVectorValues.h"
#include "org/apache/lucene/index/KnnVectorValues$DocIndexIterator.h"
#include "org/apache/lucene/index/LeafMetaData.h"
#include "org/apache/lucene/index/LeafReader.h"
#include "org/apache/lucene/index/LeafReaderContext.h"
#include "org/apache/lucene/index/LiveIndexWriterConfig.h"
#include "org/apache/lucene/index/LogByteSizeMergePolicy.h"
#include "org/apache/lucene/index/LogDocMergePolicy.h"
#include "org/apache/lucene/index/LogMergePolicy.h"
#include "org/apache/lucene/index/MappedMultiFields.h"
#include "org/apache/lucene/index/MergePolicy.h"
#include "org/apache/lucene/index/MergePolicy$MergeAbortedException.h"
#include "org/apache/lucene/index/MergePolicy$MergeContext.h"
#include "org/apache/lucene/index/MergePolicy$MergeException.h"
#include "org/apache/lucene/index/MergePolicy$MergeSpecification.h"
#include "org/apache/lucene/index/MergePolicy$OneMerge.h"
#include "org/apache/lucene/index/MergePolicy$OneMergeProgress.h"
#include "org/apache/lucene/index/MergePolicy$OneMergeProgress$PauseReason.h"
#include "org/apache/lucene/index/MergeRateLimiter.h"
#include "org/apache/lucene/index/MergeScheduler.h"
#include "org/apache/lucene/index/MergeScheduler$MergeSource.h"
#include "org/apache/lucene/index/MergeState.h"
#include "org/apache/lucene/index/MergeState$DocMap.h"
#include "org/apache/lucene/index/MergeTrigger.h"
#include "org/apache/lucene/index/MultiBits.h"
#include "org/apache/lucene/index/MultiDocValues.h"
#include "org/apache/lucene/index/MultiDocValues$MultiSortedDocValues.h"
#include "org/apache/lucene/index/MultiDocValues$MultiSortedSetDocValues.h"
#include "org/apache/lucene/index/MultiFields.h"
#include "org/apache/lucene/index/MultiLeafReader.h"
#include "org/apache/lucene/index/MultiPostingsEnum.h"
#include "org/apache/lucene/index/MultiPostingsEnum$EnumWithSlice.h"
#include "org/apache/lucene/index/MultiReader.h"
#include "org/apache/lucene/index/MultiTerms.h"
#include "org/apache/lucene/index/MultiTermsEnum.h"
#include "org/apache/lucene/index/NoDeletionPolicy.h"
#include "org/apache/lucene/index/NoMergePolicy.h"
#include "org/apache/lucene/index/NoMergeScheduler.h"
#include "org/apache/lucene/index/NumericDocValues.h"
#include "org/apache/lucene/index/OneMergeWrappingMergePolicy.h"
#include "org/apache/lucene/index/OrdTermState.h"
#include "org/apache/lucene/index/OrdinalMap.h"
#include "org/apache/lucene/index/ParallelCompositeReader.h"
#include "org/apache/lucene/index/ParallelLeafReader.h"
#include "org/apache/lucene/index/PersistentSnapshotDeletionPolicy.h"
#include "org/apache/lucene/index/PointValues.h"
#include "org/apache/lucene/index/PointValues$IntersectVisitor.h"
#include "org/apache/lucene/index/PointValues$PointTree.h"
#include "org/apache/lucene/index/PointValues$Relation.h"
#include "org/apache/lucene/index/PostingsEnum.h"
#include "org/apache/lucene/index/PrefixCodedTerms.h"
#include "org/apache/lucene/index/PrefixCodedTerms$Builder.h"
#include "org/apache/lucene/index/PrefixCodedTerms$TermIterator.h"
#include "org/apache/lucene/index/QueryTimeout.h"
#include "org/apache/lucene/index/QueryTimeoutImpl.h"
#include "org/apache/lucene/index/ReaderManager.h"
#include "org/apache/lucene/index/ReaderSlice.h"
#include "org/apache/lucene/index/ReaderUtil.h"
#include "org/apache/lucene/index/SegmentCommitInfo.h"
#include "org/apache/lucene/index/SegmentInfo.h"
#include "org/apache/lucene/index/SegmentInfos.h"
#include "org/apache/lucene/index/SegmentInfos$FindSegmentsFile.h"
#include "org/apache/lucene/index/SegmentReadState.h"
#include "org/apache/lucene/index/SegmentReader.h"
#include "org/apache/lucene/index/SegmentWriteState.h"
#include "org/apache/lucene/index/SerialMergeScheduler.h"
#include "org/apache/lucene/index/SimpleMergedSegmentWarmer.h"
#include "org/apache/lucene/index/SingleTermsEnum.h"
#include "org/apache/lucene/index/SlowCodecReaderWrapper.h"
#include "org/apache/lucene/index/SlowImpactsEnum.h"
#include "org/apache/lucene/index/SnapshotDeletionPolicy.h"
#include "org/apache/lucene/index/SoftDeletesDirectoryReaderWrapper.h"
#include "org/apache/lucene/index/SoftDeletesRetentionMergePolicy.h"
#include "org/apache/lucene/index/SortFieldProvider.h"
#include "org/apache/lucene/index/SortedDocValues.h"
#include "org/apache/lucene/index/SortedNumericDocValues.h"
#include "org/apache/lucene/index/SortedSetDocValues.h"
#include "org/apache/lucene/index/Sorter.h"
#include "org/apache/lucene/index/Sorter$DocMap.h"
#include "org/apache/lucene/index/SortingCodecReader.h"
#include "org/apache/lucene/index/SortingCodecReader$SortingValuesIterator.h"
#include "org/apache/lucene/index/StandardDirectoryReader.h"
#include "org/apache/lucene/index/StoredFieldVisitor.h"
#include "org/apache/lucene/index/StoredFieldVisitor$Status.h"
#include "org/apache/lucene/index/StoredFields.h"
#include "org/apache/lucene/index/Term.h"
#include "org/apache/lucene/index/TermState.h"
#include "org/apache/lucene/index/TermStates.h"
#include "org/apache/lucene/index/TermVectors.h"
#include "org/apache/lucene/index/Terms.h"
#include "org/apache/lucene/index/TermsEnum.h"
#include "org/apache/lucene/index/TermsEnum$SeekStatus.h"
#include "org/apache/lucene/index/TieredMergePolicy.h"
#include "org/apache/lucene/index/TwoPhaseCommit.h"
#include "org/apache/lucene/index/TwoPhaseCommitTool.h"
#include "org/apache/lucene/index/TwoPhaseCommitTool$CommitFailException.h"
#include "org/apache/lucene/index/TwoPhaseCommitTool$PrepareCommitFailException.h"
#include "org/apache/lucene/index/UpgradeIndexMergePolicy.h"
#include "org/apache/lucene/index/VectorEncoding.h"
#include "org/apache/lucene/index/VectorSimilarityFunction.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        namespace memory {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "index");

          t_AutomatonTermsEnum::install(module);
          t_BaseCompositeReader::install(module);
          t_BaseTermsEnum::install(module);
          t_BinaryDocValues::install(module);
          t_ByteVectorValues::install(module);
          t_CheckIndex::install(module);
          t_CheckIndex$CheckIndexException::install(module);
          t_CheckIndex$Level::install(module);
          t_CheckIndex$Options::install(module);
          t_CheckIndex$Status::install(module);
          t_CheckIndex$Status$DocValuesStatus::install(module);
          t_CheckIndex$Status$FieldInfoStatus::install(module);
          t_CheckIndex$Status$FieldNormStatus::install(module);
          t_CheckIndex$Status$IndexSortStatus::install(module);
          t_CheckIndex$Status$LiveDocStatus::install(module);
          t_CheckIndex$Status$PointsStatus::install(module);
          t_CheckIndex$Status$SegmentInfoStatus::install(module);
          t_CheckIndex$Status$SoftDeletesStatus::install(module);
          t_CheckIndex$Status$StoredFieldStatus::install(module);
          t_CheckIndex$Status$TermIndexStatus::install(module);
          t_CheckIndex$Status$TermVectorStatus::install(module);
          t_CheckIndex$Status$VectorValuesStatus::install(module);
          t_CheckIndex$VerifyPointsVisitor::install(module);
          t_CodecReader::install(module);
          t_CompositeReader::install(module);
          t_CompositeReaderContext::install(module);
          t_ConcurrentMergeScheduler::install(module);
          t_CorruptIndexException::install(module);
          t_DirectoryReader::install(module);
          t_DocIDMerger::install(module);
          t_DocIDMerger$Sub::install(module);
          t_DocValues::install(module);
          t_DocValuesIterator::install(module);
          t_DocValuesSkipIndexType::install(module);
          t_DocValuesSkipper::install(module);
          t_DocValuesType::install(module);
          t_DocsWithFieldSet::install(module);
          t_EmptyDocValuesProducer::install(module);
          t_ExitableDirectoryReader::install(module);
          t_ExitableDirectoryReader$ExitableFilterAtomicReader::install(module);
          t_ExitableDirectoryReader$ExitableSubReaderWrapper::install(module);
          t_ExitableDirectoryReader$ExitableTerms::install(module);
          t_ExitableDirectoryReader$ExitableTermsEnum::install(module);
          t_ExitableDirectoryReader$ExitingReaderException::install(module);
          t_FieldInfo::install(module);
          t_FieldInfos::install(module);
          t_FieldInvertState::install(module);
          t_FieldTermIterator::install(module);
          t_Fields::install(module);
          t_FilterBinaryDocValues::install(module);
          t_FilterCodecReader::install(module);
          t_FilterDirectoryReader::install(module);
          t_FilterDirectoryReader$SubReaderWrapper::install(module);
          t_FilterLeafReader::install(module);
          t_FilterLeafReader$FilterFields::install(module);
          t_FilterLeafReader$FilterPostingsEnum::install(module);
          t_FilterLeafReader$FilterTerms::install(module);
          t_FilterLeafReader$FilterTermsEnum::install(module);
          t_FilterMergePolicy::install(module);
          t_FilterNumericDocValues::install(module);
          t_FilterSortedDocValues::install(module);
          t_FilterSortedNumericDocValues::install(module);
          t_FilterSortedSetDocValues::install(module);
          t_FilteredTermsEnum::install(module);
          t_FloatVectorValues::install(module);
          t_Impact::install(module);
          t_Impacts::install(module);
          t_ImpactsEnum::install(module);
          t_ImpactsSource::install(module);
          t_IndexCommit::install(module);
          t_IndexDeletionPolicy::install(module);
          t_IndexFileNames::install(module);
          t_IndexFormatTooNewException::install(module);
          t_IndexFormatTooOldException::install(module);
          t_IndexNotFoundException::install(module);
          t_IndexOptions::install(module);
          t_IndexReader::install(module);
          t_IndexReader$CacheHelper::install(module);
          t_IndexReader$CacheKey::install(module);
          t_IndexReader$ClosedListener::install(module);
          t_IndexReaderContext::install(module);
          t_IndexSorter::install(module);
          t_IndexSorter$ComparableProvider::install(module);
          t_IndexSorter$DocComparator::install(module);
          t_IndexSorter$DoubleSorter::install(module);
          t_IndexSorter$FloatSorter::install(module);
          t_IndexSorter$IntSorter::install(module);
          t_IndexSorter$LongSorter::install(module);
          t_IndexSorter$NumericDocValuesProvider::install(module);
          t_IndexSorter$SortedDocValuesProvider::install(module);
          t_IndexSorter$StringSorter::install(module);
          t_IndexUpgrader::install(module);
          t_IndexWriter::install(module);
          t_IndexWriter$DocStats::install(module);
          t_IndexWriter$IndexReaderWarmer::install(module);
          t_IndexWriterConfig::install(module);
          t_IndexWriterConfig$OpenMode::install(module);
          t_IndexWriterEventListener::install(module);
          t_IndexableField::install(module);
          t_IndexableFieldType::install(module);
          t_KeepOnlyLastCommitDeletionPolicy::install(module);
          t_KnnVectorValues::install(module);
          t_KnnVectorValues$DocIndexIterator::install(module);
          t_LeafMetaData::install(module);
          t_LeafReader::install(module);
          t_LeafReaderContext::install(module);
          t_LiveIndexWriterConfig::install(module);
          t_LogByteSizeMergePolicy::install(module);
          t_LogDocMergePolicy::install(module);
          t_LogMergePolicy::install(module);
          t_MappedMultiFields::install(module);
          t_MergePolicy::install(module);
          t_MergePolicy$MergeAbortedException::install(module);
          t_MergePolicy$MergeContext::install(module);
          t_MergePolicy$MergeException::install(module);
          t_MergePolicy$MergeSpecification::install(module);
          t_MergePolicy$OneMerge::install(module);
          t_MergePolicy$OneMergeProgress::install(module);
          t_MergePolicy$OneMergeProgress$PauseReason::install(module);
          t_MergeRateLimiter::install(module);
          t_MergeScheduler::install(module);
          t_MergeScheduler$MergeSource::install(module);
          t_MergeState::install(module);
          t_MergeState$DocMap::install(module);
          t_MergeTrigger::install(module);
          t_MultiBits::install(module);
          t_MultiDocValues::install(module);
          t_MultiDocValues$MultiSortedDocValues::install(module);
          t_MultiDocValues$MultiSortedSetDocValues::install(module);
          t_MultiFields::install(module);
          t_MultiLeafReader::install(module);
          t_MultiPostingsEnum::install(module);
          t_MultiPostingsEnum$EnumWithSlice::install(module);
          t_MultiReader::install(module);
          t_MultiTerms::install(module);
          t_MultiTermsEnum::install(module);
          t_NoDeletionPolicy::install(module);
          t_NoMergePolicy::install(module);
          t_NoMergeScheduler::install(module);
          t_NumericDocValues::install(module);
          t_OneMergeWrappingMergePolicy::install(module);
          t_OrdTermState::install(module);
          t_OrdinalMap::install(module);
          t_ParallelCompositeReader::install(module);
          t_ParallelLeafReader::install(module);
          t_PersistentSnapshotDeletionPolicy::install(module);
          t_PointValues::install(module);
          t_PointValues$IntersectVisitor::install(module);
          t_PointValues$PointTree::install(module);
          t_PointValues$Relation::install(module);
          t_PostingsEnum::install(module);
          t_PrefixCodedTerms::install(module);
          t_PrefixCodedTerms$Builder::install(module);
          t_PrefixCodedTerms$TermIterator::install(module);
          t_QueryTimeout::install(module);
          t_QueryTimeoutImpl::install(module);
          t_ReaderManager::install(module);
          t_ReaderSlice::install(module);
          t_ReaderUtil::install(module);
          t_SegmentCommitInfo::install(module);
          t_SegmentInfo::install(module);
          t_SegmentInfos::install(module);
          t_SegmentInfos$FindSegmentsFile::install(module);
          t_SegmentReadState::install(module);
          t_SegmentReader::install(module);
          t_SegmentWriteState::install(module);
          t_SerialMergeScheduler::install(module);
          t_SimpleMergedSegmentWarmer::install(module);
          t_SingleTermsEnum::install(module);
          t_SlowCodecReaderWrapper::install(module);
          t_SlowImpactsEnum::install(module);
          t_SnapshotDeletionPolicy::install(module);
          t_SoftDeletesDirectoryReaderWrapper::install(module);
          t_SoftDeletesRetentionMergePolicy::install(module);
          t_SortFieldProvider::install(module);
          t_SortedDocValues::install(module);
          t_SortedNumericDocValues::install(module);
          t_SortedSetDocValues::install(module);
          t_Sorter::install(module);
          t_Sorter$DocMap::install(module);
          t_SortingCodecReader::install(module);
          t_SortingCodecReader$SortingValuesIterator::install(module);
          t_StandardDirectoryReader::install(module);
          t_StoredFieldVisitor::install(module);
          t_StoredFieldVisitor$Status::install(module);
          t_StoredFields::install(module);
          t_Term::install(module);
          t_TermState::install(module);
          t_TermStates::install(module);
          t_TermVectors::install(module);
          t_Terms::install(module);
          t_TermsEnum::install(module);
          t_TermsEnum$SeekStatus::install(module);
          t_TieredMergePolicy::install(module);
          t_TwoPhaseCommit::install(module);
          t_TwoPhaseCommitTool::install(module);
          t_TwoPhaseCommitTool$CommitFailException::install(module);
          t_TwoPhaseCommitTool$PrepareCommitFailException::install(module);
          t_UpgradeIndexMergePolicy::install(module);
          t_VectorEncoding::install(module);
          t_VectorSimilarityFunction::install(module);
          memory::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "index");

          t_AutomatonTermsEnum::initialize(module);
          t_BaseCompositeReader::initialize(module);
          t_BaseTermsEnum::initialize(module);
          t_BinaryDocValues::initialize(module);
          t_ByteVectorValues::initialize(module);
          t_CheckIndex::initialize(module);
          t_CheckIndex$CheckIndexException::initialize(module);
          t_CheckIndex$Level::initialize(module);
          t_CheckIndex$Options::initialize(module);
          t_CheckIndex$Status::initialize(module);
          t_CheckIndex$Status$DocValuesStatus::initialize(module);
          t_CheckIndex$Status$FieldInfoStatus::initialize(module);
          t_CheckIndex$Status$FieldNormStatus::initialize(module);
          t_CheckIndex$Status$IndexSortStatus::initialize(module);
          t_CheckIndex$Status$LiveDocStatus::initialize(module);
          t_CheckIndex$Status$PointsStatus::initialize(module);
          t_CheckIndex$Status$SegmentInfoStatus::initialize(module);
          t_CheckIndex$Status$SoftDeletesStatus::initialize(module);
          t_CheckIndex$Status$StoredFieldStatus::initialize(module);
          t_CheckIndex$Status$TermIndexStatus::initialize(module);
          t_CheckIndex$Status$TermVectorStatus::initialize(module);
          t_CheckIndex$Status$VectorValuesStatus::initialize(module);
          t_CheckIndex$VerifyPointsVisitor::initialize(module);
          t_CodecReader::initialize(module);
          t_CompositeReader::initialize(module);
          t_CompositeReaderContext::initialize(module);
          t_ConcurrentMergeScheduler::initialize(module);
          t_CorruptIndexException::initialize(module);
          t_DirectoryReader::initialize(module);
          t_DocIDMerger::initialize(module);
          t_DocIDMerger$Sub::initialize(module);
          t_DocValues::initialize(module);
          t_DocValuesIterator::initialize(module);
          t_DocValuesSkipIndexType::initialize(module);
          t_DocValuesSkipper::initialize(module);
          t_DocValuesType::initialize(module);
          t_DocsWithFieldSet::initialize(module);
          t_EmptyDocValuesProducer::initialize(module);
          t_ExitableDirectoryReader::initialize(module);
          t_ExitableDirectoryReader$ExitableFilterAtomicReader::initialize(module);
          t_ExitableDirectoryReader$ExitableSubReaderWrapper::initialize(module);
          t_ExitableDirectoryReader$ExitableTerms::initialize(module);
          t_ExitableDirectoryReader$ExitableTermsEnum::initialize(module);
          t_ExitableDirectoryReader$ExitingReaderException::initialize(module);
          t_FieldInfo::initialize(module);
          t_FieldInfos::initialize(module);
          t_FieldInvertState::initialize(module);
          t_FieldTermIterator::initialize(module);
          t_Fields::initialize(module);
          t_FilterBinaryDocValues::initialize(module);
          t_FilterCodecReader::initialize(module);
          t_FilterDirectoryReader::initialize(module);
          t_FilterDirectoryReader$SubReaderWrapper::initialize(module);
          t_FilterLeafReader::initialize(module);
          t_FilterLeafReader$FilterFields::initialize(module);
          t_FilterLeafReader$FilterPostingsEnum::initialize(module);
          t_FilterLeafReader$FilterTerms::initialize(module);
          t_FilterLeafReader$FilterTermsEnum::initialize(module);
          t_FilterMergePolicy::initialize(module);
          t_FilterNumericDocValues::initialize(module);
          t_FilterSortedDocValues::initialize(module);
          t_FilterSortedNumericDocValues::initialize(module);
          t_FilterSortedSetDocValues::initialize(module);
          t_FilteredTermsEnum::initialize(module);
          t_FloatVectorValues::initialize(module);
          t_Impact::initialize(module);
          t_Impacts::initialize(module);
          t_ImpactsEnum::initialize(module);
          t_ImpactsSource::initialize(module);
          t_IndexCommit::initialize(module);
          t_IndexDeletionPolicy::initialize(module);
          t_IndexFileNames::initialize(module);
          t_IndexFormatTooNewException::initialize(module);
          t_IndexFormatTooOldException::initialize(module);
          t_IndexNotFoundException::initialize(module);
          t_IndexOptions::initialize(module);
          t_IndexReader::initialize(module);
          t_IndexReader$CacheHelper::initialize(module);
          t_IndexReader$CacheKey::initialize(module);
          t_IndexReader$ClosedListener::initialize(module);
          t_IndexReaderContext::initialize(module);
          t_IndexSorter::initialize(module);
          t_IndexSorter$ComparableProvider::initialize(module);
          t_IndexSorter$DocComparator::initialize(module);
          t_IndexSorter$DoubleSorter::initialize(module);
          t_IndexSorter$FloatSorter::initialize(module);
          t_IndexSorter$IntSorter::initialize(module);
          t_IndexSorter$LongSorter::initialize(module);
          t_IndexSorter$NumericDocValuesProvider::initialize(module);
          t_IndexSorter$SortedDocValuesProvider::initialize(module);
          t_IndexSorter$StringSorter::initialize(module);
          t_IndexUpgrader::initialize(module);
          t_IndexWriter::initialize(module);
          t_IndexWriter$DocStats::initialize(module);
          t_IndexWriter$IndexReaderWarmer::initialize(module);
          t_IndexWriterConfig::initialize(module);
          t_IndexWriterConfig$OpenMode::initialize(module);
          t_IndexWriterEventListener::initialize(module);
          t_IndexableField::initialize(module);
          t_IndexableFieldType::initialize(module);
          t_KeepOnlyLastCommitDeletionPolicy::initialize(module);
          t_KnnVectorValues::initialize(module);
          t_KnnVectorValues$DocIndexIterator::initialize(module);
          t_LeafMetaData::initialize(module);
          t_LeafReader::initialize(module);
          t_LeafReaderContext::initialize(module);
          t_LiveIndexWriterConfig::initialize(module);
          t_LogByteSizeMergePolicy::initialize(module);
          t_LogDocMergePolicy::initialize(module);
          t_LogMergePolicy::initialize(module);
          t_MappedMultiFields::initialize(module);
          t_MergePolicy::initialize(module);
          t_MergePolicy$MergeAbortedException::initialize(module);
          t_MergePolicy$MergeContext::initialize(module);
          t_MergePolicy$MergeException::initialize(module);
          t_MergePolicy$MergeSpecification::initialize(module);
          t_MergePolicy$OneMerge::initialize(module);
          t_MergePolicy$OneMergeProgress::initialize(module);
          t_MergePolicy$OneMergeProgress$PauseReason::initialize(module);
          t_MergeRateLimiter::initialize(module);
          t_MergeScheduler::initialize(module);
          t_MergeScheduler$MergeSource::initialize(module);
          t_MergeState::initialize(module);
          t_MergeState$DocMap::initialize(module);
          t_MergeTrigger::initialize(module);
          t_MultiBits::initialize(module);
          t_MultiDocValues::initialize(module);
          t_MultiDocValues$MultiSortedDocValues::initialize(module);
          t_MultiDocValues$MultiSortedSetDocValues::initialize(module);
          t_MultiFields::initialize(module);
          t_MultiLeafReader::initialize(module);
          t_MultiPostingsEnum::initialize(module);
          t_MultiPostingsEnum$EnumWithSlice::initialize(module);
          t_MultiReader::initialize(module);
          t_MultiTerms::initialize(module);
          t_MultiTermsEnum::initialize(module);
          t_NoDeletionPolicy::initialize(module);
          t_NoMergePolicy::initialize(module);
          t_NoMergeScheduler::initialize(module);
          t_NumericDocValues::initialize(module);
          t_OneMergeWrappingMergePolicy::initialize(module);
          t_OrdTermState::initialize(module);
          t_OrdinalMap::initialize(module);
          t_ParallelCompositeReader::initialize(module);
          t_ParallelLeafReader::initialize(module);
          t_PersistentSnapshotDeletionPolicy::initialize(module);
          t_PointValues::initialize(module);
          t_PointValues$IntersectVisitor::initialize(module);
          t_PointValues$PointTree::initialize(module);
          t_PointValues$Relation::initialize(module);
          t_PostingsEnum::initialize(module);
          t_PrefixCodedTerms::initialize(module);
          t_PrefixCodedTerms$Builder::initialize(module);
          t_PrefixCodedTerms$TermIterator::initialize(module);
          t_QueryTimeout::initialize(module);
          t_QueryTimeoutImpl::initialize(module);
          t_ReaderManager::initialize(module);
          t_ReaderSlice::initialize(module);
          t_ReaderUtil::initialize(module);
          t_SegmentCommitInfo::initialize(module);
          t_SegmentInfo::initialize(module);
          t_SegmentInfos::initialize(module);
          t_SegmentInfos$FindSegmentsFile::initialize(module);
          t_SegmentReadState::initialize(module);
          t_SegmentReader::initialize(module);
          t_SegmentWriteState::initialize(module);
          t_SerialMergeScheduler::initialize(module);
          t_SimpleMergedSegmentWarmer::initialize(module);
          t_SingleTermsEnum::initialize(module);
          t_SlowCodecReaderWrapper::initialize(module);
          t_SlowImpactsEnum::initialize(module);
          t_SnapshotDeletionPolicy::initialize(module);
          t_SoftDeletesDirectoryReaderWrapper::initialize(module);
          t_SoftDeletesRetentionMergePolicy::initialize(module);
          t_SortFieldProvider::initialize(module);
          t_SortedDocValues::initialize(module);
          t_SortedNumericDocValues::initialize(module);
          t_SortedSetDocValues::initialize(module);
          t_Sorter::initialize(module);
          t_Sorter$DocMap::initialize(module);
          t_SortingCodecReader::initialize(module);
          t_SortingCodecReader$SortingValuesIterator::initialize(module);
          t_StandardDirectoryReader::initialize(module);
          t_StoredFieldVisitor::initialize(module);
          t_StoredFieldVisitor$Status::initialize(module);
          t_StoredFields::initialize(module);
          t_Term::initialize(module);
          t_TermState::initialize(module);
          t_TermStates::initialize(module);
          t_TermVectors::initialize(module);
          t_Terms::initialize(module);
          t_TermsEnum::initialize(module);
          t_TermsEnum$SeekStatus::initialize(module);
          t_TieredMergePolicy::initialize(module);
          t_TwoPhaseCommit::initialize(module);
          t_TwoPhaseCommitTool::initialize(module);
          t_TwoPhaseCommitTool$CommitFailException::initialize(module);
          t_TwoPhaseCommitTool$PrepareCommitFailException::initialize(module);
          t_UpgradeIndexMergePolicy::initialize(module);
          t_VectorEncoding::initialize(module);
          t_VectorSimilarityFunction::initialize(module);
          memory::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/index/memory/MemoryIndex.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        namespace memory {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.index", "memory");

            t_MemoryIndex::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.index", "memory");

            t_MemoryIndex::initialize(module);
          }
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {

        namespace hppc {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace tests {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace vectorization {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "internal");

          hppc::__install__(module);
          tests::__install__(module);
          vectorization::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "internal");

          hppc::__initialize__(module);
          tests::__initialize__(module);
          vectorization::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/internal/hppc/AbstractIterator.h"
#include "org/apache/lucene/internal/hppc/BitMixer.h"
#include "org/apache/lucene/internal/hppc/BufferAllocationException.h"
#include "org/apache/lucene/internal/hppc/CharCursor.h"
#include "org/apache/lucene/internal/hppc/CharHashSet.h"
#include "org/apache/lucene/internal/hppc/CharObjectHashMap.h"
#include "org/apache/lucene/internal/hppc/CharObjectHashMap$CharObjectCursor.h"
#include "org/apache/lucene/internal/hppc/CharObjectHashMap$KeysContainer.h"
#include "org/apache/lucene/internal/hppc/CharObjectHashMap$ValuesContainer.h"
#include "org/apache/lucene/internal/hppc/DoubleCursor.h"
#include "org/apache/lucene/internal/hppc/FloatArrayList.h"
#include "org/apache/lucene/internal/hppc/FloatCursor.h"
#include "org/apache/lucene/internal/hppc/IntArrayList.h"
#include "org/apache/lucene/internal/hppc/IntCursor.h"
#include "org/apache/lucene/internal/hppc/IntDoubleHashMap.h"
#include "org/apache/lucene/internal/hppc/IntDoubleHashMap$IntDoubleCursor.h"
#include "org/apache/lucene/internal/hppc/IntDoubleHashMap$KeysContainer.h"
#include "org/apache/lucene/internal/hppc/IntDoubleHashMap$ValuesContainer.h"
#include "org/apache/lucene/internal/hppc/IntFloatHashMap.h"
#include "org/apache/lucene/internal/hppc/IntFloatHashMap$IntFloatCursor.h"
#include "org/apache/lucene/internal/hppc/IntFloatHashMap$KeysContainer.h"
#include "org/apache/lucene/internal/hppc/IntFloatHashMap$ValuesContainer.h"
#include "org/apache/lucene/internal/hppc/IntHashSet.h"
#include "org/apache/lucene/internal/hppc/IntIntHashMap.h"
#include "org/apache/lucene/internal/hppc/IntIntHashMap$IntContainer.h"
#include "org/apache/lucene/internal/hppc/IntIntHashMap$IntIntCursor.h"
#include "org/apache/lucene/internal/hppc/IntIntHashMap$KeysContainer.h"
#include "org/apache/lucene/internal/hppc/IntLongHashMap.h"
#include "org/apache/lucene/internal/hppc/IntLongHashMap$IntLongCursor.h"
#include "org/apache/lucene/internal/hppc/IntLongHashMap$KeysContainer.h"
#include "org/apache/lucene/internal/hppc/IntLongHashMap$ValuesContainer.h"
#include "org/apache/lucene/internal/hppc/IntObjectHashMap.h"
#include "org/apache/lucene/internal/hppc/IntObjectHashMap$IntObjectCursor.h"
#include "org/apache/lucene/internal/hppc/IntObjectHashMap$KeysContainer.h"
#include "org/apache/lucene/internal/hppc/IntObjectHashMap$ValuesContainer.h"
#include "org/apache/lucene/internal/hppc/LongArrayList.h"
#include "org/apache/lucene/internal/hppc/LongCursor.h"
#include "org/apache/lucene/internal/hppc/LongFloatHashMap.h"
#include "org/apache/lucene/internal/hppc/LongFloatHashMap$KeysContainer.h"
#include "org/apache/lucene/internal/hppc/LongFloatHashMap$LongFloatCursor.h"
#include "org/apache/lucene/internal/hppc/LongFloatHashMap$ValuesContainer.h"
#include "org/apache/lucene/internal/hppc/LongHashSet.h"
#include "org/apache/lucene/internal/hppc/LongIntHashMap.h"
#include "org/apache/lucene/internal/hppc/LongIntHashMap$KeysContainer.h"
#include "org/apache/lucene/internal/hppc/LongIntHashMap$LongIntCursor.h"
#include "org/apache/lucene/internal/hppc/LongIntHashMap$ValuesContainer.h"
#include "org/apache/lucene/internal/hppc/LongObjectHashMap.h"
#include "org/apache/lucene/internal/hppc/LongObjectHashMap$KeysContainer.h"
#include "org/apache/lucene/internal/hppc/LongObjectHashMap$LongObjectCursor.h"
#include "org/apache/lucene/internal/hppc/LongObjectHashMap$ValuesContainer.h"
#include "org/apache/lucene/internal/hppc/ObjectCursor.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace hppc {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.internal", "hppc");

            t_AbstractIterator::install(module);
            t_BitMixer::install(module);
            t_BufferAllocationException::install(module);
            t_CharCursor::install(module);
            t_CharHashSet::install(module);
            t_CharObjectHashMap::install(module);
            t_CharObjectHashMap$CharObjectCursor::install(module);
            t_CharObjectHashMap$KeysContainer::install(module);
            t_CharObjectHashMap$ValuesContainer::install(module);
            t_DoubleCursor::install(module);
            t_FloatArrayList::install(module);
            t_FloatCursor::install(module);
            t_IntArrayList::install(module);
            t_IntCursor::install(module);
            t_IntDoubleHashMap::install(module);
            t_IntDoubleHashMap$IntDoubleCursor::install(module);
            t_IntDoubleHashMap$KeysContainer::install(module);
            t_IntDoubleHashMap$ValuesContainer::install(module);
            t_IntFloatHashMap::install(module);
            t_IntFloatHashMap$IntFloatCursor::install(module);
            t_IntFloatHashMap$KeysContainer::install(module);
            t_IntFloatHashMap$ValuesContainer::install(module);
            t_IntHashSet::install(module);
            t_IntIntHashMap::install(module);
            t_IntIntHashMap$IntContainer::install(module);
            t_IntIntHashMap$IntIntCursor::install(module);
            t_IntIntHashMap$KeysContainer::install(module);
            t_IntLongHashMap::install(module);
            t_IntLongHashMap$IntLongCursor::install(module);
            t_IntLongHashMap$KeysContainer::install(module);
            t_IntLongHashMap$ValuesContainer::install(module);
            t_IntObjectHashMap::install(module);
            t_IntObjectHashMap$IntObjectCursor::install(module);
            t_IntObjectHashMap$KeysContainer::install(module);
            t_IntObjectHashMap$ValuesContainer::install(module);
            t_LongArrayList::install(module);
            t_LongCursor::install(module);
            t_LongFloatHashMap::install(module);
            t_LongFloatHashMap$KeysContainer::install(module);
            t_LongFloatHashMap$LongFloatCursor::install(module);
            t_LongFloatHashMap$ValuesContainer::install(module);
            t_LongHashSet::install(module);
            t_LongIntHashMap::install(module);
            t_LongIntHashMap$KeysContainer::install(module);
            t_LongIntHashMap$LongIntCursor::install(module);
            t_LongIntHashMap$ValuesContainer::install(module);
            t_LongObjectHashMap::install(module);
            t_LongObjectHashMap$KeysContainer::install(module);
            t_LongObjectHashMap$LongObjectCursor::install(module);
            t_LongObjectHashMap$ValuesContainer::install(module);
            t_ObjectCursor::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.internal", "hppc");

            t_AbstractIterator::initialize(module);
            t_BitMixer::initialize(module);
            t_BufferAllocationException::initialize(module);
            t_CharCursor::initialize(module);
            t_CharHashSet::initialize(module);
            t_CharObjectHashMap::initialize(module);
            t_CharObjectHashMap$CharObjectCursor::initialize(module);
            t_CharObjectHashMap$KeysContainer::initialize(module);
            t_CharObjectHashMap$ValuesContainer::initialize(module);
            t_DoubleCursor::initialize(module);
            t_FloatArrayList::initialize(module);
            t_FloatCursor::initialize(module);
            t_IntArrayList::initialize(module);
            t_IntCursor::initialize(module);
            t_IntDoubleHashMap::initialize(module);
            t_IntDoubleHashMap$IntDoubleCursor::initialize(module);
            t_IntDoubleHashMap$KeysContainer::initialize(module);
            t_IntDoubleHashMap$ValuesContainer::initialize(module);
            t_IntFloatHashMap::initialize(module);
            t_IntFloatHashMap$IntFloatCursor::initialize(module);
            t_IntFloatHashMap$KeysContainer::initialize(module);
            t_IntFloatHashMap$ValuesContainer::initialize(module);
            t_IntHashSet::initialize(module);
            t_IntIntHashMap::initialize(module);
            t_IntIntHashMap$IntContainer::initialize(module);
            t_IntIntHashMap$IntIntCursor::initialize(module);
            t_IntIntHashMap$KeysContainer::initialize(module);
            t_IntLongHashMap::initialize(module);
            t_IntLongHashMap$IntLongCursor::initialize(module);
            t_IntLongHashMap$KeysContainer::initialize(module);
            t_IntLongHashMap$ValuesContainer::initialize(module);
            t_IntObjectHashMap::initialize(module);
            t_IntObjectHashMap$IntObjectCursor::initialize(module);
            t_IntObjectHashMap$KeysContainer::initialize(module);
            t_IntObjectHashMap$ValuesContainer::initialize(module);
            t_LongArrayList::initialize(module);
            t_LongCursor::initialize(module);
            t_LongFloatHashMap::initialize(module);
            t_LongFloatHashMap$KeysContainer::initialize(module);
            t_LongFloatHashMap$LongFloatCursor::initialize(module);
            t_LongFloatHashMap$ValuesContainer::initialize(module);
            t_LongHashSet::initialize(module);
            t_LongIntHashMap::initialize(module);
            t_LongIntHashMap$KeysContainer::initialize(module);
            t_LongIntHashMap$LongIntCursor::initialize(module);
            t_LongIntHashMap$ValuesContainer::initialize(module);
            t_LongObjectHashMap::initialize(module);
            t_LongObjectHashMap$KeysContainer::initialize(module);
            t_LongObjectHashMap$LongObjectCursor::initialize(module);
            t_LongObjectHashMap$ValuesContainer::initialize(module);
            t_ObjectCursor::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/internal/tests/ConcurrentMergeSchedulerAccess.h"
#include "org/apache/lucene/internal/tests/FilterIndexInputAccess.h"
#include "org/apache/lucene/internal/tests/IndexPackageAccess.h"
#include "org/apache/lucene/internal/tests/IndexPackageAccess$FieldInfosBuilder.h"
#include "org/apache/lucene/internal/tests/IndexWriterAccess.h"
#include "org/apache/lucene/internal/tests/SegmentReaderAccess.h"
#include "org/apache/lucene/internal/tests/TestSecrets.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace tests {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.internal", "tests");

            t_ConcurrentMergeSchedulerAccess::install(module);
            t_FilterIndexInputAccess::install(module);
            t_IndexPackageAccess::install(module);
            t_IndexPackageAccess$FieldInfosBuilder::install(module);
            t_IndexWriterAccess::install(module);
            t_SegmentReaderAccess::install(module);
            t_TestSecrets::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.internal", "tests");

            t_ConcurrentMergeSchedulerAccess::initialize(module);
            t_FilterIndexInputAccess::initialize(module);
            t_IndexPackageAccess::initialize(module);
            t_IndexPackageAccess$FieldInfosBuilder::initialize(module);
            t_IndexWriterAccess::initialize(module);
            t_SegmentReaderAccess::initialize(module);
            t_TestSecrets::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/internal/vectorization/Lucene99MemorySegmentByteVectorScorerSupplier.h"
#include "org/apache/lucene/internal/vectorization/Lucene99MemorySegmentFlatVectorsScorer.h"
#include "org/apache/lucene/internal/vectorization/PostingDecodingUtil.h"
#include "org/apache/lucene/internal/vectorization/VectorUtilSupport.h"
#include "org/apache/lucene/internal/vectorization/VectorizationProvider.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace vectorization {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.internal", "vectorization");

            t_Lucene99MemorySegmentByteVectorScorerSupplier::install(module);
            t_Lucene99MemorySegmentFlatVectorsScorer::install(module);
            t_PostingDecodingUtil::install(module);
            t_VectorUtilSupport::install(module);
            t_VectorizationProvider::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.internal", "vectorization");

            t_Lucene99MemorySegmentByteVectorScorerSupplier::initialize(module);
            t_Lucene99MemorySegmentFlatVectorsScorer::initialize(module);
            t_PostingDecodingUtil::initialize(module);
            t_VectorUtilSupport::initialize(module);
            t_VectorizationProvider::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/misc/CollectorMemoryTracker.h"
#include "org/apache/lucene/misc/GetTermInfo.h"
#include "org/apache/lucene/misc/HighFreqTerms.h"
#include "org/apache/lucene/misc/HighFreqTerms$DocFreqComparator.h"
#include "org/apache/lucene/misc/HighFreqTerms$TotalTermFreqComparator.h"
#include "org/apache/lucene/misc/IndexMergeTool.h"
#include "org/apache/lucene/misc/SweetSpotSimilarity.h"
#include "org/apache/lucene/misc/TermStats.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {

        namespace document {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace index {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace search {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace store {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace util {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "misc");

          t_CollectorMemoryTracker::install(module);
          t_GetTermInfo::install(module);
          t_HighFreqTerms::install(module);
          t_HighFreqTerms$DocFreqComparator::install(module);
          t_HighFreqTerms$TotalTermFreqComparator::install(module);
          t_IndexMergeTool::install(module);
          t_SweetSpotSimilarity::install(module);
          t_TermStats::install(module);
          document::__install__(module);
          index::__install__(module);
          search::__install__(module);
          store::__install__(module);
          util::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "misc");

          t_CollectorMemoryTracker::initialize(module);
          t_GetTermInfo::initialize(module);
          t_HighFreqTerms::initialize(module);
          t_HighFreqTerms$DocFreqComparator::initialize(module);
          t_HighFreqTerms$TotalTermFreqComparator::initialize(module);
          t_IndexMergeTool::initialize(module);
          t_SweetSpotSimilarity::initialize(module);
          t_TermStats::initialize(module);
          document::__initialize__(module);
          index::__initialize__(module);
          search::__initialize__(module);
          store::__initialize__(module);
          util::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/misc/document/LazyDocument.h"
#include "org/apache/lucene/misc/document/LazyDocument$LazyField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace document {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.misc", "document");

            t_LazyDocument::install(module);
            t_LazyDocument$LazyField::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.misc", "document");

            t_LazyDocument::initialize(module);
            t_LazyDocument$LazyField::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/misc/index/BPIndexReorderer.h"
#include "org/apache/lucene/misc/index/BPIndexReorderer$NotEnoughRAMException.h"
#include "org/apache/lucene/misc/index/BPReorderingMergePolicy.h"
#include "org/apache/lucene/misc/index/BinaryDocValueSelector.h"
#include "org/apache/lucene/misc/index/IndexRearranger.h"
#include "org/apache/lucene/misc/index/IndexRearranger$DocumentSelector.h"
#include "org/apache/lucene/misc/index/IndexSplitter.h"
#include "org/apache/lucene/misc/index/MultiPassIndexSplitter.h"
#include "org/apache/lucene/misc/index/PKIndexSplitter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace index {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.misc", "index");

            t_BPIndexReorderer::install(module);
            t_BPIndexReorderer$NotEnoughRAMException::install(module);
            t_BPReorderingMergePolicy::install(module);
            t_BinaryDocValueSelector::install(module);
            t_IndexRearranger::install(module);
            t_IndexRearranger$DocumentSelector::install(module);
            t_IndexSplitter::install(module);
            t_MultiPassIndexSplitter::install(module);
            t_PKIndexSplitter::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.misc", "index");

            t_BPIndexReorderer::initialize(module);
            t_BPIndexReorderer$NotEnoughRAMException::initialize(module);
            t_BPReorderingMergePolicy::initialize(module);
            t_BinaryDocValueSelector::initialize(module);
            t_IndexRearranger::initialize(module);
            t_IndexRearranger$DocumentSelector::initialize(module);
            t_IndexSplitter::initialize(module);
            t_MultiPassIndexSplitter::initialize(module);
            t_PKIndexSplitter::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/misc/search/DiversifiedTopDocsCollector.h"
#include "org/apache/lucene/misc/search/DiversifiedTopDocsCollector$ScoreDocKey.h"
#include "org/apache/lucene/misc/search/DocValuesStats.h"
#include "org/apache/lucene/misc/search/DocValuesStats$DoubleDocValuesStats.h"
#include "org/apache/lucene/misc/search/DocValuesStats$LongDocValuesStats.h"
#include "org/apache/lucene/misc/search/DocValuesStats$NumericDocValuesStats.h"
#include "org/apache/lucene/misc/search/DocValuesStats$SortedDocValuesStats.h"
#include "org/apache/lucene/misc/search/DocValuesStats$SortedDoubleDocValuesStats.h"
#include "org/apache/lucene/misc/search/DocValuesStats$SortedLongDocValuesStats.h"
#include "org/apache/lucene/misc/search/DocValuesStats$SortedNumericDocValuesStats.h"
#include "org/apache/lucene/misc/search/DocValuesStats$SortedSetDocValuesStats.h"
#include "org/apache/lucene/misc/search/DocValuesStatsCollector.h"
#include "org/apache/lucene/misc/search/HumanReadableQuery.h"
#include "org/apache/lucene/misc/search/MemoryAccountingBitsetCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace search {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.misc", "search");

            t_DiversifiedTopDocsCollector::install(module);
            t_DiversifiedTopDocsCollector$ScoreDocKey::install(module);
            t_DocValuesStats::install(module);
            t_DocValuesStats$DoubleDocValuesStats::install(module);
            t_DocValuesStats$LongDocValuesStats::install(module);
            t_DocValuesStats$NumericDocValuesStats::install(module);
            t_DocValuesStats$SortedDocValuesStats::install(module);
            t_DocValuesStats$SortedDoubleDocValuesStats::install(module);
            t_DocValuesStats$SortedLongDocValuesStats::install(module);
            t_DocValuesStats$SortedNumericDocValuesStats::install(module);
            t_DocValuesStats$SortedSetDocValuesStats::install(module);
            t_DocValuesStatsCollector::install(module);
            t_HumanReadableQuery::install(module);
            t_MemoryAccountingBitsetCollector::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.misc", "search");

            t_DiversifiedTopDocsCollector::initialize(module);
            t_DiversifiedTopDocsCollector$ScoreDocKey::initialize(module);
            t_DocValuesStats::initialize(module);
            t_DocValuesStats$DoubleDocValuesStats::initialize(module);
            t_DocValuesStats$LongDocValuesStats::initialize(module);
            t_DocValuesStats$NumericDocValuesStats::initialize(module);
            t_DocValuesStats$SortedDocValuesStats::initialize(module);
            t_DocValuesStats$SortedDoubleDocValuesStats::initialize(module);
            t_DocValuesStats$SortedLongDocValuesStats::initialize(module);
            t_DocValuesStats$SortedNumericDocValuesStats::initialize(module);
            t_DocValuesStats$SortedSetDocValuesStats::initialize(module);
            t_DocValuesStatsCollector::initialize(module);
            t_HumanReadableQuery::initialize(module);
            t_MemoryAccountingBitsetCollector::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/misc/store/ByteTrackingIndexOutput.h"
#include "org/apache/lucene/misc/store/ByteWritesTrackingDirectoryWrapper.h"
#include "org/apache/lucene/misc/store/DirectIODirectory.h"
#include "org/apache/lucene/misc/store/HardlinkCopyDirectoryWrapper.h"
#include "org/apache/lucene/misc/store/RAFDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace store {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.misc", "store");

            t_ByteTrackingIndexOutput::install(module);
            t_ByteWritesTrackingDirectoryWrapper::install(module);
            t_DirectIODirectory::install(module);
            t_HardlinkCopyDirectoryWrapper::install(module);
            t_RAFDirectory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.misc", "store");

            t_ByteTrackingIndexOutput::initialize(module);
            t_ByteWritesTrackingDirectoryWrapper::initialize(module);
            t_DirectIODirectory::initialize(module);
            t_HardlinkCopyDirectoryWrapper::initialize(module);
            t_RAFDirectory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/misc/util/MemoryTracker.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace util {

          namespace fst {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.misc", "util");

            t_MemoryTracker::install(module);
            fst::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.misc", "util");

            t_MemoryTracker::initialize(module);
            fst::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/misc/util/fst/ListOfOutputs.h"
#include "org/apache/lucene/misc/util/fst/UpToTwoPositiveIntOutputs.h"
#include "org/apache/lucene/misc/util/fst/UpToTwoPositiveIntOutputs$TwoLongs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace util {
          namespace fst {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.misc.util", "fst");

              t_ListOfOutputs::install(module);
              t_UpToTwoPositiveIntOutputs::install(module);
              t_UpToTwoPositiveIntOutputs$TwoLongs::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.misc.util", "fst");

              t_ListOfOutputs::initialize(module);
              t_UpToTwoPositiveIntOutputs::initialize(module);
              t_UpToTwoPositiveIntOutputs$TwoLongs::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/monitor/CandidateMatcher.h"
#include "org/apache/lucene/monitor/ConcurrentQueryLoader.h"
#include "org/apache/lucene/monitor/CustomQueryHandler.h"
#include "org/apache/lucene/monitor/ExplainingMatch.h"
#include "org/apache/lucene/monitor/HighlightsMatch.h"
#include "org/apache/lucene/monitor/HighlightsMatch$Hit.h"
#include "org/apache/lucene/monitor/MatcherFactory.h"
#include "org/apache/lucene/monitor/MatchingQueries.h"
#include "org/apache/lucene/monitor/Monitor.h"
#include "org/apache/lucene/monitor/Monitor$QueryCacheStats.h"
#include "org/apache/lucene/monitor/MonitorConfiguration.h"
#include "org/apache/lucene/monitor/MonitorQuery.h"
#include "org/apache/lucene/monitor/MonitorQuerySerializer.h"
#include "org/apache/lucene/monitor/MonitorUpdateListener.h"
#include "org/apache/lucene/monitor/MultiMatchingQueries.h"
#include "org/apache/lucene/monitor/MultipassTermFilteredPresearcher.h"
#include "org/apache/lucene/monitor/ParallelMatcher.h"
#include "org/apache/lucene/monitor/PartitionMatcher.h"
#include "org/apache/lucene/monitor/Presearcher.h"
#include "org/apache/lucene/monitor/PresearcherMatch.h"
#include "org/apache/lucene/monitor/PresearcherMatches.h"
#include "org/apache/lucene/monitor/QueryDecomposer.h"
#include "org/apache/lucene/monitor/QueryIndex$DataValues.h"
#include "org/apache/lucene/monitor/QueryIndex$QueryCollector.h"
#include "org/apache/lucene/monitor/QueryMatch.h"
#include "org/apache/lucene/monitor/QueryTimeListener.h"
#include "org/apache/lucene/monitor/QueryTree.h"
#include "org/apache/lucene/monitor/RegexpQueryHandler.h"
#include "org/apache/lucene/monitor/ScoringMatch.h"
#include "org/apache/lucene/monitor/SlowLog.h"
#include "org/apache/lucene/monitor/SlowLog$Entry.h"
#include "org/apache/lucene/monitor/TermFilteredPresearcher.h"
#include "org/apache/lucene/monitor/TermWeightor.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "monitor");

          t_CandidateMatcher::install(module);
          t_ConcurrentQueryLoader::install(module);
          t_CustomQueryHandler::install(module);
          t_ExplainingMatch::install(module);
          t_HighlightsMatch::install(module);
          t_HighlightsMatch$Hit::install(module);
          t_MatcherFactory::install(module);
          t_MatchingQueries::install(module);
          t_Monitor::install(module);
          t_Monitor$QueryCacheStats::install(module);
          t_MonitorConfiguration::install(module);
          t_MonitorQuery::install(module);
          t_MonitorQuerySerializer::install(module);
          t_MonitorUpdateListener::install(module);
          t_MultiMatchingQueries::install(module);
          t_MultipassTermFilteredPresearcher::install(module);
          t_ParallelMatcher::install(module);
          t_PartitionMatcher::install(module);
          t_Presearcher::install(module);
          t_PresearcherMatch::install(module);
          t_PresearcherMatches::install(module);
          t_QueryDecomposer::install(module);
          t_QueryIndex$DataValues::install(module);
          t_QueryIndex$QueryCollector::install(module);
          t_QueryMatch::install(module);
          t_QueryTimeListener::install(module);
          t_QueryTree::install(module);
          t_RegexpQueryHandler::install(module);
          t_ScoringMatch::install(module);
          t_SlowLog::install(module);
          t_SlowLog$Entry::install(module);
          t_TermFilteredPresearcher::install(module);
          t_TermWeightor::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "monitor");

          t_CandidateMatcher::initialize(module);
          t_ConcurrentQueryLoader::initialize(module);
          t_CustomQueryHandler::initialize(module);
          t_ExplainingMatch::initialize(module);
          t_HighlightsMatch::initialize(module);
          t_HighlightsMatch$Hit::initialize(module);
          t_MatcherFactory::initialize(module);
          t_MatchingQueries::initialize(module);
          t_Monitor::initialize(module);
          t_Monitor$QueryCacheStats::initialize(module);
          t_MonitorConfiguration::initialize(module);
          t_MonitorQuery::initialize(module);
          t_MonitorQuerySerializer::initialize(module);
          t_MonitorUpdateListener::initialize(module);
          t_MultiMatchingQueries::initialize(module);
          t_MultipassTermFilteredPresearcher::initialize(module);
          t_ParallelMatcher::initialize(module);
          t_PartitionMatcher::initialize(module);
          t_Presearcher::initialize(module);
          t_PresearcherMatch::initialize(module);
          t_PresearcherMatches::initialize(module);
          t_QueryDecomposer::initialize(module);
          t_QueryIndex$DataValues::initialize(module);
          t_QueryIndex$QueryCollector::initialize(module);
          t_QueryMatch::initialize(module);
          t_QueryTimeListener::initialize(module);
          t_QueryTree::initialize(module);
          t_RegexpQueryHandler::initialize(module);
          t_ScoringMatch::initialize(module);
          t_SlowLog::initialize(module);
          t_SlowLog$Entry::initialize(module);
          t_TermFilteredPresearcher::initialize(module);
          t_TermWeightor::initialize(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/payloads/PayloadSpanCollector.h"
#include "org/apache/lucene/payloads/PayloadSpanUtil.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace payloads {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "payloads");

          t_PayloadSpanCollector::install(module);
          t_PayloadSpanUtil::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "payloads");

          t_PayloadSpanCollector::initialize(module);
          t_PayloadSpanUtil::initialize(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/queries/CommonTermsQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {

        namespace function {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace intervals {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace mlt {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace payloads {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace spans {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "queries");

          t_CommonTermsQuery::install(module);
          function::__install__(module);
          intervals::__install__(module);
          mlt::__install__(module);
          payloads::__install__(module);
          spans::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "queries");

          t_CommonTermsQuery::initialize(module);
          function::__initialize__(module);
          intervals::__initialize__(module);
          mlt::__initialize__(module);
          payloads::__initialize__(module);
          spans::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/queries/function/FunctionMatchQuery.h"
#include "org/apache/lucene/queries/function/FunctionQuery.h"
#include "org/apache/lucene/queries/function/FunctionRangeQuery.h"
#include "org/apache/lucene/queries/function/FunctionScoreQuery.h"
#include "org/apache/lucene/queries/function/FunctionValues.h"
#include "org/apache/lucene/queries/function/FunctionValues$ValueFiller.h"
#include "org/apache/lucene/queries/function/IndexReaderFunctions.h"
#include "org/apache/lucene/queries/function/ValueSource.h"
#include "org/apache/lucene/queries/function/ValueSourceScorer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {

          namespace docvalues {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace valuesource {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queries", "function");

            t_FunctionMatchQuery::install(module);
            t_FunctionQuery::install(module);
            t_FunctionRangeQuery::install(module);
            t_FunctionScoreQuery::install(module);
            t_FunctionValues::install(module);
            t_FunctionValues$ValueFiller::install(module);
            t_IndexReaderFunctions::install(module);
            t_ValueSource::install(module);
            t_ValueSourceScorer::install(module);
            docvalues::__install__(module);
            valuesource::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queries", "function");

            t_FunctionMatchQuery::initialize(module);
            t_FunctionQuery::initialize(module);
            t_FunctionRangeQuery::initialize(module);
            t_FunctionScoreQuery::initialize(module);
            t_FunctionValues::initialize(module);
            t_FunctionValues$ValueFiller::initialize(module);
            t_IndexReaderFunctions::initialize(module);
            t_ValueSource::initialize(module);
            t_ValueSourceScorer::initialize(module);
            docvalues::__initialize__(module);
            valuesource::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queries/function/docvalues/BoolDocValues.h"
#include "org/apache/lucene/queries/function/docvalues/DocTermsIndexDocValues.h"
#include "org/apache/lucene/queries/function/docvalues/DocTermsIndexDocValues$DocTermsIndexException.h"
#include "org/apache/lucene/queries/function/docvalues/DoubleDocValues.h"
#include "org/apache/lucene/queries/function/docvalues/FloatDocValues.h"
#include "org/apache/lucene/queries/function/docvalues/IntDocValues.h"
#include "org/apache/lucene/queries/function/docvalues/LongDocValues.h"
#include "org/apache/lucene/queries/function/docvalues/StrDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace docvalues {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queries.function", "docvalues");

              t_BoolDocValues::install(module);
              t_DocTermsIndexDocValues::install(module);
              t_DocTermsIndexDocValues$DocTermsIndexException::install(module);
              t_DoubleDocValues::install(module);
              t_FloatDocValues::install(module);
              t_IntDocValues::install(module);
              t_LongDocValues::install(module);
              t_StrDocValues::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queries.function", "docvalues");

              t_BoolDocValues::initialize(module);
              t_DocTermsIndexDocValues::initialize(module);
              t_DocTermsIndexDocValues$DocTermsIndexException::initialize(module);
              t_DoubleDocValues::initialize(module);
              t_FloatDocValues::initialize(module);
              t_IntDocValues::initialize(module);
              t_LongDocValues::initialize(module);
              t_StrDocValues::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queries/function/valuesource/BoolFunction.h"
#include "org/apache/lucene/queries/function/valuesource/ByteKnnVectorFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/ByteVectorSimilarityFunction.h"
#include "org/apache/lucene/queries/function/valuesource/BytesRefFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/ComparisonBoolFunction.h"
#include "org/apache/lucene/queries/function/valuesource/ConstKnnByteVectorValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/ConstKnnFloatValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/ConstNumberSource.h"
#include "org/apache/lucene/queries/function/valuesource/ConstValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/DefFunction.h"
#include "org/apache/lucene/queries/function/valuesource/DivFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/DocFreqValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/DoubleConstValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/DoubleFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/DualFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/EnumFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/FieldCacheSource.h"
#include "org/apache/lucene/queries/function/valuesource/FloatFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/FloatKnnVectorFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/FloatVectorSimilarityFunction.h"
#include "org/apache/lucene/queries/function/valuesource/IDFValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/IfFunction.h"
#include "org/apache/lucene/queries/function/valuesource/IntFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/JoinDocFreqValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/LinearFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/LiteralValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/LongFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/MaxDocValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/MaxFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/MinFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/MultiBoolFunction.h"
#include "org/apache/lucene/queries/function/valuesource/MultiFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/MultiFunction.h"
#include "org/apache/lucene/queries/function/valuesource/MultiFunction$Values.h"
#include "org/apache/lucene/queries/function/valuesource/MultiValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/MultiValuedDoubleFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/MultiValuedFloatFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/MultiValuedIntFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/MultiValuedLongFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/NormValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/NumDocsValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/PowFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/ProductFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/QueryValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/RangeMapFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/ReciprocalFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/ScaleFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/SimpleBoolFunction.h"
#include "org/apache/lucene/queries/function/valuesource/SimpleFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/SingleFunction.h"
#include "org/apache/lucene/queries/function/valuesource/SortedSetFieldSource.h"
#include "org/apache/lucene/queries/function/valuesource/SumFloatFunction.h"
#include "org/apache/lucene/queries/function/valuesource/SumTotalTermFreqValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/TFValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/TermFreqValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/TotalTermFreqValueSource.h"
#include "org/apache/lucene/queries/function/valuesource/VectorFieldFunction.h"
#include "org/apache/lucene/queries/function/valuesource/VectorSimilarityFunction.h"
#include "org/apache/lucene/queries/function/valuesource/VectorValueSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queries.function", "valuesource");

              t_BoolFunction::install(module);
              t_ByteKnnVectorFieldSource::install(module);
              t_ByteVectorSimilarityFunction::install(module);
              t_BytesRefFieldSource::install(module);
              t_ComparisonBoolFunction::install(module);
              t_ConstKnnByteVectorValueSource::install(module);
              t_ConstKnnFloatValueSource::install(module);
              t_ConstNumberSource::install(module);
              t_ConstValueSource::install(module);
              t_DefFunction::install(module);
              t_DivFloatFunction::install(module);
              t_DocFreqValueSource::install(module);
              t_DoubleConstValueSource::install(module);
              t_DoubleFieldSource::install(module);
              t_DualFloatFunction::install(module);
              t_EnumFieldSource::install(module);
              t_FieldCacheSource::install(module);
              t_FloatFieldSource::install(module);
              t_FloatKnnVectorFieldSource::install(module);
              t_FloatVectorSimilarityFunction::install(module);
              t_IDFValueSource::install(module);
              t_IfFunction::install(module);
              t_IntFieldSource::install(module);
              t_JoinDocFreqValueSource::install(module);
              t_LinearFloatFunction::install(module);
              t_LiteralValueSource::install(module);
              t_LongFieldSource::install(module);
              t_MaxDocValueSource::install(module);
              t_MaxFloatFunction::install(module);
              t_MinFloatFunction::install(module);
              t_MultiBoolFunction::install(module);
              t_MultiFloatFunction::install(module);
              t_MultiFunction::install(module);
              t_MultiFunction$Values::install(module);
              t_MultiValueSource::install(module);
              t_MultiValuedDoubleFieldSource::install(module);
              t_MultiValuedFloatFieldSource::install(module);
              t_MultiValuedIntFieldSource::install(module);
              t_MultiValuedLongFieldSource::install(module);
              t_NormValueSource::install(module);
              t_NumDocsValueSource::install(module);
              t_PowFloatFunction::install(module);
              t_ProductFloatFunction::install(module);
              t_QueryValueSource::install(module);
              t_RangeMapFloatFunction::install(module);
              t_ReciprocalFloatFunction::install(module);
              t_ScaleFloatFunction::install(module);
              t_SimpleBoolFunction::install(module);
              t_SimpleFloatFunction::install(module);
              t_SingleFunction::install(module);
              t_SortedSetFieldSource::install(module);
              t_SumFloatFunction::install(module);
              t_SumTotalTermFreqValueSource::install(module);
              t_TFValueSource::install(module);
              t_TermFreqValueSource::install(module);
              t_TotalTermFreqValueSource::install(module);
              t_VectorFieldFunction::install(module);
              t_VectorSimilarityFunction::install(module);
              t_VectorValueSource::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queries.function", "valuesource");

              t_BoolFunction::initialize(module);
              t_ByteKnnVectorFieldSource::initialize(module);
              t_ByteVectorSimilarityFunction::initialize(module);
              t_BytesRefFieldSource::initialize(module);
              t_ComparisonBoolFunction::initialize(module);
              t_ConstKnnByteVectorValueSource::initialize(module);
              t_ConstKnnFloatValueSource::initialize(module);
              t_ConstNumberSource::initialize(module);
              t_ConstValueSource::initialize(module);
              t_DefFunction::initialize(module);
              t_DivFloatFunction::initialize(module);
              t_DocFreqValueSource::initialize(module);
              t_DoubleConstValueSource::initialize(module);
              t_DoubleFieldSource::initialize(module);
              t_DualFloatFunction::initialize(module);
              t_EnumFieldSource::initialize(module);
              t_FieldCacheSource::initialize(module);
              t_FloatFieldSource::initialize(module);
              t_FloatKnnVectorFieldSource::initialize(module);
              t_FloatVectorSimilarityFunction::initialize(module);
              t_IDFValueSource::initialize(module);
              t_IfFunction::initialize(module);
              t_IntFieldSource::initialize(module);
              t_JoinDocFreqValueSource::initialize(module);
              t_LinearFloatFunction::initialize(module);
              t_LiteralValueSource::initialize(module);
              t_LongFieldSource::initialize(module);
              t_MaxDocValueSource::initialize(module);
              t_MaxFloatFunction::initialize(module);
              t_MinFloatFunction::initialize(module);
              t_MultiBoolFunction::initialize(module);
              t_MultiFloatFunction::initialize(module);
              t_MultiFunction::initialize(module);
              t_MultiFunction$Values::initialize(module);
              t_MultiValueSource::initialize(module);
              t_MultiValuedDoubleFieldSource::initialize(module);
              t_MultiValuedFloatFieldSource::initialize(module);
              t_MultiValuedIntFieldSource::initialize(module);
              t_MultiValuedLongFieldSource::initialize(module);
              t_NormValueSource::initialize(module);
              t_NumDocsValueSource::initialize(module);
              t_PowFloatFunction::initialize(module);
              t_ProductFloatFunction::initialize(module);
              t_QueryValueSource::initialize(module);
              t_RangeMapFloatFunction::initialize(module);
              t_ReciprocalFloatFunction::initialize(module);
              t_ScaleFloatFunction::initialize(module);
              t_SimpleBoolFunction::initialize(module);
              t_SimpleFloatFunction::initialize(module);
              t_SingleFunction::initialize(module);
              t_SortedSetFieldSource::initialize(module);
              t_SumFloatFunction::initialize(module);
              t_SumTotalTermFreqValueSource::initialize(module);
              t_TFValueSource::initialize(module);
              t_TermFreqValueSource::initialize(module);
              t_TotalTermFreqValueSource::initialize(module);
              t_VectorFieldFunction::initialize(module);
              t_VectorSimilarityFunction::initialize(module);
              t_VectorValueSource::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queries/intervals/FilteredIntervalsSource.h"
#include "org/apache/lucene/queries/intervals/IntervalFilter.h"
#include "org/apache/lucene/queries/intervals/IntervalIterator.h"
#include "org/apache/lucene/queries/intervals/IntervalMatchesIterator.h"
#include "org/apache/lucene/queries/intervals/IntervalQuery.h"
#include "org/apache/lucene/queries/intervals/Intervals.h"
#include "org/apache/lucene/queries/intervals/IntervalsSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queries", "intervals");

            t_FilteredIntervalsSource::install(module);
            t_IntervalFilter::install(module);
            t_IntervalIterator::install(module);
            t_IntervalMatchesIterator::install(module);
            t_IntervalQuery::install(module);
            t_Intervals::install(module);
            t_IntervalsSource::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queries", "intervals");

            t_FilteredIntervalsSource::initialize(module);
            t_IntervalFilter::initialize(module);
            t_IntervalIterator::initialize(module);
            t_IntervalMatchesIterator::initialize(module);
            t_IntervalQuery::initialize(module);
            t_Intervals::initialize(module);
            t_IntervalsSource::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queries/mlt/MoreLikeThis.h"
#include "org/apache/lucene/queries/mlt/MoreLikeThisQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace mlt {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queries", "mlt");

            t_MoreLikeThis::install(module);
            t_MoreLikeThisQuery::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queries", "mlt");

            t_MoreLikeThis::initialize(module);
            t_MoreLikeThisQuery::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queries/payloads/AveragePayloadFunction.h"
#include "org/apache/lucene/queries/payloads/MaxPayloadFunction.h"
#include "org/apache/lucene/queries/payloads/MinPayloadFunction.h"
#include "org/apache/lucene/queries/payloads/PayloadDecoder.h"
#include "org/apache/lucene/queries/payloads/PayloadFunction.h"
#include "org/apache/lucene/queries/payloads/PayloadMatcher.h"
#include "org/apache/lucene/queries/payloads/PayloadMatcherFactory.h"
#include "org/apache/lucene/queries/payloads/PayloadScoreQuery.h"
#include "org/apache/lucene/queries/payloads/SpanPayloadCheckQuery.h"
#include "org/apache/lucene/queries/payloads/SpanPayloadCheckQuery$MatchOperation.h"
#include "org/apache/lucene/queries/payloads/SpanPayloadCheckQuery$PayloadType.h"
#include "org/apache/lucene/queries/payloads/SpanPayloadCheckQuery$SpanPayloadCheckWeight.h"
#include "org/apache/lucene/queries/payloads/SumPayloadFunction.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace payloads {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queries", "payloads");

            t_AveragePayloadFunction::install(module);
            t_MaxPayloadFunction::install(module);
            t_MinPayloadFunction::install(module);
            t_PayloadDecoder::install(module);
            t_PayloadFunction::install(module);
            t_PayloadMatcher::install(module);
            t_PayloadMatcherFactory::install(module);
            t_PayloadScoreQuery::install(module);
            t_SpanPayloadCheckQuery::install(module);
            t_SpanPayloadCheckQuery$MatchOperation::install(module);
            t_SpanPayloadCheckQuery$PayloadType::install(module);
            t_SpanPayloadCheckQuery$SpanPayloadCheckWeight::install(module);
            t_SumPayloadFunction::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queries", "payloads");

            t_AveragePayloadFunction::initialize(module);
            t_MaxPayloadFunction::initialize(module);
            t_MinPayloadFunction::initialize(module);
            t_PayloadDecoder::initialize(module);
            t_PayloadFunction::initialize(module);
            t_PayloadMatcher::initialize(module);
            t_PayloadMatcherFactory::initialize(module);
            t_PayloadScoreQuery::initialize(module);
            t_SpanPayloadCheckQuery::initialize(module);
            t_SpanPayloadCheckQuery$MatchOperation::initialize(module);
            t_SpanPayloadCheckQuery$PayloadType::initialize(module);
            t_SpanPayloadCheckQuery$SpanPayloadCheckWeight::initialize(module);
            t_SumPayloadFunction::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queries/spans/ConjunctionSpans.h"
#include "org/apache/lucene/queries/spans/FieldMaskingSpanQuery.h"
#include "org/apache/lucene/queries/spans/FilterSpans.h"
#include "org/apache/lucene/queries/spans/FilterSpans$AcceptStatus.h"
#include "org/apache/lucene/queries/spans/NearSpansOrdered.h"
#include "org/apache/lucene/queries/spans/NearSpansUnordered.h"
#include "org/apache/lucene/queries/spans/SpanCollector.h"
#include "org/apache/lucene/queries/spans/SpanContainQuery.h"
#include "org/apache/lucene/queries/spans/SpanContainQuery$SpanContainWeight.h"
#include "org/apache/lucene/queries/spans/SpanContainingQuery.h"
#include "org/apache/lucene/queries/spans/SpanContainingQuery$SpanContainingWeight.h"
#include "org/apache/lucene/queries/spans/SpanDisiWrapper.h"
#include "org/apache/lucene/queries/spans/SpanFirstQuery.h"
#include "org/apache/lucene/queries/spans/SpanMultiTermQueryWrapper.h"
#include "org/apache/lucene/queries/spans/SpanMultiTermQueryWrapper$SpanRewriteMethod.h"
#include "org/apache/lucene/queries/spans/SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite.h"
#include "org/apache/lucene/queries/spans/SpanNearQuery.h"
#include "org/apache/lucene/queries/spans/SpanNearQuery$Builder.h"
#include "org/apache/lucene/queries/spans/SpanNearQuery$SpanNearWeight.h"
#include "org/apache/lucene/queries/spans/SpanNotQuery.h"
#include "org/apache/lucene/queries/spans/SpanNotQuery$SpanNotWeight.h"
#include "org/apache/lucene/queries/spans/SpanOrQuery.h"
#include "org/apache/lucene/queries/spans/SpanOrQuery$SpanOrWeight.h"
#include "org/apache/lucene/queries/spans/SpanPositionCheckQuery.h"
#include "org/apache/lucene/queries/spans/SpanPositionCheckQuery$SpanPositionCheckWeight.h"
#include "org/apache/lucene/queries/spans/SpanPositionRangeQuery.h"
#include "org/apache/lucene/queries/spans/SpanQuery.h"
#include "org/apache/lucene/queries/spans/SpanScorer.h"
#include "org/apache/lucene/queries/spans/SpanTermQuery.h"
#include "org/apache/lucene/queries/spans/SpanTermQuery$SpanTermWeight.h"
#include "org/apache/lucene/queries/spans/SpanWeight.h"
#include "org/apache/lucene/queries/spans/SpanWeight$Postings.h"
#include "org/apache/lucene/queries/spans/SpanWithinQuery.h"
#include "org/apache/lucene/queries/spans/SpanWithinQuery$SpanWithinWeight.h"
#include "org/apache/lucene/queries/spans/Spans.h"
#include "org/apache/lucene/queries/spans/TermSpans.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queries", "spans");

            t_ConjunctionSpans::install(module);
            t_FieldMaskingSpanQuery::install(module);
            t_FilterSpans::install(module);
            t_FilterSpans$AcceptStatus::install(module);
            t_NearSpansOrdered::install(module);
            t_NearSpansUnordered::install(module);
            t_SpanCollector::install(module);
            t_SpanContainQuery::install(module);
            t_SpanContainQuery$SpanContainWeight::install(module);
            t_SpanContainingQuery::install(module);
            t_SpanContainingQuery$SpanContainingWeight::install(module);
            t_SpanDisiWrapper::install(module);
            t_SpanFirstQuery::install(module);
            t_SpanMultiTermQueryWrapper::install(module);
            t_SpanMultiTermQueryWrapper$SpanRewriteMethod::install(module);
            t_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite::install(module);
            t_SpanNearQuery::install(module);
            t_SpanNearQuery$Builder::install(module);
            t_SpanNearQuery$SpanNearWeight::install(module);
            t_SpanNotQuery::install(module);
            t_SpanNotQuery$SpanNotWeight::install(module);
            t_SpanOrQuery::install(module);
            t_SpanOrQuery$SpanOrWeight::install(module);
            t_SpanPositionCheckQuery::install(module);
            t_SpanPositionCheckQuery$SpanPositionCheckWeight::install(module);
            t_SpanPositionRangeQuery::install(module);
            t_SpanQuery::install(module);
            t_SpanScorer::install(module);
            t_SpanTermQuery::install(module);
            t_SpanTermQuery$SpanTermWeight::install(module);
            t_SpanWeight::install(module);
            t_SpanWeight$Postings::install(module);
            t_SpanWithinQuery::install(module);
            t_SpanWithinQuery$SpanWithinWeight::install(module);
            t_Spans::install(module);
            t_TermSpans::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queries", "spans");

            t_ConjunctionSpans::initialize(module);
            t_FieldMaskingSpanQuery::initialize(module);
            t_FilterSpans::initialize(module);
            t_FilterSpans$AcceptStatus::initialize(module);
            t_NearSpansOrdered::initialize(module);
            t_NearSpansUnordered::initialize(module);
            t_SpanCollector::initialize(module);
            t_SpanContainQuery::initialize(module);
            t_SpanContainQuery$SpanContainWeight::initialize(module);
            t_SpanContainingQuery::initialize(module);
            t_SpanContainingQuery$SpanContainingWeight::initialize(module);
            t_SpanDisiWrapper::initialize(module);
            t_SpanFirstQuery::initialize(module);
            t_SpanMultiTermQueryWrapper::initialize(module);
            t_SpanMultiTermQueryWrapper$SpanRewriteMethod::initialize(module);
            t_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite::initialize(module);
            t_SpanNearQuery::initialize(module);
            t_SpanNearQuery$Builder::initialize(module);
            t_SpanNearQuery$SpanNearWeight::initialize(module);
            t_SpanNotQuery::initialize(module);
            t_SpanNotQuery$SpanNotWeight::initialize(module);
            t_SpanOrQuery::initialize(module);
            t_SpanOrQuery$SpanOrWeight::initialize(module);
            t_SpanPositionCheckQuery::initialize(module);
            t_SpanPositionCheckQuery$SpanPositionCheckWeight::initialize(module);
            t_SpanPositionRangeQuery::initialize(module);
            t_SpanQuery::initialize(module);
            t_SpanScorer::initialize(module);
            t_SpanTermQuery::initialize(module);
            t_SpanTermQuery$SpanTermWeight::initialize(module);
            t_SpanWeight::initialize(module);
            t_SpanWeight$Postings::initialize(module);
            t_SpanWithinQuery::initialize(module);
            t_SpanWithinQuery$SpanWithinWeight::initialize(module);
            t_Spans::initialize(module);
            t_TermSpans::initialize(module);
          }
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {

        namespace charstream {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace classic {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace complexPhrase {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ext {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace flexible {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace simple {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace surround {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace xml {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "queryparser");

          charstream::__install__(module);
          classic::__install__(module);
          complexPhrase::__install__(module);
          ext::__install__(module);
          flexible::__install__(module);
          simple::__install__(module);
          surround::__install__(module);
          xml::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "queryparser");

          charstream::__initialize__(module);
          classic::__initialize__(module);
          complexPhrase::__initialize__(module);
          ext::__initialize__(module);
          flexible::__initialize__(module);
          simple::__initialize__(module);
          surround::__initialize__(module);
          xml::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/charstream/CharStream.h"
#include "org/apache/lucene/queryparser/charstream/FastCharStream.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace charstream {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "charstream");

            t_CharStream::install(module);
            t_FastCharStream::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "charstream");

            t_CharStream::initialize(module);
            t_FastCharStream::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/classic/MultiFieldQueryParser.h"
#include "org/apache/lucene/queryparser/classic/ParseException.h"
#include "org/apache/lucene/queryparser/classic/QueryParser.h"
#include "org/apache/lucene/queryparser/classic/QueryParser$Operator.h"
#include "org/apache/lucene/queryparser/classic/QueryParserBase.h"
#include "org/apache/lucene/queryparser/classic/QueryParserConstants.h"
#include "org/apache/lucene/queryparser/classic/QueryParserTokenManager.h"
#include "org/apache/lucene/queryparser/classic/Token.h"
#include "org/apache/lucene/queryparser/classic/TokenMgrError.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "classic");

            t_MultiFieldQueryParser::install(module);
            t_ParseException::install(module);
            t_QueryParser::install(module);
            t_QueryParser$Operator::install(module);
            t_QueryParserBase::install(module);
            t_QueryParserConstants::install(module);
            t_QueryParserTokenManager::install(module);
            t_Token::install(module);
            t_TokenMgrError::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "classic");

            t_MultiFieldQueryParser::initialize(module);
            t_ParseException::initialize(module);
            t_QueryParser::initialize(module);
            t_QueryParser$Operator::initialize(module);
            t_QueryParserBase::initialize(module);
            t_QueryParserConstants::initialize(module);
            t_QueryParserTokenManager::initialize(module);
            t_Token::initialize(module);
            t_TokenMgrError::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/complexPhrase/ComplexPhraseQueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace complexPhrase {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "complexPhrase");

            t_ComplexPhraseQueryParser::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "complexPhrase");

            t_ComplexPhraseQueryParser::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/ext/ExtendableQueryParser.h"
#include "org/apache/lucene/queryparser/ext/ExtensionQuery.h"
#include "org/apache/lucene/queryparser/ext/Extensions.h"
#include "org/apache/lucene/queryparser/ext/Extensions$Pair.h"
#include "org/apache/lucene/queryparser/ext/ParserExtension.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace ext {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "ext");

            t_ExtendableQueryParser::install(module);
            t_ExtensionQuery::install(module);
            t_Extensions::install(module);
            t_Extensions$Pair::install(module);
            t_ParserExtension::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "ext");

            t_ExtendableQueryParser::initialize(module);
            t_ExtensionQuery::initialize(module);
            t_Extensions::initialize(module);
            t_Extensions$Pair::initialize(module);
            t_ParserExtension::initialize(module);
          }
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {

          namespace core {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace messages {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace precedence {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace standard {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "flexible");

            core::__install__(module);
            messages::__install__(module);
            precedence::__install__(module);
            standard::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "flexible");

            core::__initialize__(module);
            messages::__initialize__(module);
            precedence::__initialize__(module);
            standard::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/QueryNodeError.h"
#include "org/apache/lucene/queryparser/flexible/core/QueryNodeException.h"
#include "org/apache/lucene/queryparser/flexible/core/QueryNodeParseException.h"
#include "org/apache/lucene/queryparser/flexible/core/QueryParserHelper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {

            namespace builders {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace config {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace messages {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace nodes {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace parser {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace processors {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace util {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }

            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "core");

              t_QueryNodeError::install(module);
              t_QueryNodeException::install(module);
              t_QueryNodeParseException::install(module);
              t_QueryParserHelper::install(module);
              builders::__install__(module);
              config::__install__(module);
              messages::__install__(module);
              nodes::__install__(module);
              parser::__install__(module);
              processors::__install__(module);
              util::__install__(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "core");

              t_QueryNodeError::initialize(module);
              t_QueryNodeException::initialize(module);
              t_QueryNodeParseException::initialize(module);
              t_QueryParserHelper::initialize(module);
              builders::__initialize__(module);
              config::__initialize__(module);
              messages::__initialize__(module);
              nodes::__initialize__(module);
              parser::__initialize__(module);
              processors::__initialize__(module);
              util::__initialize__(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/builders/QueryBuilder.h"
#include "org/apache/lucene/queryparser/flexible/core/builders/QueryTreeBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace builders {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "builders");

                t_QueryBuilder::install(module);
                t_QueryTreeBuilder::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "builders");

                t_QueryBuilder::initialize(module);
                t_QueryTreeBuilder::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/config/AbstractQueryConfig.h"
#include "org/apache/lucene/queryparser/flexible/core/config/ConfigurationKey.h"
#include "org/apache/lucene/queryparser/flexible/core/config/FieldConfig.h"
#include "org/apache/lucene/queryparser/flexible/core/config/FieldConfigListener.h"
#include "org/apache/lucene/queryparser/flexible/core/config/QueryConfigHandler.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace config {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "config");

                t_AbstractQueryConfig::install(module);
                t_ConfigurationKey::install(module);
                t_FieldConfig::install(module);
                t_FieldConfigListener::install(module);
                t_QueryConfigHandler::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "config");

                t_AbstractQueryConfig::initialize(module);
                t_ConfigurationKey::initialize(module);
                t_FieldConfig::initialize(module);
                t_FieldConfigListener::initialize(module);
                t_QueryConfigHandler::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/messages/QueryParserMessages.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace messages {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "messages");

                t_QueryParserMessages::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "messages");

                t_QueryParserMessages::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/nodes/AndQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/AnyQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/BooleanQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/BoostQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/DeletedQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldValuePairQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/FieldableNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/FuzzyQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/GroupQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/MatchAllDocsQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/MatchNoDocsQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/ModifierQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/ModifierQueryNode$Modifier.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/NoTokenFoundQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/OpaqueQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/OrQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/PathQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/PathQueryNode$QueryText.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/PhraseSlopQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/ProximityQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/ProximityQueryNode$ProximityType.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/ProximityQueryNode$Type.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/QueryNodeImpl.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/QuotedFieldQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/RangeQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/SlopQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/TextableQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/TokenizedPhraseQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/core/nodes/ValueQueryNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "nodes");

                t_AndQueryNode::install(module);
                t_AnyQueryNode::install(module);
                t_BooleanQueryNode::install(module);
                t_BoostQueryNode::install(module);
                t_DeletedQueryNode::install(module);
                t_FieldQueryNode::install(module);
                t_FieldValuePairQueryNode::install(module);
                t_FieldableNode::install(module);
                t_FuzzyQueryNode::install(module);
                t_GroupQueryNode::install(module);
                t_MatchAllDocsQueryNode::install(module);
                t_MatchNoDocsQueryNode::install(module);
                t_ModifierQueryNode::install(module);
                t_ModifierQueryNode$Modifier::install(module);
                t_NoTokenFoundQueryNode::install(module);
                t_OpaqueQueryNode::install(module);
                t_OrQueryNode::install(module);
                t_PathQueryNode::install(module);
                t_PathQueryNode$QueryText::install(module);
                t_PhraseSlopQueryNode::install(module);
                t_ProximityQueryNode::install(module);
                t_ProximityQueryNode$ProximityType::install(module);
                t_ProximityQueryNode$Type::install(module);
                t_QueryNode::install(module);
                t_QueryNodeImpl::install(module);
                t_QuotedFieldQueryNode::install(module);
                t_RangeQueryNode::install(module);
                t_SlopQueryNode::install(module);
                t_TextableQueryNode::install(module);
                t_TokenizedPhraseQueryNode::install(module);
                t_ValueQueryNode::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "nodes");

                t_AndQueryNode::initialize(module);
                t_AnyQueryNode::initialize(module);
                t_BooleanQueryNode::initialize(module);
                t_BoostQueryNode::initialize(module);
                t_DeletedQueryNode::initialize(module);
                t_FieldQueryNode::initialize(module);
                t_FieldValuePairQueryNode::initialize(module);
                t_FieldableNode::initialize(module);
                t_FuzzyQueryNode::initialize(module);
                t_GroupQueryNode::initialize(module);
                t_MatchAllDocsQueryNode::initialize(module);
                t_MatchNoDocsQueryNode::initialize(module);
                t_ModifierQueryNode::initialize(module);
                t_ModifierQueryNode$Modifier::initialize(module);
                t_NoTokenFoundQueryNode::initialize(module);
                t_OpaqueQueryNode::initialize(module);
                t_OrQueryNode::initialize(module);
                t_PathQueryNode::initialize(module);
                t_PathQueryNode$QueryText::initialize(module);
                t_PhraseSlopQueryNode::initialize(module);
                t_ProximityQueryNode::initialize(module);
                t_ProximityQueryNode$ProximityType::initialize(module);
                t_ProximityQueryNode$Type::initialize(module);
                t_QueryNode::initialize(module);
                t_QueryNodeImpl::initialize(module);
                t_QuotedFieldQueryNode::initialize(module);
                t_RangeQueryNode::initialize(module);
                t_SlopQueryNode::initialize(module);
                t_TextableQueryNode::initialize(module);
                t_TokenizedPhraseQueryNode::initialize(module);
                t_ValueQueryNode::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/parser/EscapeQuerySyntax.h"
#include "org/apache/lucene/queryparser/flexible/core/parser/EscapeQuerySyntax$Type.h"
#include "org/apache/lucene/queryparser/flexible/core/parser/SyntaxParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace parser {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "parser");

                t_EscapeQuerySyntax::install(module);
                t_EscapeQuerySyntax$Type::install(module);
                t_SyntaxParser::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "parser");

                t_EscapeQuerySyntax::initialize(module);
                t_EscapeQuerySyntax$Type::initialize(module);
                t_SyntaxParser::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/processors/NoChildOptimizationQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/core/processors/QueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/core/processors/QueryNodeProcessorImpl.h"
#include "org/apache/lucene/queryparser/flexible/core/processors/QueryNodeProcessorPipeline.h"
#include "org/apache/lucene/queryparser/flexible/core/processors/RemoveDeletedQueryNodesProcessor.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace processors {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "processors");

                t_NoChildOptimizationQueryNodeProcessor::install(module);
                t_QueryNodeProcessor::install(module);
                t_QueryNodeProcessorImpl::install(module);
                t_QueryNodeProcessorPipeline::install(module);
                t_RemoveDeletedQueryNodesProcessor::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "processors");

                t_NoChildOptimizationQueryNodeProcessor::initialize(module);
                t_QueryNodeProcessor::initialize(module);
                t_QueryNodeProcessorImpl::initialize(module);
                t_QueryNodeProcessorPipeline::initialize(module);
                t_RemoveDeletedQueryNodesProcessor::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/core/util/QueryNodeOperation.h"
#include "org/apache/lucene/queryparser/flexible/core/util/StringUtils.h"
#include "org/apache/lucene/queryparser/flexible/core/util/UnescapedCharSequence.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace util {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "util");

                t_QueryNodeOperation::install(module);
                t_StringUtils::install(module);
                t_UnescapedCharSequence::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.core", "util");

                t_QueryNodeOperation::initialize(module);
                t_StringUtils::initialize(module);
                t_UnescapedCharSequence::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/messages/Message.h"
#include "org/apache/lucene/queryparser/flexible/messages/MessageImpl.h"
#include "org/apache/lucene/queryparser/flexible/messages/NLS.h"
#include "org/apache/lucene/queryparser/flexible/messages/NLSException.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace messages {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "messages");

              t_Message::install(module);
              t_MessageImpl::install(module);
              t_NLS::install(module);
              t_NLSException::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "messages");

              t_Message::initialize(module);
              t_MessageImpl::initialize(module);
              t_NLS::initialize(module);
              t_NLSException::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/precedence/PrecedenceQueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace precedence {

            namespace processors {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }

            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "precedence");

              t_PrecedenceQueryParser::install(module);
              processors::__install__(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "precedence");

              t_PrecedenceQueryParser::initialize(module);
              processors::__initialize__(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/precedence/processors/BooleanModifiersQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/precedence/processors/PrecedenceQueryNodeProcessorPipeline.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace precedence {
            namespace processors {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.precedence", "processors");

                t_BooleanModifiersQueryNodeProcessor::install(module);
                t_PrecedenceQueryNodeProcessorPipeline::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.precedence", "processors");

                t_BooleanModifiersQueryNodeProcessor::initialize(module);
                t_PrecedenceQueryNodeProcessorPipeline::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/standard/CommonQueryParserConfiguration.h"
#include "org/apache/lucene/queryparser/flexible/standard/QueryParserUtil.h"
#include "org/apache/lucene/queryparser/flexible/standard/StandardQueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {

            namespace builders {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace config {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace nodes {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace parser {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace processors {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }

            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "standard");

              t_CommonQueryParserConfiguration::install(module);
              t_QueryParserUtil::install(module);
              t_StandardQueryParser::install(module);
              builders::__install__(module);
              config::__install__(module);
              nodes::__install__(module);
              parser::__install__(module);
              processors::__install__(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.flexible", "standard");

              t_CommonQueryParserConfiguration::initialize(module);
              t_QueryParserUtil::initialize(module);
              t_StandardQueryParser::initialize(module);
              builders::__initialize__(module);
              config::__initialize__(module);
              nodes::__initialize__(module);
              parser::__initialize__(module);
              processors::__initialize__(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/standard/builders/AnyQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/BooleanQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/BoostQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/DummyQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/FieldQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/FuzzyQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/GroupQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/IntervalQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/MatchAllDocsQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/MatchNoDocsQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/MinShouldMatchNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/ModifierQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/MultiPhraseQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/PhraseQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/PointRangeQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/PrefixWildcardQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/RegexpQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/SlopQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/StandardQueryBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/StandardQueryTreeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/SynonymQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/TermRangeQueryNodeBuilder.h"
#include "org/apache/lucene/queryparser/flexible/standard/builders/WildcardQueryNodeBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace builders {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "builders");

                t_AnyQueryNodeBuilder::install(module);
                t_BooleanQueryNodeBuilder::install(module);
                t_BoostQueryNodeBuilder::install(module);
                t_DummyQueryNodeBuilder::install(module);
                t_FieldQueryNodeBuilder::install(module);
                t_FuzzyQueryNodeBuilder::install(module);
                t_GroupQueryNodeBuilder::install(module);
                t_IntervalQueryNodeBuilder::install(module);
                t_MatchAllDocsQueryNodeBuilder::install(module);
                t_MatchNoDocsQueryNodeBuilder::install(module);
                t_MinShouldMatchNodeBuilder::install(module);
                t_ModifierQueryNodeBuilder::install(module);
                t_MultiPhraseQueryNodeBuilder::install(module);
                t_PhraseQueryNodeBuilder::install(module);
                t_PointRangeQueryNodeBuilder::install(module);
                t_PrefixWildcardQueryNodeBuilder::install(module);
                t_RegexpQueryNodeBuilder::install(module);
                t_SlopQueryNodeBuilder::install(module);
                t_StandardQueryBuilder::install(module);
                t_StandardQueryTreeBuilder::install(module);
                t_SynonymQueryNodeBuilder::install(module);
                t_TermRangeQueryNodeBuilder::install(module);
                t_WildcardQueryNodeBuilder::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "builders");

                t_AnyQueryNodeBuilder::initialize(module);
                t_BooleanQueryNodeBuilder::initialize(module);
                t_BoostQueryNodeBuilder::initialize(module);
                t_DummyQueryNodeBuilder::initialize(module);
                t_FieldQueryNodeBuilder::initialize(module);
                t_FuzzyQueryNodeBuilder::initialize(module);
                t_GroupQueryNodeBuilder::initialize(module);
                t_IntervalQueryNodeBuilder::initialize(module);
                t_MatchAllDocsQueryNodeBuilder::initialize(module);
                t_MatchNoDocsQueryNodeBuilder::initialize(module);
                t_MinShouldMatchNodeBuilder::initialize(module);
                t_ModifierQueryNodeBuilder::initialize(module);
                t_MultiPhraseQueryNodeBuilder::initialize(module);
                t_PhraseQueryNodeBuilder::initialize(module);
                t_PointRangeQueryNodeBuilder::initialize(module);
                t_PrefixWildcardQueryNodeBuilder::initialize(module);
                t_RegexpQueryNodeBuilder::initialize(module);
                t_SlopQueryNodeBuilder::initialize(module);
                t_StandardQueryBuilder::initialize(module);
                t_StandardQueryTreeBuilder::initialize(module);
                t_SynonymQueryNodeBuilder::initialize(module);
                t_TermRangeQueryNodeBuilder::initialize(module);
                t_WildcardQueryNodeBuilder::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/standard/config/FieldBoostMapFCListener.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/FieldDateResolutionFCListener.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/FuzzyConfig.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/NumberDateFormat.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/PointsConfig.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/PointsConfigListener.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/StandardQueryConfigHandler.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/StandardQueryConfigHandler$ConfigurationKeys.h"
#include "org/apache/lucene/queryparser/flexible/standard/config/StandardQueryConfigHandler$Operator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace config {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "config");

                t_FieldBoostMapFCListener::install(module);
                t_FieldDateResolutionFCListener::install(module);
                t_FuzzyConfig::install(module);
                t_NumberDateFormat::install(module);
                t_PointsConfig::install(module);
                t_PointsConfigListener::install(module);
                t_StandardQueryConfigHandler::install(module);
                t_StandardQueryConfigHandler$ConfigurationKeys::install(module);
                t_StandardQueryConfigHandler$Operator::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "config");

                t_FieldBoostMapFCListener::initialize(module);
                t_FieldDateResolutionFCListener::initialize(module);
                t_FuzzyConfig::initialize(module);
                t_NumberDateFormat::initialize(module);
                t_PointsConfig::initialize(module);
                t_PointsConfigListener::initialize(module);
                t_StandardQueryConfigHandler::initialize(module);
                t_StandardQueryConfigHandler$ConfigurationKeys::initialize(module);
                t_StandardQueryConfigHandler$Operator::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/standard/nodes/AbstractRangeQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/BooleanModifierNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/IntervalQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/MinShouldMatchNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/MultiPhraseQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/PointQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/PointRangeQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/PrefixWildcardQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/RegexpQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/SynonymQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/TermRangeQueryNode.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/WildcardQueryNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace nodes {

              namespace intervalfn {
                void __install__(PyObject *module);
                void __initialize__(PyObject *module);
              }

              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "nodes");

                t_AbstractRangeQueryNode::install(module);
                t_BooleanModifierNode::install(module);
                t_IntervalQueryNode::install(module);
                t_MinShouldMatchNode::install(module);
                t_MultiPhraseQueryNode::install(module);
                t_PointQueryNode::install(module);
                t_PointRangeQueryNode::install(module);
                t_PrefixWildcardQueryNode::install(module);
                t_RegexpQueryNode::install(module);
                t_SynonymQueryNode::install(module);
                t_TermRangeQueryNode::install(module);
                t_WildcardQueryNode::install(module);
                intervalfn::__install__(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "nodes");

                t_AbstractRangeQueryNode::initialize(module);
                t_BooleanModifierNode::initialize(module);
                t_IntervalQueryNode::initialize(module);
                t_MinShouldMatchNode::initialize(module);
                t_MultiPhraseQueryNode::initialize(module);
                t_PointQueryNode::initialize(module);
                t_PointRangeQueryNode::initialize(module);
                t_PrefixWildcardQueryNode::initialize(module);
                t_RegexpQueryNode::initialize(module);
                t_SynonymQueryNode::initialize(module);
                t_TermRangeQueryNode::initialize(module);
                t_WildcardQueryNode::initialize(module);
                intervalfn::__initialize__(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/After.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/AnalyzedText.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/AtLeast.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/Before.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/ContainedBy.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/Containing.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/Extend.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/FuzzyTerm.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/IntervalFunction.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/MaxGaps.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/MaxWidth.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/NonOverlapping.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/NotContainedBy.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/NotContaining.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/NotWithin.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/Or.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/Ordered.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/Overlapping.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/Phrase.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/Unordered.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/UnorderedNoOverlaps.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/Wildcard.h"
#include "org/apache/lucene/queryparser/flexible/standard/nodes/intervalfn/Within.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace nodes {
              namespace intervalfn {


                void __install__(PyObject *module)
                {
                  module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard.nodes", "intervalfn");

                  t_After::install(module);
                  t_AnalyzedText::install(module);
                  t_AtLeast::install(module);
                  t_Before::install(module);
                  t_ContainedBy::install(module);
                  t_Containing::install(module);
                  t_Extend::install(module);
                  t_FuzzyTerm::install(module);
                  t_IntervalFunction::install(module);
                  t_MaxGaps::install(module);
                  t_MaxWidth::install(module);
                  t_NonOverlapping::install(module);
                  t_NotContainedBy::install(module);
                  t_NotContaining::install(module);
                  t_NotWithin::install(module);
                  t_Or::install(module);
                  t_Ordered::install(module);
                  t_Overlapping::install(module);
                  t_Phrase::install(module);
                  t_Unordered::install(module);
                  t_UnorderedNoOverlaps::install(module);
                  t_Wildcard::install(module);
                  t_Within::install(module);
                }

                void __initialize__(PyObject *module)
                {
                  module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard.nodes", "intervalfn");

                  t_After::initialize(module);
                  t_AnalyzedText::initialize(module);
                  t_AtLeast::initialize(module);
                  t_Before::initialize(module);
                  t_ContainedBy::initialize(module);
                  t_Containing::initialize(module);
                  t_Extend::initialize(module);
                  t_FuzzyTerm::initialize(module);
                  t_IntervalFunction::initialize(module);
                  t_MaxGaps::initialize(module);
                  t_MaxWidth::initialize(module);
                  t_NonOverlapping::initialize(module);
                  t_NotContainedBy::initialize(module);
                  t_NotContaining::initialize(module);
                  t_NotWithin::initialize(module);
                  t_Or::initialize(module);
                  t_Ordered::initialize(module);
                  t_Overlapping::initialize(module);
                  t_Phrase::initialize(module);
                  t_Unordered::initialize(module);
                  t_UnorderedNoOverlaps::initialize(module);
                  t_Wildcard::initialize(module);
                  t_Within::initialize(module);
                }
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/standard/parser/EscapeQuerySyntaxImpl.h"
#include "org/apache/lucene/queryparser/flexible/standard/parser/ParseException.h"
#include "org/apache/lucene/queryparser/flexible/standard/parser/StandardSyntaxParser.h"
#include "org/apache/lucene/queryparser/flexible/standard/parser/StandardSyntaxParserConstants.h"
#include "org/apache/lucene/queryparser/flexible/standard/parser/StandardSyntaxParserTokenManager.h"
#include "org/apache/lucene/queryparser/flexible/standard/parser/Token.h"
#include "org/apache/lucene/queryparser/flexible/standard/parser/TokenMgrError.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "parser");

                t_EscapeQuerySyntaxImpl::install(module);
                t_ParseException::install(module);
                t_StandardSyntaxParser::install(module);
                t_StandardSyntaxParserConstants::install(module);
                t_StandardSyntaxParserTokenManager::install(module);
                t_Token::install(module);
                t_TokenMgrError::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "parser");

                t_EscapeQuerySyntaxImpl::initialize(module);
                t_ParseException::initialize(module);
                t_StandardSyntaxParser::initialize(module);
                t_StandardSyntaxParserConstants::initialize(module);
                t_StandardSyntaxParserTokenManager::initialize(module);
                t_Token::initialize(module);
                t_TokenMgrError::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/flexible/standard/processors/AllowLeadingWildcardProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/AnalyzerQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/BooleanQuery2ModifierNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/BooleanSingleChildOptimizationQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/BoostQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/DefaultPhraseSlopQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/FuzzyQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/IntervalQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/MatchAllDocsQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/MultiFieldQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/MultiTermRewriteMethodProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/OpenRangeQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/PhraseSlopQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/PointQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/PointRangeQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/RegexpQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/RemoveEmptyNonLeafQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/StandardQueryNodeProcessorPipeline.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/TermRangeQueryNodeProcessor.h"
#include "org/apache/lucene/queryparser/flexible/standard/processors/WildcardQueryNodeProcessor.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace processors {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "processors");

                t_AllowLeadingWildcardProcessor::install(module);
                t_AnalyzerQueryNodeProcessor::install(module);
                t_BooleanQuery2ModifierNodeProcessor::install(module);
                t_BooleanSingleChildOptimizationQueryNodeProcessor::install(module);
                t_BoostQueryNodeProcessor::install(module);
                t_DefaultPhraseSlopQueryNodeProcessor::install(module);
                t_FuzzyQueryNodeProcessor::install(module);
                t_IntervalQueryNodeProcessor::install(module);
                t_MatchAllDocsQueryNodeProcessor::install(module);
                t_MultiFieldQueryNodeProcessor::install(module);
                t_MultiTermRewriteMethodProcessor::install(module);
                t_OpenRangeQueryNodeProcessor::install(module);
                t_PhraseSlopQueryNodeProcessor::install(module);
                t_PointQueryNodeProcessor::install(module);
                t_PointRangeQueryNodeProcessor::install(module);
                t_RegexpQueryNodeProcessor::install(module);
                t_RemoveEmptyNonLeafQueryNodeProcessor::install(module);
                t_StandardQueryNodeProcessorPipeline::install(module);
                t_TermRangeQueryNodeProcessor::install(module);
                t_WildcardQueryNodeProcessor::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.queryparser.flexible.standard", "processors");

                t_AllowLeadingWildcardProcessor::initialize(module);
                t_AnalyzerQueryNodeProcessor::initialize(module);
                t_BooleanQuery2ModifierNodeProcessor::initialize(module);
                t_BooleanSingleChildOptimizationQueryNodeProcessor::initialize(module);
                t_BoostQueryNodeProcessor::initialize(module);
                t_DefaultPhraseSlopQueryNodeProcessor::initialize(module);
                t_FuzzyQueryNodeProcessor::initialize(module);
                t_IntervalQueryNodeProcessor::initialize(module);
                t_MatchAllDocsQueryNodeProcessor::initialize(module);
                t_MultiFieldQueryNodeProcessor::initialize(module);
                t_MultiTermRewriteMethodProcessor::initialize(module);
                t_OpenRangeQueryNodeProcessor::initialize(module);
                t_PhraseSlopQueryNodeProcessor::initialize(module);
                t_PointQueryNodeProcessor::initialize(module);
                t_PointRangeQueryNodeProcessor::initialize(module);
                t_RegexpQueryNodeProcessor::initialize(module);
                t_RemoveEmptyNonLeafQueryNodeProcessor::initialize(module);
                t_StandardQueryNodeProcessorPipeline::initialize(module);
                t_TermRangeQueryNodeProcessor::initialize(module);
                t_WildcardQueryNodeProcessor::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/simple/SimpleQueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace simple {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "simple");

            t_SimpleQueryParser::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "simple");

            t_SimpleQueryParser::initialize(module);
          }
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {

          namespace parser {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace query {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "surround");

            parser::__install__(module);
            query::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "surround");

            parser::__initialize__(module);
            query::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/surround/parser/ParseException.h"
#include "org/apache/lucene/queryparser/surround/parser/QueryParser.h"
#include "org/apache/lucene/queryparser/surround/parser/QueryParserConstants.h"
#include "org/apache/lucene/queryparser/surround/parser/QueryParserTokenManager.h"
#include "org/apache/lucene/queryparser/surround/parser/Token.h"
#include "org/apache/lucene/queryparser/surround/parser/TokenMgrError.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace parser {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.surround", "parser");

              t_ParseException::install(module);
              t_QueryParser::install(module);
              t_QueryParserConstants::install(module);
              t_QueryParserTokenManager::install(module);
              t_Token::install(module);
              t_TokenMgrError::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.surround", "parser");

              t_ParseException::initialize(module);
              t_QueryParser::initialize(module);
              t_QueryParserConstants::initialize(module);
              t_QueryParserTokenManager::initialize(module);
              t_Token::initialize(module);
              t_TokenMgrError::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/surround/query/AndQuery.h"
#include "org/apache/lucene/queryparser/surround/query/BasicQueryFactory.h"
#include "org/apache/lucene/queryparser/surround/query/ComposedQuery.h"
#include "org/apache/lucene/queryparser/surround/query/DistanceQuery.h"
#include "org/apache/lucene/queryparser/surround/query/DistanceSubQuery.h"
#include "org/apache/lucene/queryparser/surround/query/FieldsQuery.h"
#include "org/apache/lucene/queryparser/surround/query/NotQuery.h"
#include "org/apache/lucene/queryparser/surround/query/OrQuery.h"
#include "org/apache/lucene/queryparser/surround/query/SimpleTerm.h"
#include "org/apache/lucene/queryparser/surround/query/SimpleTerm$MatchingTermVisitor.h"
#include "org/apache/lucene/queryparser/surround/query/SpanNearClauseFactory.h"
#include "org/apache/lucene/queryparser/surround/query/SrndPrefixQuery.h"
#include "org/apache/lucene/queryparser/surround/query/SrndQuery.h"
#include "org/apache/lucene/queryparser/surround/query/SrndTermQuery.h"
#include "org/apache/lucene/queryparser/surround/query/SrndTruncQuery.h"
#include "org/apache/lucene/queryparser/surround/query/TooManyBasicQueries.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.surround", "query");

              t_AndQuery::install(module);
              t_BasicQueryFactory::install(module);
              t_ComposedQuery::install(module);
              t_DistanceQuery::install(module);
              t_DistanceSubQuery::install(module);
              t_FieldsQuery::install(module);
              t_NotQuery::install(module);
              t_OrQuery::install(module);
              t_SimpleTerm::install(module);
              t_SimpleTerm$MatchingTermVisitor::install(module);
              t_SpanNearClauseFactory::install(module);
              t_SrndPrefixQuery::install(module);
              t_SrndQuery::install(module);
              t_SrndTermQuery::install(module);
              t_SrndTruncQuery::install(module);
              t_TooManyBasicQueries::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.surround", "query");

              t_AndQuery::initialize(module);
              t_BasicQueryFactory::initialize(module);
              t_ComposedQuery::initialize(module);
              t_DistanceQuery::initialize(module);
              t_DistanceSubQuery::initialize(module);
              t_FieldsQuery::initialize(module);
              t_NotQuery::initialize(module);
              t_OrQuery::initialize(module);
              t_SimpleTerm::initialize(module);
              t_SimpleTerm$MatchingTermVisitor::initialize(module);
              t_SpanNearClauseFactory::initialize(module);
              t_SrndPrefixQuery::initialize(module);
              t_SrndQuery::initialize(module);
              t_SrndTermQuery::initialize(module);
              t_SrndTruncQuery::initialize(module);
              t_TooManyBasicQueries::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/xml/CoreParser.h"
#include "org/apache/lucene/queryparser/xml/CorePlusExtensionsParser.h"
#include "org/apache/lucene/queryparser/xml/CorePlusQueriesParser.h"
#include "org/apache/lucene/queryparser/xml/DOMUtils.h"
#include "org/apache/lucene/queryparser/xml/ParserException.h"
#include "org/apache/lucene/queryparser/xml/QueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/QueryBuilderFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {

          namespace builders {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "xml");

            t_CoreParser::install(module);
            t_CorePlusExtensionsParser::install(module);
            t_CorePlusQueriesParser::install(module);
            t_DOMUtils::install(module);
            t_ParserException::install(module);
            t_QueryBuilder::install(module);
            t_QueryBuilderFactory::install(module);
            builders::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.queryparser", "xml");

            t_CoreParser::initialize(module);
            t_CorePlusExtensionsParser::initialize(module);
            t_CorePlusQueriesParser::initialize(module);
            t_DOMUtils::initialize(module);
            t_ParserException::initialize(module);
            t_QueryBuilder::initialize(module);
            t_QueryBuilderFactory::initialize(module);
            builders::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/queryparser/xml/builders/BooleanQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/BoostingTermBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/ConstantScoreQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/DisjunctionMaxQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/FuzzyLikeThisQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/LikeThisQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/MatchAllDocsQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/PointRangeQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/RangeQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanBuilderBase.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanFirstBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanNearBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanNotBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanOrBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanOrTermsBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanPositionRangeBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanQueryBuilderFactory.h"
#include "org/apache/lucene/queryparser/xml/builders/SpanTermBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/TermQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/TermsQueryBuilder.h"
#include "org/apache/lucene/queryparser/xml/builders/UserInputQueryBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {
          namespace builders {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.xml", "builders");

              t_BooleanQueryBuilder::install(module);
              t_BoostingTermBuilder::install(module);
              t_ConstantScoreQueryBuilder::install(module);
              t_DisjunctionMaxQueryBuilder::install(module);
              t_FuzzyLikeThisQueryBuilder::install(module);
              t_LikeThisQueryBuilder::install(module);
              t_MatchAllDocsQueryBuilder::install(module);
              t_PointRangeQueryBuilder::install(module);
              t_RangeQueryBuilder::install(module);
              t_SpanBuilderBase::install(module);
              t_SpanFirstBuilder::install(module);
              t_SpanNearBuilder::install(module);
              t_SpanNotBuilder::install(module);
              t_SpanOrBuilder::install(module);
              t_SpanOrTermsBuilder::install(module);
              t_SpanPositionRangeBuilder::install(module);
              t_SpanQueryBuilder::install(module);
              t_SpanQueryBuilderFactory::install(module);
              t_SpanTermBuilder::install(module);
              t_TermQueryBuilder::install(module);
              t_TermsQueryBuilder::install(module);
              t_UserInputQueryBuilder::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.queryparser.xml", "builders");

              t_BooleanQueryBuilder::initialize(module);
              t_BoostingTermBuilder::initialize(module);
              t_ConstantScoreQueryBuilder::initialize(module);
              t_DisjunctionMaxQueryBuilder::initialize(module);
              t_FuzzyLikeThisQueryBuilder::initialize(module);
              t_LikeThisQueryBuilder::initialize(module);
              t_MatchAllDocsQueryBuilder::initialize(module);
              t_PointRangeQueryBuilder::initialize(module);
              t_RangeQueryBuilder::initialize(module);
              t_SpanBuilderBase::initialize(module);
              t_SpanFirstBuilder::initialize(module);
              t_SpanNearBuilder::initialize(module);
              t_SpanNotBuilder::initialize(module);
              t_SpanOrBuilder::initialize(module);
              t_SpanOrTermsBuilder::initialize(module);
              t_SpanPositionRangeBuilder::initialize(module);
              t_SpanQueryBuilder::initialize(module);
              t_SpanQueryBuilderFactory::initialize(module);
              t_SpanTermBuilder::initialize(module);
              t_TermQueryBuilder::initialize(module);
              t_TermsQueryBuilder::initialize(module);
              t_UserInputQueryBuilder::initialize(module);
            }
          }
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {

        namespace codecs {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace document {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace facet {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace index {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace queries {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace search {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "sandbox");

          codecs::__install__(module);
          document::__install__(module);
          facet::__install__(module);
          index::__install__(module);
          queries::__install__(module);
          search::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "sandbox");

          codecs::__initialize__(module);
          document::__initialize__(module);
          facet::__initialize__(module);
          index::__initialize__(module);
          queries::__initialize__(module);
          search::__initialize__(module);
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace codecs {

          namespace idversion {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace quantization {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.sandbox", "codecs");

            idversion::__install__(module);
            quantization::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.sandbox", "codecs");

            idversion::__initialize__(module);
            quantization::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/sandbox/codecs/idversion/IDVersionPostingsFormat.h"
#include "org/apache/lucene/sandbox/codecs/idversion/IDVersionSegmentTermsEnum.h"
#include "org/apache/lucene/sandbox/codecs/idversion/VersionBlockTreeTermsReader.h"
#include "org/apache/lucene/sandbox/codecs/idversion/VersionBlockTreeTermsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace codecs {
          namespace idversion {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.sandbox.codecs", "idversion");

              t_IDVersionPostingsFormat::install(module);
              t_IDVersionSegmentTermsEnum::install(module);
              t_VersionBlockTreeTermsReader::install(module);
              t_VersionBlockTreeTermsWriter::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.sandbox.codecs", "idversion");

              t_IDVersionPostingsFormat::initialize(module);
              t_IDVersionSegmentTermsEnum::initialize(module);
              t_VersionBlockTreeTermsReader::initialize(module);
              t_VersionBlockTreeTermsWriter::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/sandbox/codecs/quantization/KMeans.h"
#include "org/apache/lucene/sandbox/codecs/quantization/KMeans$KmeansInitializationMethod.h"
#include "org/apache/lucene/sandbox/codecs/quantization/KMeans$Results.h"
#include "org/apache/lucene/sandbox/codecs/quantization/SampleReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace codecs {
          namespace quantization {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.sandbox.codecs", "quantization");

              t_KMeans::install(module);
              t_KMeans$KmeansInitializationMethod::install(module);
              t_KMeans$Results::install(module);
              t_SampleReader::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.sandbox.codecs", "quantization");

              t_KMeans::initialize(module);
              t_KMeans$KmeansInitializationMethod::initialize(module);
              t_KMeans$Results::initialize(module);
              t_SampleReader::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/sandbox/document/BigIntegerPoint.h"
#include "org/apache/lucene/sandbox/document/DoublePointMultiRangeBuilder.h"
#include "org/apache/lucene/sandbox/document/FloatPointMultiRangeBuilder.h"
#include "org/apache/lucene/sandbox/document/FloatPointNearestNeighbor.h"
#include "org/apache/lucene/sandbox/document/HalfFloatPoint.h"
#include "org/apache/lucene/sandbox/document/IntPointMultiRangeBuilder.h"
#include "org/apache/lucene/sandbox/document/LatLonBoundingBox.h"
#include "org/apache/lucene/sandbox/document/LongPointMultiRangeBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace document {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.sandbox", "document");

            t_BigIntegerPoint::install(module);
            t_DoublePointMultiRangeBuilder::install(module);
            t_FloatPointMultiRangeBuilder::install(module);
            t_FloatPointNearestNeighbor::install(module);
            t_HalfFloatPoint::install(module);
            t_IntPointMultiRangeBuilder::install(module);
            t_LatLonBoundingBox::install(module);
            t_LongPointMultiRangeBuilder::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.sandbox", "document");

            t_BigIntegerPoint::initialize(module);
            t_DoublePointMultiRangeBuilder::initialize(module);
            t_FloatPointMultiRangeBuilder::initialize(module);
            t_FloatPointNearestNeighbor::initialize(module);
            t_HalfFloatPoint::initialize(module);
            t_IntPointMultiRangeBuilder::initialize(module);
            t_LatLonBoundingBox::initialize(module);
            t_LongPointMultiRangeBuilder::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/sandbox/facet/ComparableUtils.h"
#include "org/apache/lucene/sandbox/facet/ComparableUtils$ByAggregatedValueComparable.h"
#include "org/apache/lucene/sandbox/facet/ComparableUtils$ByCountAndLongValueComparable.h"
#include "org/apache/lucene/sandbox/facet/ComparableUtils$ByCountComparable.h"
#include "org/apache/lucene/sandbox/facet/ComparableUtils$ByLongValueComparable.h"
#include "org/apache/lucene/sandbox/facet/ComparableUtils$ByOrdinalComparable.h"
#include "org/apache/lucene/sandbox/facet/FacetFieldCollector.h"
#include "org/apache/lucene/sandbox/facet/FacetFieldCollectorManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {

          namespace cutters {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace iterators {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace labels {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace recorders {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.sandbox", "facet");

            t_ComparableUtils::install(module);
            t_ComparableUtils$ByAggregatedValueComparable::install(module);
            t_ComparableUtils$ByCountAndLongValueComparable::install(module);
            t_ComparableUtils$ByCountComparable::install(module);
            t_ComparableUtils$ByLongValueComparable::install(module);
            t_ComparableUtils$ByOrdinalComparable::install(module);
            t_FacetFieldCollector::install(module);
            t_FacetFieldCollectorManager::install(module);
            cutters::__install__(module);
            iterators::__install__(module);
            labels::__install__(module);
            recorders::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.sandbox", "facet");

            t_ComparableUtils::initialize(module);
            t_ComparableUtils$ByAggregatedValueComparable::initialize(module);
            t_ComparableUtils$ByCountAndLongValueComparable::initialize(module);
            t_ComparableUtils$ByCountComparable::initialize(module);
            t_ComparableUtils$ByLongValueComparable::initialize(module);
            t_ComparableUtils$ByOrdinalComparable::initialize(module);
            t_FacetFieldCollector::initialize(module);
            t_FacetFieldCollectorManager::initialize(module);
            cutters::__initialize__(module);
            iterators::__initialize__(module);
            labels::__initialize__(module);
            recorders::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/sandbox/facet/cutters/FacetCutter.h"
#include "org/apache/lucene/sandbox/facet/cutters/LeafFacetCutter.h"
#include "org/apache/lucene/sandbox/facet/cutters/LongValueFacetCutter.h"
#include "org/apache/lucene/sandbox/facet/cutters/TaxonomyFacetsCutter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace cutters {

            namespace ranges {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }

            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.sandbox.facet", "cutters");

              t_FacetCutter::install(module);
              t_LeafFacetCutter::install(module);
              t_LongValueFacetCutter::install(module);
              t_TaxonomyFacetsCutter::install(module);
              ranges::__install__(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.sandbox.facet", "cutters");

              t_FacetCutter::initialize(module);
              t_LeafFacetCutter::initialize(module);
              t_LongValueFacetCutter::initialize(module);
              t_TaxonomyFacetsCutter::initialize(module);
              ranges::__initialize__(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/sandbox/facet/cutters/ranges/DoubleRangeFacetCutter.h"
#include "org/apache/lucene/sandbox/facet/cutters/ranges/IntervalTracker$MultiIntervalTracker.h"
#include "org/apache/lucene/sandbox/facet/cutters/ranges/LongRangeFacetCutter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace cutters {
            namespace ranges {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.sandbox.facet.cutters", "ranges");

                t_DoubleRangeFacetCutter::install(module);
                t_IntervalTracker$MultiIntervalTracker::install(module);
                t_LongRangeFacetCutter::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.apache.lucene.sandbox.facet.cutters", "ranges");

                t_DoubleRangeFacetCutter::initialize(module);
                t_IntervalTracker$MultiIntervalTracker::initialize(module);
                t_LongRangeFacetCutter::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/sandbox/facet/iterators/CandidateSetOrdinalIterator.h"
#include "org/apache/lucene/sandbox/facet/iterators/ComparableSupplier.h"
#include "org/apache/lucene/sandbox/facet/iterators/OrdinalIterator.h"
#include "org/apache/lucene/sandbox/facet/iterators/TaxonomyChildrenOrdinalIterator.h"
#include "org/apache/lucene/sandbox/facet/iterators/TopnOrdinalIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace iterators {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.sandbox.facet", "iterators");

              t_CandidateSetOrdinalIterator::install(module);
              t_ComparableSupplier::install(module);
              t_OrdinalIterator::install(module);
              t_TaxonomyChildrenOrdinalIterator::install(module);
              t_TopnOrdinalIterator::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.sandbox.facet", "iterators");

              t_CandidateSetOrdinalIterator::initialize(module);
              t_ComparableSupplier::initialize(module);
              t_OrdinalIterator::initialize(module);
              t_TaxonomyChildrenOrdinalIterator::initialize(module);
              t_TopnOrdinalIterator::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/sandbox/facet/labels/LabelToOrd.h"
#include "org/apache/lucene/sandbox/facet/labels/OrdToLabel.h"
#include "org/apache/lucene/sandbox/facet/labels/RangeOrdToLabel.h"
#include "org/apache/lucene/sandbox/facet/labels/TaxonomyOrdLabelBiMap.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace labels {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.sandbox.facet", "labels");

              t_LabelToOrd::install(module);
              t_OrdToLabel::install(module);
              t_RangeOrdToLabel::install(module);
              t_TaxonomyOrdLabelBiMap::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.sandbox.facet", "labels");

              t_LabelToOrd::initialize(module);
              t_OrdToLabel::initialize(module);
              t_RangeOrdToLabel::initialize(module);
              t_TaxonomyOrdLabelBiMap::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/sandbox/facet/recorders/CountFacetRecorder.h"
#include "org/apache/lucene/sandbox/facet/recorders/FacetRecorder.h"
#include "org/apache/lucene/sandbox/facet/recorders/LeafFacetRecorder.h"
#include "org/apache/lucene/sandbox/facet/recorders/LongAggregationsFacetRecorder.h"
#include "org/apache/lucene/sandbox/facet/recorders/MultiFacetsRecorder.h"
#include "org/apache/lucene/sandbox/facet/recorders/Reducer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace facet {
          namespace recorders {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.sandbox.facet", "recorders");

              t_CountFacetRecorder::install(module);
              t_FacetRecorder::install(module);
              t_LeafFacetRecorder::install(module);
              t_LongAggregationsFacetRecorder::install(module);
              t_MultiFacetsRecorder::install(module);
              t_Reducer::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.sandbox.facet", "recorders");

              t_CountFacetRecorder::initialize(module);
              t_FacetRecorder::initialize(module);
              t_LeafFacetRecorder::initialize(module);
              t_LongAggregationsFacetRecorder::initialize(module);
              t_MultiFacetsRecorder::initialize(module);
              t_Reducer::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/sandbox/index/MergeOnFlushMergePolicy.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace index {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.sandbox", "index");

            t_MergeOnFlushMergePolicy::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.sandbox", "index");

            t_MergeOnFlushMergePolicy::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/sandbox/queries/FuzzyLikeThisQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.sandbox", "queries");

            t_FuzzyLikeThisQuery::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.sandbox", "queries");

            t_FuzzyLikeThisQuery::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/sandbox/search/CombinedFieldQuery.h"
#include "org/apache/lucene/sandbox/search/CombinedFieldQuery$Builder.h"
#include "org/apache/lucene/sandbox/search/CoveringQuery.h"
#include "org/apache/lucene/sandbox/search/LargeNumHitsTopDocsCollector.h"
#include "org/apache/lucene/sandbox/search/MultiRangeQuery.h"
#include "org/apache/lucene/sandbox/search/MultiRangeQuery$Builder.h"
#include "org/apache/lucene/sandbox/search/MultiRangeQuery$RangeClause.h"
#include "org/apache/lucene/sandbox/search/PhraseWildcardQuery.h"
#include "org/apache/lucene/sandbox/search/PhraseWildcardQuery$Builder.h"
#include "org/apache/lucene/sandbox/search/PhraseWildcardQuery$TermBytesTermState.h"
#include "org/apache/lucene/sandbox/search/PhraseWildcardQuery$TermStats.h"
#include "org/apache/lucene/sandbox/search/ProfilerCollector.h"
#include "org/apache/lucene/sandbox/search/ProfilerCollectorManager.h"
#include "org/apache/lucene/sandbox/search/ProfilerCollectorResult.h"
#include "org/apache/lucene/sandbox/search/QueryProfilerIndexSearcher.h"
#include "org/apache/lucene/sandbox/search/QueryProfilerResult.h"
#include "org/apache/lucene/sandbox/search/QueryProfilerTimingType.h"
#include "org/apache/lucene/sandbox/search/TermAutomatonQuery.h"
#include "org/apache/lucene/sandbox/search/TokenStreamToTermAutomatonQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace search {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.sandbox", "search");

            t_CombinedFieldQuery::install(module);
            t_CombinedFieldQuery$Builder::install(module);
            t_CoveringQuery::install(module);
            t_LargeNumHitsTopDocsCollector::install(module);
            t_MultiRangeQuery::install(module);
            t_MultiRangeQuery$Builder::install(module);
            t_MultiRangeQuery$RangeClause::install(module);
            t_PhraseWildcardQuery::install(module);
            t_PhraseWildcardQuery$Builder::install(module);
            t_PhraseWildcardQuery$TermBytesTermState::install(module);
            t_PhraseWildcardQuery$TermStats::install(module);
            t_ProfilerCollector::install(module);
            t_ProfilerCollectorManager::install(module);
            t_ProfilerCollectorResult::install(module);
            t_QueryProfilerIndexSearcher::install(module);
            t_QueryProfilerResult::install(module);
            t_QueryProfilerTimingType::install(module);
            t_TermAutomatonQuery::install(module);
            t_TokenStreamToTermAutomatonQuery::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.sandbox", "search");

            t_CombinedFieldQuery::initialize(module);
            t_CombinedFieldQuery$Builder::initialize(module);
            t_CoveringQuery::initialize(module);
            t_LargeNumHitsTopDocsCollector::initialize(module);
            t_MultiRangeQuery::initialize(module);
            t_MultiRangeQuery$Builder::initialize(module);
            t_MultiRangeQuery$RangeClause::initialize(module);
            t_PhraseWildcardQuery::initialize(module);
            t_PhraseWildcardQuery$Builder::initialize(module);
            t_PhraseWildcardQuery$TermBytesTermState::initialize(module);
            t_PhraseWildcardQuery$TermStats::initialize(module);
            t_ProfilerCollector::initialize(module);
            t_ProfilerCollectorManager::initialize(module);
            t_ProfilerCollectorResult::initialize(module);
            t_QueryProfilerIndexSearcher::initialize(module);
            t_QueryProfilerResult::initialize(module);
            t_QueryProfilerTimingType::initialize(module);
            t_TermAutomatonQuery::initialize(module);
            t_TokenStreamToTermAutomatonQuery::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/AbstractKnnCollector.h"
#include "org/apache/lucene/search/AbstractKnnVectorQuery.h"
#include "org/apache/lucene/search/AbstractVectorSimilarityQuery.h"
#include "org/apache/lucene/search/AutomatonQuery.h"
#include "org/apache/lucene/search/BlendedTermQuery.h"
#include "org/apache/lucene/search/BlendedTermQuery$Builder.h"
#include "org/apache/lucene/search/BlendedTermQuery$DisjunctionMaxRewrite.h"
#include "org/apache/lucene/search/BlendedTermQuery$RewriteMethod.h"
#include "org/apache/lucene/search/BooleanClause.h"
#include "org/apache/lucene/search/BooleanClause$Occur.h"
#include "org/apache/lucene/search/BooleanQuery.h"
#include "org/apache/lucene/search/BooleanQuery$Builder.h"
#include "org/apache/lucene/search/BoostAttribute.h"
#include "org/apache/lucene/search/BoostAttributeImpl.h"
#include "org/apache/lucene/search/BoostQuery.h"
#include "org/apache/lucene/search/BulkScorer.h"
#include "org/apache/lucene/search/ByteVectorSimilarityQuery.h"
#include "org/apache/lucene/search/CachingCollector.h"
#include "org/apache/lucene/search/CheckedIntConsumer.h"
#include "org/apache/lucene/search/CollectionStatistics.h"
#include "org/apache/lucene/search/CollectionTerminatedException.h"
#include "org/apache/lucene/search/Collector.h"
#include "org/apache/lucene/search/CollectorManager.h"
#include "org/apache/lucene/search/ConjunctionUtils.h"
#include "org/apache/lucene/search/ConstantScoreQuery.h"
#include "org/apache/lucene/search/ConstantScoreScorer.h"
#include "org/apache/lucene/search/ConstantScoreWeight.h"
#include "org/apache/lucene/search/ControlledRealTimeReopenThread.h"
#include "org/apache/lucene/search/DisiPriorityQueue.h"
#include "org/apache/lucene/search/DisiWrapper.h"
#include "org/apache/lucene/search/DisjunctionDISIApproximation.h"
#include "org/apache/lucene/search/DisjunctionMaxQuery.h"
#include "org/apache/lucene/search/DocIdSet.h"
#include "org/apache/lucene/search/DocIdSetIterator.h"
#include "org/apache/lucene/search/DocIdStream.h"
#include "org/apache/lucene/search/DocValuesRangeIterator.h"
#include "org/apache/lucene/search/DocValuesRewriteMethod.h"
#include "org/apache/lucene/search/DoubleValues.h"
#include "org/apache/lucene/search/DoubleValuesSource.h"
#include "org/apache/lucene/search/ExactPhraseMatcher.h"
#include "org/apache/lucene/search/Explanation.h"
#include "org/apache/lucene/search/FieldComparator.h"
#include "org/apache/lucene/search/FieldComparator$RelevanceComparator.h"
#include "org/apache/lucene/search/FieldComparator$TermValComparator.h"
#include "org/apache/lucene/search/FieldComparatorSource.h"
#include "org/apache/lucene/search/FieldDoc.h"
#include "org/apache/lucene/search/FieldExistsQuery.h"
#include "org/apache/lucene/search/FieldValueHitQueue.h"
#include "org/apache/lucene/search/FieldValueHitQueue$Entry.h"
#include "org/apache/lucene/search/FilterCollector.h"
#include "org/apache/lucene/search/FilterLeafCollector.h"
#include "org/apache/lucene/search/FilterMatchesIterator.h"
#include "org/apache/lucene/search/FilterScorable.h"
#include "org/apache/lucene/search/FilterScorer.h"
#include "org/apache/lucene/search/FilterWeight.h"
#include "org/apache/lucene/search/FilteredDocIdSetIterator.h"
#include "org/apache/lucene/search/FloatVectorSimilarityQuery.h"
#include "org/apache/lucene/search/FuzzyQuery.h"
#include "org/apache/lucene/search/FuzzyTermsEnum.h"
#include "org/apache/lucene/search/FuzzyTermsEnum$FuzzyTermsException.h"
#include "org/apache/lucene/search/HitQueue.h"
#include "org/apache/lucene/search/ImpactsDISI.h"
#include "org/apache/lucene/search/IndexOrDocValuesQuery.h"
#include "org/apache/lucene/search/IndexSearcher.h"
#include "org/apache/lucene/search/IndexSearcher$LeafReaderContextPartition.h"
#include "org/apache/lucene/search/IndexSearcher$LeafSlice.h"
#include "org/apache/lucene/search/IndexSearcher$TooManyClauses.h"
#include "org/apache/lucene/search/IndexSearcher$TooManyNestedClauses.h"
#include "org/apache/lucene/search/IndexSortSortedNumericDocValuesRangeQuery.h"
#include "org/apache/lucene/search/IndriAndQuery.h"
#include "org/apache/lucene/search/IndriAndScorer.h"
#include "org/apache/lucene/search/IndriAndWeight.h"
#include "org/apache/lucene/search/IndriDisjunctionScorer.h"
#include "org/apache/lucene/search/IndriQuery.h"
#include "org/apache/lucene/search/IndriScorer.h"
#include "org/apache/lucene/search/KnnByteVectorQuery.h"
#include "org/apache/lucene/search/KnnCollector.h"
#include "org/apache/lucene/search/KnnFloatVectorQuery.h"
#include "org/apache/lucene/search/LRUQueryCache.h"
#include "org/apache/lucene/search/LeafCollector.h"
#include "org/apache/lucene/search/LeafFieldComparator.h"
#include "org/apache/lucene/search/LeafSimScorer.h"
#include "org/apache/lucene/search/LiveFieldValues.h"
#include "org/apache/lucene/search/LongValues.h"
#include "org/apache/lucene/search/LongValuesSource.h"
#include "org/apache/lucene/search/LongValuesSource$ConstantLongValuesSource.h"
#include "org/apache/lucene/search/MatchAllDocsQuery.h"
#include "org/apache/lucene/search/MatchNoDocsQuery.h"
#include "org/apache/lucene/search/Matches.h"
#include "org/apache/lucene/search/MatchesIterator.h"
#include "org/apache/lucene/search/MatchesUtils.h"
#include "org/apache/lucene/search/MaxNonCompetitiveBoostAttribute.h"
#include "org/apache/lucene/search/MaxNonCompetitiveBoostAttributeImpl.h"
#include "org/apache/lucene/search/MaxScoreCache.h"
#include "org/apache/lucene/search/MultiCollector.h"
#include "org/apache/lucene/search/MultiCollectorManager.h"
#include "org/apache/lucene/search/MultiPhraseQuery.h"
#include "org/apache/lucene/search/MultiPhraseQuery$Builder.h"
#include "org/apache/lucene/search/MultiPhraseQuery$UnionFullPostingsEnum.h"
#include "org/apache/lucene/search/MultiPhraseQuery$UnionPostingsEnum.h"
#include "org/apache/lucene/search/MultiTermQuery.h"
#include "org/apache/lucene/search/MultiTermQuery$RewriteMethod.h"
#include "org/apache/lucene/search/MultiTermQuery$TopTermsBlendedFreqScoringRewrite.h"
#include "org/apache/lucene/search/MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite.h"
#include "org/apache/lucene/search/MultiTermQuery$TopTermsScoringBooleanQueryRewrite.h"
#include "org/apache/lucene/search/Multiset.h"
#include "org/apache/lucene/search/NGramPhraseQuery.h"
#include "org/apache/lucene/search/NamedMatches.h"
#include "org/apache/lucene/search/PhraseMatcher.h"
#include "org/apache/lucene/search/PhraseQuery.h"
#include "org/apache/lucene/search/PhraseQuery$Builder.h"
#include "org/apache/lucene/search/PhraseQuery$PostingsAndFreq.h"
#include "org/apache/lucene/search/PhraseWeight.h"
#include "org/apache/lucene/search/PointInSetQuery.h"
#include "org/apache/lucene/search/PointInSetQuery$Stream.h"
#include "org/apache/lucene/search/PointRangeQuery.h"
#include "org/apache/lucene/search/PositiveScoresOnlyCollector.h"
#include "org/apache/lucene/search/PrefixQuery.h"
#include "org/apache/lucene/search/Pruning.h"
#include "org/apache/lucene/search/Query.h"
#include "org/apache/lucene/search/QueryCache.h"
#include "org/apache/lucene/search/QueryCachingPolicy.h"
#include "org/apache/lucene/search/QueryRescorer.h"
#include "org/apache/lucene/search/QueryVisitor.h"
#include "org/apache/lucene/search/ReferenceManager.h"
#include "org/apache/lucene/search/ReferenceManager$RefreshListener.h"
#include "org/apache/lucene/search/RegexpQuery.h"
#include "org/apache/lucene/search/Rescorer.h"
#include "org/apache/lucene/search/Scorable.h"
#include "org/apache/lucene/search/Scorable$ChildScorable.h"
#include "org/apache/lucene/search/ScoreCachingWrappingScorer.h"
#include "org/apache/lucene/search/ScoreDoc.h"
#include "org/apache/lucene/search/ScoreMode.h"
#include "org/apache/lucene/search/Scorer.h"
#include "org/apache/lucene/search/ScorerSupplier.h"
#include "org/apache/lucene/search/ScoringRewrite.h"
#include "org/apache/lucene/search/SearcherFactory.h"
#include "org/apache/lucene/search/SearcherLifetimeManager.h"
#include "org/apache/lucene/search/SearcherLifetimeManager$PruneByAge.h"
#include "org/apache/lucene/search/SearcherLifetimeManager$Pruner.h"
#include "org/apache/lucene/search/SearcherManager.h"
#include "org/apache/lucene/search/SegmentCacheable.h"
#include "org/apache/lucene/search/SimpleCollector.h"
#include "org/apache/lucene/search/SimpleFieldComparator.h"
#include "org/apache/lucene/search/SloppyPhraseMatcher.h"
#include "org/apache/lucene/search/Sort.h"
#include "org/apache/lucene/search/SortField.h"
#include "org/apache/lucene/search/SortField$Provider.h"
#include "org/apache/lucene/search/SortField$Type.h"
#include "org/apache/lucene/search/SortRescorer.h"
#include "org/apache/lucene/search/SortedNumericSelector.h"
#include "org/apache/lucene/search/SortedNumericSelector$Type.h"
#include "org/apache/lucene/search/SortedNumericSortField.h"
#include "org/apache/lucene/search/SortedNumericSortField$Provider.h"
#include "org/apache/lucene/search/SortedSetSelector.h"
#include "org/apache/lucene/search/SortedSetSelector$Type.h"
#include "org/apache/lucene/search/SortedSetSortField.h"
#include "org/apache/lucene/search/SortedSetSortField$Provider.h"
#include "org/apache/lucene/search/SynonymQuery.h"
#include "org/apache/lucene/search/SynonymQuery$Builder.h"
#include "org/apache/lucene/search/TaskExecutor.h"
#include "org/apache/lucene/search/TermCollectingRewrite.h"
#include "org/apache/lucene/search/TermInSetQuery.h"
#include "org/apache/lucene/search/TermQuery.h"
#include "org/apache/lucene/search/TermRangeQuery.h"
#include "org/apache/lucene/search/TermScorer.h"
#include "org/apache/lucene/search/TermStatistics.h"
#include "org/apache/lucene/search/TimeLimitingKnnCollectorManager.h"
#include "org/apache/lucene/search/TopDocs.h"
#include "org/apache/lucene/search/TopDocsCollector.h"
#include "org/apache/lucene/search/TopFieldCollector.h"
#include "org/apache/lucene/search/TopFieldCollectorManager.h"
#include "org/apache/lucene/search/TopFieldDocs.h"
#include "org/apache/lucene/search/TopKnnCollector.h"
#include "org/apache/lucene/search/TopScoreDocCollector.h"
#include "org/apache/lucene/search/TopScoreDocCollector$ScorerLeafCollector.h"
#include "org/apache/lucene/search/TopScoreDocCollectorManager.h"
#include "org/apache/lucene/search/TopTermsRewrite.h"
#include "org/apache/lucene/search/TotalHitCountCollector.h"
#include "org/apache/lucene/search/TotalHitCountCollectorManager.h"
#include "org/apache/lucene/search/TotalHits.h"
#include "org/apache/lucene/search/TotalHits$Relation.h"
#include "org/apache/lucene/search/TwoPhaseIterator.h"
#include "org/apache/lucene/search/UsageTrackingQueryCachingPolicy.h"
#include "org/apache/lucene/search/VectorScorer.h"
#include "org/apache/lucene/search/Weight.h"
#include "org/apache/lucene/search/WildcardQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        namespace comparators {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace grouping {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace highlight {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace join {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace knn {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace matchhighlight {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace similarities {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace spell {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace suggest {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace uhighlight {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace vectorhighlight {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "search");

          t_AbstractKnnCollector::install(module);
          t_AbstractKnnVectorQuery::install(module);
          t_AbstractVectorSimilarityQuery::install(module);
          t_AutomatonQuery::install(module);
          t_BlendedTermQuery::install(module);
          t_BlendedTermQuery$Builder::install(module);
          t_BlendedTermQuery$DisjunctionMaxRewrite::install(module);
          t_BlendedTermQuery$RewriteMethod::install(module);
          t_BooleanClause::install(module);
          t_BooleanClause$Occur::install(module);
          t_BooleanQuery::install(module);
          t_BooleanQuery$Builder::install(module);
          t_BoostAttribute::install(module);
          t_BoostAttributeImpl::install(module);
          t_BoostQuery::install(module);
          t_BulkScorer::install(module);
          t_ByteVectorSimilarityQuery::install(module);
          t_CachingCollector::install(module);
          t_CheckedIntConsumer::install(module);
          t_CollectionStatistics::install(module);
          t_CollectionTerminatedException::install(module);
          t_Collector::install(module);
          t_CollectorManager::install(module);
          t_ConjunctionUtils::install(module);
          t_ConstantScoreQuery::install(module);
          t_ConstantScoreScorer::install(module);
          t_ConstantScoreWeight::install(module);
          t_ControlledRealTimeReopenThread::install(module);
          t_DisiPriorityQueue::install(module);
          t_DisiWrapper::install(module);
          t_DisjunctionDISIApproximation::install(module);
          t_DisjunctionMaxQuery::install(module);
          t_DocIdSet::install(module);
          t_DocIdSetIterator::install(module);
          t_DocIdStream::install(module);
          t_DocValuesRangeIterator::install(module);
          t_DocValuesRewriteMethod::install(module);
          t_DoubleValues::install(module);
          t_DoubleValuesSource::install(module);
          t_ExactPhraseMatcher::install(module);
          t_Explanation::install(module);
          t_FieldComparator::install(module);
          t_FieldComparator$RelevanceComparator::install(module);
          t_FieldComparator$TermValComparator::install(module);
          t_FieldComparatorSource::install(module);
          t_FieldDoc::install(module);
          t_FieldExistsQuery::install(module);
          t_FieldValueHitQueue::install(module);
          t_FieldValueHitQueue$Entry::install(module);
          t_FilterCollector::install(module);
          t_FilterLeafCollector::install(module);
          t_FilterMatchesIterator::install(module);
          t_FilterScorable::install(module);
          t_FilterScorer::install(module);
          t_FilterWeight::install(module);
          t_FilteredDocIdSetIterator::install(module);
          t_FloatVectorSimilarityQuery::install(module);
          t_FuzzyQuery::install(module);
          t_FuzzyTermsEnum::install(module);
          t_FuzzyTermsEnum$FuzzyTermsException::install(module);
          t_HitQueue::install(module);
          t_ImpactsDISI::install(module);
          t_IndexOrDocValuesQuery::install(module);
          t_IndexSearcher::install(module);
          t_IndexSearcher$LeafReaderContextPartition::install(module);
          t_IndexSearcher$LeafSlice::install(module);
          t_IndexSearcher$TooManyClauses::install(module);
          t_IndexSearcher$TooManyNestedClauses::install(module);
          t_IndexSortSortedNumericDocValuesRangeQuery::install(module);
          t_IndriAndQuery::install(module);
          t_IndriAndScorer::install(module);
          t_IndriAndWeight::install(module);
          t_IndriDisjunctionScorer::install(module);
          t_IndriQuery::install(module);
          t_IndriScorer::install(module);
          t_KnnByteVectorQuery::install(module);
          t_KnnCollector::install(module);
          t_KnnFloatVectorQuery::install(module);
          t_LRUQueryCache::install(module);
          t_LeafCollector::install(module);
          t_LeafFieldComparator::install(module);
          t_LeafSimScorer::install(module);
          t_LiveFieldValues::install(module);
          t_LongValues::install(module);
          t_LongValuesSource::install(module);
          t_LongValuesSource$ConstantLongValuesSource::install(module);
          t_MatchAllDocsQuery::install(module);
          t_MatchNoDocsQuery::install(module);
          t_Matches::install(module);
          t_MatchesIterator::install(module);
          t_MatchesUtils::install(module);
          t_MaxNonCompetitiveBoostAttribute::install(module);
          t_MaxNonCompetitiveBoostAttributeImpl::install(module);
          t_MaxScoreCache::install(module);
          t_MultiCollector::install(module);
          t_MultiCollectorManager::install(module);
          t_MultiPhraseQuery::install(module);
          t_MultiPhraseQuery$Builder::install(module);
          t_MultiPhraseQuery$UnionFullPostingsEnum::install(module);
          t_MultiPhraseQuery$UnionPostingsEnum::install(module);
          t_MultiTermQuery::install(module);
          t_MultiTermQuery$RewriteMethod::install(module);
          t_MultiTermQuery$TopTermsBlendedFreqScoringRewrite::install(module);
          t_MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite::install(module);
          t_MultiTermQuery$TopTermsScoringBooleanQueryRewrite::install(module);
          t_Multiset::install(module);
          t_NGramPhraseQuery::install(module);
          t_NamedMatches::install(module);
          t_PhraseMatcher::install(module);
          t_PhraseQuery::install(module);
          t_PhraseQuery$Builder::install(module);
          t_PhraseQuery$PostingsAndFreq::install(module);
          t_PhraseWeight::install(module);
          t_PointInSetQuery::install(module);
          t_PointInSetQuery$Stream::install(module);
          t_PointRangeQuery::install(module);
          t_PositiveScoresOnlyCollector::install(module);
          t_PrefixQuery::install(module);
          t_Pruning::install(module);
          t_Query::install(module);
          t_QueryCache::install(module);
          t_QueryCachingPolicy::install(module);
          t_QueryRescorer::install(module);
          t_QueryVisitor::install(module);
          t_ReferenceManager::install(module);
          t_ReferenceManager$RefreshListener::install(module);
          t_RegexpQuery::install(module);
          t_Rescorer::install(module);
          t_Scorable::install(module);
          t_Scorable$ChildScorable::install(module);
          t_ScoreCachingWrappingScorer::install(module);
          t_ScoreDoc::install(module);
          t_ScoreMode::install(module);
          t_Scorer::install(module);
          t_ScorerSupplier::install(module);
          t_ScoringRewrite::install(module);
          t_SearcherFactory::install(module);
          t_SearcherLifetimeManager::install(module);
          t_SearcherLifetimeManager$PruneByAge::install(module);
          t_SearcherLifetimeManager$Pruner::install(module);
          t_SearcherManager::install(module);
          t_SegmentCacheable::install(module);
          t_SimpleCollector::install(module);
          t_SimpleFieldComparator::install(module);
          t_SloppyPhraseMatcher::install(module);
          t_Sort::install(module);
          t_SortField::install(module);
          t_SortField$Provider::install(module);
          t_SortField$Type::install(module);
          t_SortRescorer::install(module);
          t_SortedNumericSelector::install(module);
          t_SortedNumericSelector$Type::install(module);
          t_SortedNumericSortField::install(module);
          t_SortedNumericSortField$Provider::install(module);
          t_SortedSetSelector::install(module);
          t_SortedSetSelector$Type::install(module);
          t_SortedSetSortField::install(module);
          t_SortedSetSortField$Provider::install(module);
          t_SynonymQuery::install(module);
          t_SynonymQuery$Builder::install(module);
          t_TaskExecutor::install(module);
          t_TermCollectingRewrite::install(module);
          t_TermInSetQuery::install(module);
          t_TermQuery::install(module);
          t_TermRangeQuery::install(module);
          t_TermScorer::install(module);
          t_TermStatistics::install(module);
          t_TimeLimitingKnnCollectorManager::install(module);
          t_TopDocs::install(module);
          t_TopDocsCollector::install(module);
          t_TopFieldCollector::install(module);
          t_TopFieldCollectorManager::install(module);
          t_TopFieldDocs::install(module);
          t_TopKnnCollector::install(module);
          t_TopScoreDocCollector::install(module);
          t_TopScoreDocCollector$ScorerLeafCollector::install(module);
          t_TopScoreDocCollectorManager::install(module);
          t_TopTermsRewrite::install(module);
          t_TotalHitCountCollector::install(module);
          t_TotalHitCountCollectorManager::install(module);
          t_TotalHits::install(module);
          t_TotalHits$Relation::install(module);
          t_TwoPhaseIterator::install(module);
          t_UsageTrackingQueryCachingPolicy::install(module);
          t_VectorScorer::install(module);
          t_Weight::install(module);
          t_WildcardQuery::install(module);
          comparators::__install__(module);
          grouping::__install__(module);
          highlight::__install__(module);
          join::__install__(module);
          knn::__install__(module);
          matchhighlight::__install__(module);
          similarities::__install__(module);
          spell::__install__(module);
          suggest::__install__(module);
          uhighlight::__install__(module);
          vectorhighlight::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "search");

          t_AbstractKnnCollector::initialize(module);
          t_AbstractKnnVectorQuery::initialize(module);
          t_AbstractVectorSimilarityQuery::initialize(module);
          t_AutomatonQuery::initialize(module);
          t_BlendedTermQuery::initialize(module);
          t_BlendedTermQuery$Builder::initialize(module);
          t_BlendedTermQuery$DisjunctionMaxRewrite::initialize(module);
          t_BlendedTermQuery$RewriteMethod::initialize(module);
          t_BooleanClause::initialize(module);
          t_BooleanClause$Occur::initialize(module);
          t_BooleanQuery::initialize(module);
          t_BooleanQuery$Builder::initialize(module);
          t_BoostAttribute::initialize(module);
          t_BoostAttributeImpl::initialize(module);
          t_BoostQuery::initialize(module);
          t_BulkScorer::initialize(module);
          t_ByteVectorSimilarityQuery::initialize(module);
          t_CachingCollector::initialize(module);
          t_CheckedIntConsumer::initialize(module);
          t_CollectionStatistics::initialize(module);
          t_CollectionTerminatedException::initialize(module);
          t_Collector::initialize(module);
          t_CollectorManager::initialize(module);
          t_ConjunctionUtils::initialize(module);
          t_ConstantScoreQuery::initialize(module);
          t_ConstantScoreScorer::initialize(module);
          t_ConstantScoreWeight::initialize(module);
          t_ControlledRealTimeReopenThread::initialize(module);
          t_DisiPriorityQueue::initialize(module);
          t_DisiWrapper::initialize(module);
          t_DisjunctionDISIApproximation::initialize(module);
          t_DisjunctionMaxQuery::initialize(module);
          t_DocIdSet::initialize(module);
          t_DocIdSetIterator::initialize(module);
          t_DocIdStream::initialize(module);
          t_DocValuesRangeIterator::initialize(module);
          t_DocValuesRewriteMethod::initialize(module);
          t_DoubleValues::initialize(module);
          t_DoubleValuesSource::initialize(module);
          t_ExactPhraseMatcher::initialize(module);
          t_Explanation::initialize(module);
          t_FieldComparator::initialize(module);
          t_FieldComparator$RelevanceComparator::initialize(module);
          t_FieldComparator$TermValComparator::initialize(module);
          t_FieldComparatorSource::initialize(module);
          t_FieldDoc::initialize(module);
          t_FieldExistsQuery::initialize(module);
          t_FieldValueHitQueue::initialize(module);
          t_FieldValueHitQueue$Entry::initialize(module);
          t_FilterCollector::initialize(module);
          t_FilterLeafCollector::initialize(module);
          t_FilterMatchesIterator::initialize(module);
          t_FilterScorable::initialize(module);
          t_FilterScorer::initialize(module);
          t_FilterWeight::initialize(module);
          t_FilteredDocIdSetIterator::initialize(module);
          t_FloatVectorSimilarityQuery::initialize(module);
          t_FuzzyQuery::initialize(module);
          t_FuzzyTermsEnum::initialize(module);
          t_FuzzyTermsEnum$FuzzyTermsException::initialize(module);
          t_HitQueue::initialize(module);
          t_ImpactsDISI::initialize(module);
          t_IndexOrDocValuesQuery::initialize(module);
          t_IndexSearcher::initialize(module);
          t_IndexSearcher$LeafReaderContextPartition::initialize(module);
          t_IndexSearcher$LeafSlice::initialize(module);
          t_IndexSearcher$TooManyClauses::initialize(module);
          t_IndexSearcher$TooManyNestedClauses::initialize(module);
          t_IndexSortSortedNumericDocValuesRangeQuery::initialize(module);
          t_IndriAndQuery::initialize(module);
          t_IndriAndScorer::initialize(module);
          t_IndriAndWeight::initialize(module);
          t_IndriDisjunctionScorer::initialize(module);
          t_IndriQuery::initialize(module);
          t_IndriScorer::initialize(module);
          t_KnnByteVectorQuery::initialize(module);
          t_KnnCollector::initialize(module);
          t_KnnFloatVectorQuery::initialize(module);
          t_LRUQueryCache::initialize(module);
          t_LeafCollector::initialize(module);
          t_LeafFieldComparator::initialize(module);
          t_LeafSimScorer::initialize(module);
          t_LiveFieldValues::initialize(module);
          t_LongValues::initialize(module);
          t_LongValuesSource::initialize(module);
          t_LongValuesSource$ConstantLongValuesSource::initialize(module);
          t_MatchAllDocsQuery::initialize(module);
          t_MatchNoDocsQuery::initialize(module);
          t_Matches::initialize(module);
          t_MatchesIterator::initialize(module);
          t_MatchesUtils::initialize(module);
          t_MaxNonCompetitiveBoostAttribute::initialize(module);
          t_MaxNonCompetitiveBoostAttributeImpl::initialize(module);
          t_MaxScoreCache::initialize(module);
          t_MultiCollector::initialize(module);
          t_MultiCollectorManager::initialize(module);
          t_MultiPhraseQuery::initialize(module);
          t_MultiPhraseQuery$Builder::initialize(module);
          t_MultiPhraseQuery$UnionFullPostingsEnum::initialize(module);
          t_MultiPhraseQuery$UnionPostingsEnum::initialize(module);
          t_MultiTermQuery::initialize(module);
          t_MultiTermQuery$RewriteMethod::initialize(module);
          t_MultiTermQuery$TopTermsBlendedFreqScoringRewrite::initialize(module);
          t_MultiTermQuery$TopTermsBoostOnlyBooleanQueryRewrite::initialize(module);
          t_MultiTermQuery$TopTermsScoringBooleanQueryRewrite::initialize(module);
          t_Multiset::initialize(module);
          t_NGramPhraseQuery::initialize(module);
          t_NamedMatches::initialize(module);
          t_PhraseMatcher::initialize(module);
          t_PhraseQuery::initialize(module);
          t_PhraseQuery$Builder::initialize(module);
          t_PhraseQuery$PostingsAndFreq::initialize(module);
          t_PhraseWeight::initialize(module);
          t_PointInSetQuery::initialize(module);
          t_PointInSetQuery$Stream::initialize(module);
          t_PointRangeQuery::initialize(module);
          t_PositiveScoresOnlyCollector::initialize(module);
          t_PrefixQuery::initialize(module);
          t_Pruning::initialize(module);
          t_Query::initialize(module);
          t_QueryCache::initialize(module);
          t_QueryCachingPolicy::initialize(module);
          t_QueryRescorer::initialize(module);
          t_QueryVisitor::initialize(module);
          t_ReferenceManager::initialize(module);
          t_ReferenceManager$RefreshListener::initialize(module);
          t_RegexpQuery::initialize(module);
          t_Rescorer::initialize(module);
          t_Scorable::initialize(module);
          t_Scorable$ChildScorable::initialize(module);
          t_ScoreCachingWrappingScorer::initialize(module);
          t_ScoreDoc::initialize(module);
          t_ScoreMode::initialize(module);
          t_Scorer::initialize(module);
          t_ScorerSupplier::initialize(module);
          t_ScoringRewrite::initialize(module);
          t_SearcherFactory::initialize(module);
          t_SearcherLifetimeManager::initialize(module);
          t_SearcherLifetimeManager$PruneByAge::initialize(module);
          t_SearcherLifetimeManager$Pruner::initialize(module);
          t_SearcherManager::initialize(module);
          t_SegmentCacheable::initialize(module);
          t_SimpleCollector::initialize(module);
          t_SimpleFieldComparator::initialize(module);
          t_SloppyPhraseMatcher::initialize(module);
          t_Sort::initialize(module);
          t_SortField::initialize(module);
          t_SortField$Provider::initialize(module);
          t_SortField$Type::initialize(module);
          t_SortRescorer::initialize(module);
          t_SortedNumericSelector::initialize(module);
          t_SortedNumericSelector$Type::initialize(module);
          t_SortedNumericSortField::initialize(module);
          t_SortedNumericSortField$Provider::initialize(module);
          t_SortedSetSelector::initialize(module);
          t_SortedSetSelector$Type::initialize(module);
          t_SortedSetSortField::initialize(module);
          t_SortedSetSortField$Provider::initialize(module);
          t_SynonymQuery::initialize(module);
          t_SynonymQuery$Builder::initialize(module);
          t_TaskExecutor::initialize(module);
          t_TermCollectingRewrite::initialize(module);
          t_TermInSetQuery::initialize(module);
          t_TermQuery::initialize(module);
          t_TermRangeQuery::initialize(module);
          t_TermScorer::initialize(module);
          t_TermStatistics::initialize(module);
          t_TimeLimitingKnnCollectorManager::initialize(module);
          t_TopDocs::initialize(module);
          t_TopDocsCollector::initialize(module);
          t_TopFieldCollector::initialize(module);
          t_TopFieldCollectorManager::initialize(module);
          t_TopFieldDocs::initialize(module);
          t_TopKnnCollector::initialize(module);
          t_TopScoreDocCollector::initialize(module);
          t_TopScoreDocCollector$ScorerLeafCollector::initialize(module);
          t_TopScoreDocCollectorManager::initialize(module);
          t_TopTermsRewrite::initialize(module);
          t_TotalHitCountCollector::initialize(module);
          t_TotalHitCountCollectorManager::initialize(module);
          t_TotalHits::initialize(module);
          t_TotalHits$Relation::initialize(module);
          t_TwoPhaseIterator::initialize(module);
          t_UsageTrackingQueryCachingPolicy::initialize(module);
          t_VectorScorer::initialize(module);
          t_Weight::initialize(module);
          t_WildcardQuery::initialize(module);
          comparators::__initialize__(module);
          grouping::__initialize__(module);
          highlight::__initialize__(module);
          join::__initialize__(module);
          knn::__initialize__(module);
          matchhighlight::__initialize__(module);
          similarities::__initialize__(module);
          spell::__initialize__(module);
          suggest::__initialize__(module);
          uhighlight::__initialize__(module);
          vectorhighlight::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/search/comparators/DocComparator.h"
#include "org/apache/lucene/search/comparators/DoubleComparator.h"
#include "org/apache/lucene/search/comparators/DoubleComparator$DoubleLeafComparator.h"
#include "org/apache/lucene/search/comparators/FloatComparator.h"
#include "org/apache/lucene/search/comparators/FloatComparator$FloatLeafComparator.h"
#include "org/apache/lucene/search/comparators/IntComparator.h"
#include "org/apache/lucene/search/comparators/IntComparator$IntLeafComparator.h"
#include "org/apache/lucene/search/comparators/LongComparator.h"
#include "org/apache/lucene/search/comparators/LongComparator$LongLeafComparator.h"
#include "org/apache/lucene/search/comparators/MinDocIterator.h"
#include "org/apache/lucene/search/comparators/NumericComparator.h"
#include "org/apache/lucene/search/comparators/NumericComparator$NumericLeafComparator.h"
#include "org/apache/lucene/search/comparators/TermOrdValComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "comparators");

            t_DocComparator::install(module);
            t_DoubleComparator::install(module);
            t_DoubleComparator$DoubleLeafComparator::install(module);
            t_FloatComparator::install(module);
            t_FloatComparator$FloatLeafComparator::install(module);
            t_IntComparator::install(module);
            t_IntComparator$IntLeafComparator::install(module);
            t_LongComparator::install(module);
            t_LongComparator$LongLeafComparator::install(module);
            t_MinDocIterator::install(module);
            t_NumericComparator::install(module);
            t_NumericComparator$NumericLeafComparator::install(module);
            t_TermOrdValComparator::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "comparators");

            t_DocComparator::initialize(module);
            t_DoubleComparator::initialize(module);
            t_DoubleComparator$DoubleLeafComparator::initialize(module);
            t_FloatComparator::initialize(module);
            t_FloatComparator$FloatLeafComparator::initialize(module);
            t_IntComparator::initialize(module);
            t_IntComparator$IntLeafComparator::initialize(module);
            t_LongComparator::initialize(module);
            t_LongComparator$LongLeafComparator::initialize(module);
            t_MinDocIterator::initialize(module);
            t_NumericComparator::initialize(module);
            t_NumericComparator$NumericLeafComparator::initialize(module);
            t_TermOrdValComparator::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/grouping/AllGroupHeadsCollector.h"
#include "org/apache/lucene/search/grouping/AllGroupHeadsCollector$GroupHead.h"
#include "org/apache/lucene/search/grouping/AllGroupsCollector.h"
#include "org/apache/lucene/search/grouping/BlockGroupingCollector.h"
#include "org/apache/lucene/search/grouping/CollectedSearchGroup.h"
#include "org/apache/lucene/search/grouping/DistinctValuesCollector.h"
#include "org/apache/lucene/search/grouping/DistinctValuesCollector$GroupCount.h"
#include "org/apache/lucene/search/grouping/DoubleRange.h"
#include "org/apache/lucene/search/grouping/DoubleRangeFactory.h"
#include "org/apache/lucene/search/grouping/DoubleRangeGroupSelector.h"
#include "org/apache/lucene/search/grouping/FirstPassGroupingCollector.h"
#include "org/apache/lucene/search/grouping/GroupDocs.h"
#include "org/apache/lucene/search/grouping/GroupFacetCollector.h"
#include "org/apache/lucene/search/grouping/GroupFacetCollector$FacetEntry.h"
#include "org/apache/lucene/search/grouping/GroupFacetCollector$GroupedFacetResult.h"
#include "org/apache/lucene/search/grouping/GroupReducer.h"
#include "org/apache/lucene/search/grouping/GroupSelector.h"
#include "org/apache/lucene/search/grouping/GroupSelector$State.h"
#include "org/apache/lucene/search/grouping/GroupingSearch.h"
#include "org/apache/lucene/search/grouping/LongRange.h"
#include "org/apache/lucene/search/grouping/LongRangeFactory.h"
#include "org/apache/lucene/search/grouping/LongRangeGroupSelector.h"
#include "org/apache/lucene/search/grouping/SearchGroup.h"
#include "org/apache/lucene/search/grouping/SecondPassGroupingCollector.h"
#include "org/apache/lucene/search/grouping/TermGroupFacetCollector.h"
#include "org/apache/lucene/search/grouping/TermGroupSelector.h"
#include "org/apache/lucene/search/grouping/TopGroups.h"
#include "org/apache/lucene/search/grouping/TopGroups$ScoreMergeMode.h"
#include "org/apache/lucene/search/grouping/TopGroupsCollector.h"
#include "org/apache/lucene/search/grouping/ValueSourceGroupSelector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "grouping");

            t_AllGroupHeadsCollector::install(module);
            t_AllGroupHeadsCollector$GroupHead::install(module);
            t_AllGroupsCollector::install(module);
            t_BlockGroupingCollector::install(module);
            t_CollectedSearchGroup::install(module);
            t_DistinctValuesCollector::install(module);
            t_DistinctValuesCollector$GroupCount::install(module);
            t_DoubleRange::install(module);
            t_DoubleRangeFactory::install(module);
            t_DoubleRangeGroupSelector::install(module);
            t_FirstPassGroupingCollector::install(module);
            t_GroupDocs::install(module);
            t_GroupFacetCollector::install(module);
            t_GroupFacetCollector$FacetEntry::install(module);
            t_GroupFacetCollector$GroupedFacetResult::install(module);
            t_GroupReducer::install(module);
            t_GroupSelector::install(module);
            t_GroupSelector$State::install(module);
            t_GroupingSearch::install(module);
            t_LongRange::install(module);
            t_LongRangeFactory::install(module);
            t_LongRangeGroupSelector::install(module);
            t_SearchGroup::install(module);
            t_SecondPassGroupingCollector::install(module);
            t_TermGroupFacetCollector::install(module);
            t_TermGroupSelector::install(module);
            t_TopGroups::install(module);
            t_TopGroups$ScoreMergeMode::install(module);
            t_TopGroupsCollector::install(module);
            t_ValueSourceGroupSelector::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "grouping");

            t_AllGroupHeadsCollector::initialize(module);
            t_AllGroupHeadsCollector$GroupHead::initialize(module);
            t_AllGroupsCollector::initialize(module);
            t_BlockGroupingCollector::initialize(module);
            t_CollectedSearchGroup::initialize(module);
            t_DistinctValuesCollector::initialize(module);
            t_DistinctValuesCollector$GroupCount::initialize(module);
            t_DoubleRange::initialize(module);
            t_DoubleRangeFactory::initialize(module);
            t_DoubleRangeGroupSelector::initialize(module);
            t_FirstPassGroupingCollector::initialize(module);
            t_GroupDocs::initialize(module);
            t_GroupFacetCollector::initialize(module);
            t_GroupFacetCollector$FacetEntry::initialize(module);
            t_GroupFacetCollector$GroupedFacetResult::initialize(module);
            t_GroupReducer::initialize(module);
            t_GroupSelector::initialize(module);
            t_GroupSelector$State::initialize(module);
            t_GroupingSearch::initialize(module);
            t_LongRange::initialize(module);
            t_LongRangeFactory::initialize(module);
            t_LongRangeGroupSelector::initialize(module);
            t_SearchGroup::initialize(module);
            t_SecondPassGroupingCollector::initialize(module);
            t_TermGroupFacetCollector::initialize(module);
            t_TermGroupSelector::initialize(module);
            t_TopGroups::initialize(module);
            t_TopGroups$ScoreMergeMode::initialize(module);
            t_TopGroupsCollector::initialize(module);
            t_ValueSourceGroupSelector::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/highlight/DefaultEncoder.h"
#include "org/apache/lucene/search/highlight/Encoder.h"
#include "org/apache/lucene/search/highlight/Formatter.h"
#include "org/apache/lucene/search/highlight/Fragmenter.h"
#include "org/apache/lucene/search/highlight/GradientFormatter.h"
#include "org/apache/lucene/search/highlight/Highlighter.h"
#include "org/apache/lucene/search/highlight/InvalidTokenOffsetsException.h"
#include "org/apache/lucene/search/highlight/NullFragmenter.h"
#include "org/apache/lucene/search/highlight/OffsetLimitTokenFilter.h"
#include "org/apache/lucene/search/highlight/PositionSpan.h"
#include "org/apache/lucene/search/highlight/QueryScorer.h"
#include "org/apache/lucene/search/highlight/QueryTermExtractor.h"
#include "org/apache/lucene/search/highlight/QueryTermScorer.h"
#include "org/apache/lucene/search/highlight/Scorer.h"
#include "org/apache/lucene/search/highlight/SimpleFragmenter.h"
#include "org/apache/lucene/search/highlight/SimpleHTMLEncoder.h"
#include "org/apache/lucene/search/highlight/SimpleHTMLFormatter.h"
#include "org/apache/lucene/search/highlight/SimpleSpanFragmenter.h"
#include "org/apache/lucene/search/highlight/SpanGradientFormatter.h"
#include "org/apache/lucene/search/highlight/TermVectorLeafReader.h"
#include "org/apache/lucene/search/highlight/TextFragment.h"
#include "org/apache/lucene/search/highlight/TokenGroup.h"
#include "org/apache/lucene/search/highlight/TokenSources.h"
#include "org/apache/lucene/search/highlight/TokenStreamFromTermVector.h"
#include "org/apache/lucene/search/highlight/WeightedSpanTerm.h"
#include "org/apache/lucene/search/highlight/WeightedSpanTermExtractor.h"
#include "org/apache/lucene/search/highlight/WeightedTerm.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "highlight");

            t_DefaultEncoder::install(module);
            t_Encoder::install(module);
            t_Formatter::install(module);
            t_Fragmenter::install(module);
            t_GradientFormatter::install(module);
            t_Highlighter::install(module);
            t_InvalidTokenOffsetsException::install(module);
            t_NullFragmenter::install(module);
            t_OffsetLimitTokenFilter::install(module);
            t_PositionSpan::install(module);
            t_QueryScorer::install(module);
            t_QueryTermExtractor::install(module);
            t_QueryTermScorer::install(module);
            t_Scorer::install(module);
            t_SimpleFragmenter::install(module);
            t_SimpleHTMLEncoder::install(module);
            t_SimpleHTMLFormatter::install(module);
            t_SimpleSpanFragmenter::install(module);
            t_SpanGradientFormatter::install(module);
            t_TermVectorLeafReader::install(module);
            t_TextFragment::install(module);
            t_TokenGroup::install(module);
            t_TokenSources::install(module);
            t_TokenStreamFromTermVector::install(module);
            t_WeightedSpanTerm::install(module);
            t_WeightedSpanTermExtractor::install(module);
            t_WeightedTerm::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "highlight");

            t_DefaultEncoder::initialize(module);
            t_Encoder::initialize(module);
            t_Formatter::initialize(module);
            t_Fragmenter::initialize(module);
            t_GradientFormatter::initialize(module);
            t_Highlighter::initialize(module);
            t_InvalidTokenOffsetsException::initialize(module);
            t_NullFragmenter::initialize(module);
            t_OffsetLimitTokenFilter::initialize(module);
            t_PositionSpan::initialize(module);
            t_QueryScorer::initialize(module);
            t_QueryTermExtractor::initialize(module);
            t_QueryTermScorer::initialize(module);
            t_Scorer::initialize(module);
            t_SimpleFragmenter::initialize(module);
            t_SimpleHTMLEncoder::initialize(module);
            t_SimpleHTMLFormatter::initialize(module);
            t_SimpleSpanFragmenter::initialize(module);
            t_SpanGradientFormatter::initialize(module);
            t_TermVectorLeafReader::initialize(module);
            t_TextFragment::initialize(module);
            t_TokenGroup::initialize(module);
            t_TokenSources::initialize(module);
            t_TokenStreamFromTermVector::initialize(module);
            t_WeightedSpanTerm::initialize(module);
            t_WeightedSpanTermExtractor::initialize(module);
            t_WeightedTerm::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/join/BitSetProducer.h"
#include "org/apache/lucene/search/join/BlockJoinSelector.h"
#include "org/apache/lucene/search/join/BlockJoinSelector$Type.h"
#include "org/apache/lucene/search/join/CheckJoinIndex.h"
#include "org/apache/lucene/search/join/DiversifyingChildrenByteKnnVectorQuery.h"
#include "org/apache/lucene/search/join/DiversifyingChildrenFloatKnnVectorQuery.h"
#include "org/apache/lucene/search/join/DiversifyingNearestChildrenKnnCollectorManager.h"
#include "org/apache/lucene/search/join/JoinUtil.h"
#include "org/apache/lucene/search/join/ParentChildrenBlockJoinQuery.h"
#include "org/apache/lucene/search/join/QueryBitSetProducer.h"
#include "org/apache/lucene/search/join/ScoreMode.h"
#include "org/apache/lucene/search/join/SeekingTermSetTermsEnum.h"
#include "org/apache/lucene/search/join/ToChildBlockJoinQuery.h"
#include "org/apache/lucene/search/join/ToParentBlockJoinQuery.h"
#include "org/apache/lucene/search/join/ToParentBlockJoinSortField.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "join");

            t_BitSetProducer::install(module);
            t_BlockJoinSelector::install(module);
            t_BlockJoinSelector$Type::install(module);
            t_CheckJoinIndex::install(module);
            t_DiversifyingChildrenByteKnnVectorQuery::install(module);
            t_DiversifyingChildrenFloatKnnVectorQuery::install(module);
            t_DiversifyingNearestChildrenKnnCollectorManager::install(module);
            t_JoinUtil::install(module);
            t_ParentChildrenBlockJoinQuery::install(module);
            t_QueryBitSetProducer::install(module);
            t_ScoreMode::install(module);
            t_SeekingTermSetTermsEnum::install(module);
            t_ToChildBlockJoinQuery::install(module);
            t_ToParentBlockJoinQuery::install(module);
            t_ToParentBlockJoinSortField::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "join");

            t_BitSetProducer::initialize(module);
            t_BlockJoinSelector::initialize(module);
            t_BlockJoinSelector$Type::initialize(module);
            t_CheckJoinIndex::initialize(module);
            t_DiversifyingChildrenByteKnnVectorQuery::initialize(module);
            t_DiversifyingChildrenFloatKnnVectorQuery::initialize(module);
            t_DiversifyingNearestChildrenKnnCollectorManager::initialize(module);
            t_JoinUtil::initialize(module);
            t_ParentChildrenBlockJoinQuery::initialize(module);
            t_QueryBitSetProducer::initialize(module);
            t_ScoreMode::initialize(module);
            t_SeekingTermSetTermsEnum::initialize(module);
            t_ToChildBlockJoinQuery::initialize(module);
            t_ToParentBlockJoinQuery::initialize(module);
            t_ToParentBlockJoinSortField::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/knn/KnnCollectorManager.h"
#include "org/apache/lucene/search/knn/MultiLeafKnnCollector.h"
#include "org/apache/lucene/search/knn/TopKnnCollectorManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace knn {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "knn");

            t_KnnCollectorManager::install(module);
            t_MultiLeafKnnCollector::install(module);
            t_TopKnnCollectorManager::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "knn");

            t_KnnCollectorManager::initialize(module);
            t_MultiLeafKnnCollector::initialize(module);
            t_TopKnnCollectorManager::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/matchhighlight/BreakIteratorShrinkingAdjuster.h"
#include "org/apache/lucene/search/matchhighlight/FieldValueHighlighters.h"
#include "org/apache/lucene/search/matchhighlight/MatchHighlighter.h"
#include "org/apache/lucene/search/matchhighlight/MatchHighlighter$DocHighlights.h"
#include "org/apache/lucene/search/matchhighlight/MatchHighlighter$FieldValueHighlighter.h"
#include "org/apache/lucene/search/matchhighlight/MatchHighlighter$QueryOffsetRange.h"
#include "org/apache/lucene/search/matchhighlight/MatchRegionRetriever.h"
#include "org/apache/lucene/search/matchhighlight/MatchRegionRetriever$FieldValueProvider.h"
#include "org/apache/lucene/search/matchhighlight/MatchRegionRetriever$MatchOffsetsConsumer.h"
#include "org/apache/lucene/search/matchhighlight/OffsetRange.h"
#include "org/apache/lucene/search/matchhighlight/OffsetsFromMatchIterator.h"
#include "org/apache/lucene/search/matchhighlight/OffsetsFromPositions.h"
#include "org/apache/lucene/search/matchhighlight/OffsetsFromTokens.h"
#include "org/apache/lucene/search/matchhighlight/OffsetsFromValues.h"
#include "org/apache/lucene/search/matchhighlight/OffsetsRetrievalStrategy.h"
#include "org/apache/lucene/search/matchhighlight/OffsetsRetrievalStrategySupplier.h"
#include "org/apache/lucene/search/matchhighlight/Passage.h"
#include "org/apache/lucene/search/matchhighlight/PassageAdjuster.h"
#include "org/apache/lucene/search/matchhighlight/PassageFormatter.h"
#include "org/apache/lucene/search/matchhighlight/PassageSelector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "matchhighlight");

            t_BreakIteratorShrinkingAdjuster::install(module);
            t_FieldValueHighlighters::install(module);
            t_MatchHighlighter::install(module);
            t_MatchHighlighter$DocHighlights::install(module);
            t_MatchHighlighter$FieldValueHighlighter::install(module);
            t_MatchHighlighter$QueryOffsetRange::install(module);
            t_MatchRegionRetriever::install(module);
            t_MatchRegionRetriever$FieldValueProvider::install(module);
            t_MatchRegionRetriever$MatchOffsetsConsumer::install(module);
            t_OffsetRange::install(module);
            t_OffsetsFromMatchIterator::install(module);
            t_OffsetsFromPositions::install(module);
            t_OffsetsFromTokens::install(module);
            t_OffsetsFromValues::install(module);
            t_OffsetsRetrievalStrategy::install(module);
            t_OffsetsRetrievalStrategySupplier::install(module);
            t_Passage::install(module);
            t_PassageAdjuster::install(module);
            t_PassageFormatter::install(module);
            t_PassageSelector::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "matchhighlight");

            t_BreakIteratorShrinkingAdjuster::initialize(module);
            t_FieldValueHighlighters::initialize(module);
            t_MatchHighlighter::initialize(module);
            t_MatchHighlighter$DocHighlights::initialize(module);
            t_MatchHighlighter$FieldValueHighlighter::initialize(module);
            t_MatchHighlighter$QueryOffsetRange::initialize(module);
            t_MatchRegionRetriever::initialize(module);
            t_MatchRegionRetriever$FieldValueProvider::initialize(module);
            t_MatchRegionRetriever$MatchOffsetsConsumer::initialize(module);
            t_OffsetRange::initialize(module);
            t_OffsetsFromMatchIterator::initialize(module);
            t_OffsetsFromPositions::initialize(module);
            t_OffsetsFromTokens::initialize(module);
            t_OffsetsFromValues::initialize(module);
            t_OffsetsRetrievalStrategy::initialize(module);
            t_OffsetsRetrievalStrategySupplier::initialize(module);
            t_Passage::initialize(module);
            t_PassageAdjuster::initialize(module);
            t_PassageFormatter::initialize(module);
            t_PassageSelector::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/similarities/AfterEffect.h"
#include "org/apache/lucene/search/similarities/AfterEffectB.h"
#include "org/apache/lucene/search/similarities/AfterEffectL.h"
#include "org/apache/lucene/search/similarities/Axiomatic.h"
#include "org/apache/lucene/search/similarities/AxiomaticF1EXP.h"
#include "org/apache/lucene/search/similarities/AxiomaticF1LOG.h"
#include "org/apache/lucene/search/similarities/AxiomaticF2EXP.h"
#include "org/apache/lucene/search/similarities/AxiomaticF2LOG.h"
#include "org/apache/lucene/search/similarities/AxiomaticF3EXP.h"
#include "org/apache/lucene/search/similarities/AxiomaticF3LOG.h"
#include "org/apache/lucene/search/similarities/BM25Similarity.h"
#include "org/apache/lucene/search/similarities/BasicModel.h"
#include "org/apache/lucene/search/similarities/BasicModelG.h"
#include "org/apache/lucene/search/similarities/BasicModelIF.h"
#include "org/apache/lucene/search/similarities/BasicModelIn.h"
#include "org/apache/lucene/search/similarities/BasicModelIne.h"
#include "org/apache/lucene/search/similarities/BasicStats.h"
#include "org/apache/lucene/search/similarities/BooleanSimilarity.h"
#include "org/apache/lucene/search/similarities/ClassicSimilarity.h"
#include "org/apache/lucene/search/similarities/DFISimilarity.h"
#include "org/apache/lucene/search/similarities/DFRSimilarity.h"
#include "org/apache/lucene/search/similarities/Distribution.h"
#include "org/apache/lucene/search/similarities/DistributionLL.h"
#include "org/apache/lucene/search/similarities/DistributionSPL.h"
#include "org/apache/lucene/search/similarities/IBSimilarity.h"
#include "org/apache/lucene/search/similarities/Independence.h"
#include "org/apache/lucene/search/similarities/IndependenceChiSquared.h"
#include "org/apache/lucene/search/similarities/IndependenceSaturated.h"
#include "org/apache/lucene/search/similarities/IndependenceStandardized.h"
#include "org/apache/lucene/search/similarities/IndriDirichletSimilarity.h"
#include "org/apache/lucene/search/similarities/IndriDirichletSimilarity$IndriCollectionModel.h"
#include "org/apache/lucene/search/similarities/LMDirichletSimilarity.h"
#include "org/apache/lucene/search/similarities/LMJelinekMercerSimilarity.h"
#include "org/apache/lucene/search/similarities/LMSimilarity.h"
#include "org/apache/lucene/search/similarities/LMSimilarity$CollectionModel.h"
#include "org/apache/lucene/search/similarities/LMSimilarity$DefaultCollectionModel.h"
#include "org/apache/lucene/search/similarities/LMSimilarity$LMStats.h"
#include "org/apache/lucene/search/similarities/Lambda.h"
#include "org/apache/lucene/search/similarities/LambdaDF.h"
#include "org/apache/lucene/search/similarities/LambdaTTF.h"
#include "org/apache/lucene/search/similarities/MultiSimilarity.h"
#include "org/apache/lucene/search/similarities/Normalization.h"
#include "org/apache/lucene/search/similarities/Normalization$NoNormalization.h"
#include "org/apache/lucene/search/similarities/NormalizationH1.h"
#include "org/apache/lucene/search/similarities/NormalizationH2.h"
#include "org/apache/lucene/search/similarities/NormalizationH3.h"
#include "org/apache/lucene/search/similarities/NormalizationZ.h"
#include "org/apache/lucene/search/similarities/PerFieldSimilarityWrapper.h"
#include "org/apache/lucene/search/similarities/RawTFSimilarity.h"
#include "org/apache/lucene/search/similarities/Similarity.h"
#include "org/apache/lucene/search/similarities/Similarity$SimScorer.h"
#include "org/apache/lucene/search/similarities/SimilarityBase.h"
#include "org/apache/lucene/search/similarities/TFIDFSimilarity.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "similarities");

            t_AfterEffect::install(module);
            t_AfterEffectB::install(module);
            t_AfterEffectL::install(module);
            t_Axiomatic::install(module);
            t_AxiomaticF1EXP::install(module);
            t_AxiomaticF1LOG::install(module);
            t_AxiomaticF2EXP::install(module);
            t_AxiomaticF2LOG::install(module);
            t_AxiomaticF3EXP::install(module);
            t_AxiomaticF3LOG::install(module);
            t_BM25Similarity::install(module);
            t_BasicModel::install(module);
            t_BasicModelG::install(module);
            t_BasicModelIF::install(module);
            t_BasicModelIn::install(module);
            t_BasicModelIne::install(module);
            t_BasicStats::install(module);
            t_BooleanSimilarity::install(module);
            t_ClassicSimilarity::install(module);
            t_DFISimilarity::install(module);
            t_DFRSimilarity::install(module);
            t_Distribution::install(module);
            t_DistributionLL::install(module);
            t_DistributionSPL::install(module);
            t_IBSimilarity::install(module);
            t_Independence::install(module);
            t_IndependenceChiSquared::install(module);
            t_IndependenceSaturated::install(module);
            t_IndependenceStandardized::install(module);
            t_IndriDirichletSimilarity::install(module);
            t_IndriDirichletSimilarity$IndriCollectionModel::install(module);
            t_LMDirichletSimilarity::install(module);
            t_LMJelinekMercerSimilarity::install(module);
            t_LMSimilarity::install(module);
            t_LMSimilarity$CollectionModel::install(module);
            t_LMSimilarity$DefaultCollectionModel::install(module);
            t_LMSimilarity$LMStats::install(module);
            t_Lambda::install(module);
            t_LambdaDF::install(module);
            t_LambdaTTF::install(module);
            t_MultiSimilarity::install(module);
            t_Normalization::install(module);
            t_Normalization$NoNormalization::install(module);
            t_NormalizationH1::install(module);
            t_NormalizationH2::install(module);
            t_NormalizationH3::install(module);
            t_NormalizationZ::install(module);
            t_PerFieldSimilarityWrapper::install(module);
            t_RawTFSimilarity::install(module);
            t_Similarity::install(module);
            t_Similarity$SimScorer::install(module);
            t_SimilarityBase::install(module);
            t_TFIDFSimilarity::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "similarities");

            t_AfterEffect::initialize(module);
            t_AfterEffectB::initialize(module);
            t_AfterEffectL::initialize(module);
            t_Axiomatic::initialize(module);
            t_AxiomaticF1EXP::initialize(module);
            t_AxiomaticF1LOG::initialize(module);
            t_AxiomaticF2EXP::initialize(module);
            t_AxiomaticF2LOG::initialize(module);
            t_AxiomaticF3EXP::initialize(module);
            t_AxiomaticF3LOG::initialize(module);
            t_BM25Similarity::initialize(module);
            t_BasicModel::initialize(module);
            t_BasicModelG::initialize(module);
            t_BasicModelIF::initialize(module);
            t_BasicModelIn::initialize(module);
            t_BasicModelIne::initialize(module);
            t_BasicStats::initialize(module);
            t_BooleanSimilarity::initialize(module);
            t_ClassicSimilarity::initialize(module);
            t_DFISimilarity::initialize(module);
            t_DFRSimilarity::initialize(module);
            t_Distribution::initialize(module);
            t_DistributionLL::initialize(module);
            t_DistributionSPL::initialize(module);
            t_IBSimilarity::initialize(module);
            t_Independence::initialize(module);
            t_IndependenceChiSquared::initialize(module);
            t_IndependenceSaturated::initialize(module);
            t_IndependenceStandardized::initialize(module);
            t_IndriDirichletSimilarity::initialize(module);
            t_IndriDirichletSimilarity$IndriCollectionModel::initialize(module);
            t_LMDirichletSimilarity::initialize(module);
            t_LMJelinekMercerSimilarity::initialize(module);
            t_LMSimilarity::initialize(module);
            t_LMSimilarity$CollectionModel::initialize(module);
            t_LMSimilarity$DefaultCollectionModel::initialize(module);
            t_LMSimilarity$LMStats::initialize(module);
            t_Lambda::initialize(module);
            t_LambdaDF::initialize(module);
            t_LambdaTTF::initialize(module);
            t_MultiSimilarity::initialize(module);
            t_Normalization::initialize(module);
            t_Normalization$NoNormalization::initialize(module);
            t_NormalizationH1::initialize(module);
            t_NormalizationH2::initialize(module);
            t_NormalizationH3::initialize(module);
            t_NormalizationZ::initialize(module);
            t_PerFieldSimilarityWrapper::initialize(module);
            t_RawTFSimilarity::initialize(module);
            t_Similarity::initialize(module);
            t_Similarity$SimScorer::initialize(module);
            t_SimilarityBase::initialize(module);
            t_TFIDFSimilarity::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/spell/CombineSuggestion.h"
#include "org/apache/lucene/search/spell/Dictionary.h"
#include "org/apache/lucene/search/spell/DirectSpellChecker.h"
#include "org/apache/lucene/search/spell/HighFrequencyDictionary.h"
#include "org/apache/lucene/search/spell/JaroWinklerDistance.h"
#include "org/apache/lucene/search/spell/LevenshteinDistance.h"
#include "org/apache/lucene/search/spell/LuceneDictionary.h"
#include "org/apache/lucene/search/spell/LuceneLevenshteinDistance.h"
#include "org/apache/lucene/search/spell/NGramDistance.h"
#include "org/apache/lucene/search/spell/PlainTextDictionary.h"
#include "org/apache/lucene/search/spell/SpellChecker.h"
#include "org/apache/lucene/search/spell/StringDistance.h"
#include "org/apache/lucene/search/spell/SuggestMode.h"
#include "org/apache/lucene/search/spell/SuggestWord.h"
#include "org/apache/lucene/search/spell/SuggestWordFrequencyComparator.h"
#include "org/apache/lucene/search/spell/SuggestWordQueue.h"
#include "org/apache/lucene/search/spell/SuggestWordScoreComparator.h"
#include "org/apache/lucene/search/spell/WordBreakSpellChecker.h"
#include "org/apache/lucene/search/spell/WordBreakSpellChecker$BreakSuggestionSortMethod.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "spell");

            t_CombineSuggestion::install(module);
            t_Dictionary::install(module);
            t_DirectSpellChecker::install(module);
            t_HighFrequencyDictionary::install(module);
            t_JaroWinklerDistance::install(module);
            t_LevenshteinDistance::install(module);
            t_LuceneDictionary::install(module);
            t_LuceneLevenshteinDistance::install(module);
            t_NGramDistance::install(module);
            t_PlainTextDictionary::install(module);
            t_SpellChecker::install(module);
            t_StringDistance::install(module);
            t_SuggestMode::install(module);
            t_SuggestWord::install(module);
            t_SuggestWordFrequencyComparator::install(module);
            t_SuggestWordQueue::install(module);
            t_SuggestWordScoreComparator::install(module);
            t_WordBreakSpellChecker::install(module);
            t_WordBreakSpellChecker$BreakSuggestionSortMethod::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "spell");

            t_CombineSuggestion::initialize(module);
            t_Dictionary::initialize(module);
            t_DirectSpellChecker::initialize(module);
            t_HighFrequencyDictionary::initialize(module);
            t_JaroWinklerDistance::initialize(module);
            t_LevenshteinDistance::initialize(module);
            t_LuceneDictionary::initialize(module);
            t_LuceneLevenshteinDistance::initialize(module);
            t_NGramDistance::initialize(module);
            t_PlainTextDictionary::initialize(module);
            t_SpellChecker::initialize(module);
            t_StringDistance::initialize(module);
            t_SuggestMode::initialize(module);
            t_SuggestWord::initialize(module);
            t_SuggestWordFrequencyComparator::initialize(module);
            t_SuggestWordQueue::initialize(module);
            t_SuggestWordScoreComparator::initialize(module);
            t_WordBreakSpellChecker::initialize(module);
            t_WordBreakSpellChecker$BreakSuggestionSortMethod::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/suggest/BitsProducer.h"
#include "org/apache/lucene/search/suggest/BufferedInputIterator.h"
#include "org/apache/lucene/search/suggest/DocumentDictionary.h"
#include "org/apache/lucene/search/suggest/DocumentValueSourceDictionary.h"
#include "org/apache/lucene/search/suggest/FileDictionary.h"
#include "org/apache/lucene/search/suggest/InMemorySorter.h"
#include "org/apache/lucene/search/suggest/InputIterator.h"
#include "org/apache/lucene/search/suggest/InputIterator$InputIteratorWrapper.h"
#include "org/apache/lucene/search/suggest/Lookup.h"
#include "org/apache/lucene/search/suggest/Lookup$LookupPriorityQueue.h"
#include "org/apache/lucene/search/suggest/Lookup$LookupResult.h"
#include "org/apache/lucene/search/suggest/SortedInputIterator.h"
#include "org/apache/lucene/search/suggest/UnsortedInputIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          namespace analyzing {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace document {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace fst {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace tst {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "suggest");

            t_BitsProducer::install(module);
            t_BufferedInputIterator::install(module);
            t_DocumentDictionary::install(module);
            t_DocumentValueSourceDictionary::install(module);
            t_FileDictionary::install(module);
            t_InMemorySorter::install(module);
            t_InputIterator::install(module);
            t_InputIterator$InputIteratorWrapper::install(module);
            t_Lookup::install(module);
            t_Lookup$LookupPriorityQueue::install(module);
            t_Lookup$LookupResult::install(module);
            t_SortedInputIterator::install(module);
            t_UnsortedInputIterator::install(module);
            analyzing::__install__(module);
            document::__install__(module);
            fst::__install__(module);
            tst::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "suggest");

            t_BitsProducer::initialize(module);
            t_BufferedInputIterator::initialize(module);
            t_DocumentDictionary::initialize(module);
            t_DocumentValueSourceDictionary::initialize(module);
            t_FileDictionary::initialize(module);
            t_InMemorySorter::initialize(module);
            t_InputIterator::initialize(module);
            t_InputIterator$InputIteratorWrapper::initialize(module);
            t_Lookup::initialize(module);
            t_Lookup$LookupPriorityQueue::initialize(module);
            t_Lookup$LookupResult::initialize(module);
            t_SortedInputIterator::initialize(module);
            t_UnsortedInputIterator::initialize(module);
            analyzing::__initialize__(module);
            document::__initialize__(module);
            fst::__initialize__(module);
            tst::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/suggest/analyzing/AnalyzingInfixSuggester.h"
#include "org/apache/lucene/search/suggest/analyzing/AnalyzingSuggester.h"
#include "org/apache/lucene/search/suggest/analyzing/BlendedInfixSuggester.h"
#include "org/apache/lucene/search/suggest/analyzing/BlendedInfixSuggester$BlenderType.h"
#include "org/apache/lucene/search/suggest/analyzing/FSTUtil.h"
#include "org/apache/lucene/search/suggest/analyzing/FSTUtil$Path.h"
#include "org/apache/lucene/search/suggest/analyzing/FreeTextSuggester.h"
#include "org/apache/lucene/search/suggest/analyzing/FuzzySuggester.h"
#include "org/apache/lucene/search/suggest/analyzing/SuggestStopFilter.h"
#include "org/apache/lucene/search/suggest/analyzing/SuggestStopFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "analyzing");

              t_AnalyzingInfixSuggester::install(module);
              t_AnalyzingSuggester::install(module);
              t_BlendedInfixSuggester::install(module);
              t_BlendedInfixSuggester$BlenderType::install(module);
              t_FSTUtil::install(module);
              t_FSTUtil$Path::install(module);
              t_FreeTextSuggester::install(module);
              t_FuzzySuggester::install(module);
              t_SuggestStopFilter::install(module);
              t_SuggestStopFilterFactory::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "analyzing");

              t_AnalyzingInfixSuggester::initialize(module);
              t_AnalyzingSuggester::initialize(module);
              t_BlendedInfixSuggester::initialize(module);
              t_BlendedInfixSuggester$BlenderType::initialize(module);
              t_FSTUtil::initialize(module);
              t_FSTUtil$Path::initialize(module);
              t_FreeTextSuggester::initialize(module);
              t_FuzzySuggester::initialize(module);
              t_SuggestStopFilter::initialize(module);
              t_SuggestStopFilterFactory::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/suggest/document/Completion50PostingsFormat.h"
#include "org/apache/lucene/search/suggest/document/Completion84PostingsFormat.h"
#include "org/apache/lucene/search/suggest/document/Completion90PostingsFormat.h"
#include "org/apache/lucene/search/suggest/document/Completion912PostingsFormat.h"
#include "org/apache/lucene/search/suggest/document/Completion99PostingsFormat.h"
#include "org/apache/lucene/search/suggest/document/CompletionAnalyzer.h"
#include "org/apache/lucene/search/suggest/document/CompletionPostingsFormat.h"
#include "org/apache/lucene/search/suggest/document/CompletionPostingsFormat$FSTLoadMode.h"
#include "org/apache/lucene/search/suggest/document/CompletionQuery.h"
#include "org/apache/lucene/search/suggest/document/CompletionScorer.h"
#include "org/apache/lucene/search/suggest/document/CompletionTerms.h"
#include "org/apache/lucene/search/suggest/document/CompletionTokenStream.h"
#include "org/apache/lucene/search/suggest/document/CompletionWeight.h"
#include "org/apache/lucene/search/suggest/document/CompletionsTermsReader.h"
#include "org/apache/lucene/search/suggest/document/ContextQuery.h"
#include "org/apache/lucene/search/suggest/document/ContextSuggestField.h"
#include "org/apache/lucene/search/suggest/document/FuzzyCompletionQuery.h"
#include "org/apache/lucene/search/suggest/document/NRTSuggester.h"
#include "org/apache/lucene/search/suggest/document/PrefixCompletionQuery.h"
#include "org/apache/lucene/search/suggest/document/RegexCompletionQuery.h"
#include "org/apache/lucene/search/suggest/document/SuggestField.h"
#include "org/apache/lucene/search/suggest/document/SuggestIndexSearcher.h"
#include "org/apache/lucene/search/suggest/document/TopSuggestDocs.h"
#include "org/apache/lucene/search/suggest/document/TopSuggestDocs$SuggestScoreDoc.h"
#include "org/apache/lucene/search/suggest/document/TopSuggestDocsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace document {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "document");

              t_Completion50PostingsFormat::install(module);
              t_Completion84PostingsFormat::install(module);
              t_Completion90PostingsFormat::install(module);
              t_Completion912PostingsFormat::install(module);
              t_Completion99PostingsFormat::install(module);
              t_CompletionAnalyzer::install(module);
              t_CompletionPostingsFormat::install(module);
              t_CompletionPostingsFormat$FSTLoadMode::install(module);
              t_CompletionQuery::install(module);
              t_CompletionScorer::install(module);
              t_CompletionTerms::install(module);
              t_CompletionTokenStream::install(module);
              t_CompletionWeight::install(module);
              t_CompletionsTermsReader::install(module);
              t_ContextQuery::install(module);
              t_ContextSuggestField::install(module);
              t_FuzzyCompletionQuery::install(module);
              t_NRTSuggester::install(module);
              t_PrefixCompletionQuery::install(module);
              t_RegexCompletionQuery::install(module);
              t_SuggestField::install(module);
              t_SuggestIndexSearcher::install(module);
              t_TopSuggestDocs::install(module);
              t_TopSuggestDocs$SuggestScoreDoc::install(module);
              t_TopSuggestDocsCollector::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "document");

              t_Completion50PostingsFormat::initialize(module);
              t_Completion84PostingsFormat::initialize(module);
              t_Completion90PostingsFormat::initialize(module);
              t_Completion912PostingsFormat::initialize(module);
              t_Completion99PostingsFormat::initialize(module);
              t_CompletionAnalyzer::initialize(module);
              t_CompletionPostingsFormat::initialize(module);
              t_CompletionPostingsFormat$FSTLoadMode::initialize(module);
              t_CompletionQuery::initialize(module);
              t_CompletionScorer::initialize(module);
              t_CompletionTerms::initialize(module);
              t_CompletionTokenStream::initialize(module);
              t_CompletionWeight::initialize(module);
              t_CompletionsTermsReader::initialize(module);
              t_ContextQuery::initialize(module);
              t_ContextSuggestField::initialize(module);
              t_FuzzyCompletionQuery::initialize(module);
              t_NRTSuggester::initialize(module);
              t_PrefixCompletionQuery::initialize(module);
              t_RegexCompletionQuery::initialize(module);
              t_SuggestField::initialize(module);
              t_SuggestIndexSearcher::initialize(module);
              t_TopSuggestDocs::initialize(module);
              t_TopSuggestDocs$SuggestScoreDoc::initialize(module);
              t_TopSuggestDocsCollector::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/suggest/fst/BytesRefSorter.h"
#include "org/apache/lucene/search/suggest/fst/ExternalRefSorter.h"
#include "org/apache/lucene/search/suggest/fst/ExternalRefSorter$ByteSequenceIterator.h"
#include "org/apache/lucene/search/suggest/fst/FSTCompletion.h"
#include "org/apache/lucene/search/suggest/fst/FSTCompletion$Completion.h"
#include "org/apache/lucene/search/suggest/fst/FSTCompletionBuilder.h"
#include "org/apache/lucene/search/suggest/fst/FSTCompletionLookup.h"
#include "org/apache/lucene/search/suggest/fst/WFSTCompletionLookup.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace fst {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "fst");

              t_BytesRefSorter::install(module);
              t_ExternalRefSorter::install(module);
              t_ExternalRefSorter$ByteSequenceIterator::install(module);
              t_FSTCompletion::install(module);
              t_FSTCompletion$Completion::install(module);
              t_FSTCompletionBuilder::install(module);
              t_FSTCompletionLookup::install(module);
              t_WFSTCompletionLookup::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "fst");

              t_BytesRefSorter::initialize(module);
              t_ExternalRefSorter::initialize(module);
              t_ExternalRefSorter$ByteSequenceIterator::initialize(module);
              t_FSTCompletion::initialize(module);
              t_FSTCompletion$Completion::initialize(module);
              t_FSTCompletionBuilder::initialize(module);
              t_FSTCompletionLookup::initialize(module);
              t_WFSTCompletionLookup::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/suggest/tst/TSTAutocomplete.h"
#include "org/apache/lucene/search/suggest/tst/TSTLookup.h"
#include "org/apache/lucene/search/suggest/tst/TernaryTreeNode.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace tst {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "tst");

              t_TSTAutocomplete::install(module);
              t_TSTLookup::install(module);
              t_TernaryTreeNode::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.apache.lucene.search.suggest", "tst");

              t_TSTAutocomplete::initialize(module);
              t_TSTLookup::initialize(module);
              t_TernaryTreeNode::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/uhighlight/AnalysisOffsetStrategy.h"
#include "org/apache/lucene/search/uhighlight/CharArrayMatcher.h"
#include "org/apache/lucene/search/uhighlight/CustomSeparatorBreakIterator.h"
#include "org/apache/lucene/search/uhighlight/DefaultPassageFormatter.h"
#include "org/apache/lucene/search/uhighlight/FieldHighlighter.h"
#include "org/apache/lucene/search/uhighlight/FieldOffsetStrategy.h"
#include "org/apache/lucene/search/uhighlight/LabelledCharArrayMatcher.h"
#include "org/apache/lucene/search/uhighlight/LengthGoalBreakIterator.h"
#include "org/apache/lucene/search/uhighlight/MemoryIndexOffsetStrategy.h"
#include "org/apache/lucene/search/uhighlight/MultiFieldsOffsetStrategy.h"
#include "org/apache/lucene/search/uhighlight/NoOpOffsetStrategy.h"
#include "org/apache/lucene/search/uhighlight/OffsetsEnum.h"
#include "org/apache/lucene/search/uhighlight/OffsetsEnum$MultiOffsetsEnum.h"
#include "org/apache/lucene/search/uhighlight/OffsetsEnum$OfMatchesIterator.h"
#include "org/apache/lucene/search/uhighlight/OffsetsEnum$OfMatchesIteratorWithSubs.h"
#include "org/apache/lucene/search/uhighlight/OffsetsEnum$OfPostings.h"
#include "org/apache/lucene/search/uhighlight/OverlaySingleDocTermsLeafReader.h"
#include "org/apache/lucene/search/uhighlight/Passage.h"
#include "org/apache/lucene/search/uhighlight/PassageFormatter.h"
#include "org/apache/lucene/search/uhighlight/PassageScorer.h"
#include "org/apache/lucene/search/uhighlight/PhraseHelper.h"
#include "org/apache/lucene/search/uhighlight/PostingsOffsetStrategy.h"
#include "org/apache/lucene/search/uhighlight/PostingsWithTermVectorsOffsetStrategy.h"
#include "org/apache/lucene/search/uhighlight/SplittingBreakIterator.h"
#include "org/apache/lucene/search/uhighlight/TermVectorOffsetStrategy.h"
#include "org/apache/lucene/search/uhighlight/TokenStreamOffsetStrategy.h"
#include "org/apache/lucene/search/uhighlight/UHComponents.h"
#include "org/apache/lucene/search/uhighlight/UnifiedHighlighter.h"
#include "org/apache/lucene/search/uhighlight/UnifiedHighlighter$Builder.h"
#include "org/apache/lucene/search/uhighlight/UnifiedHighlighter$HighlightFlag.h"
#include "org/apache/lucene/search/uhighlight/UnifiedHighlighter$OffsetSource.h"
#include "org/apache/lucene/search/uhighlight/WholeBreakIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "uhighlight");

            t_AnalysisOffsetStrategy::install(module);
            t_CharArrayMatcher::install(module);
            t_CustomSeparatorBreakIterator::install(module);
            t_DefaultPassageFormatter::install(module);
            t_FieldHighlighter::install(module);
            t_FieldOffsetStrategy::install(module);
            t_LabelledCharArrayMatcher::install(module);
            t_LengthGoalBreakIterator::install(module);
            t_MemoryIndexOffsetStrategy::install(module);
            t_MultiFieldsOffsetStrategy::install(module);
            t_NoOpOffsetStrategy::install(module);
            t_OffsetsEnum::install(module);
            t_OffsetsEnum$MultiOffsetsEnum::install(module);
            t_OffsetsEnum$OfMatchesIterator::install(module);
            t_OffsetsEnum$OfMatchesIteratorWithSubs::install(module);
            t_OffsetsEnum$OfPostings::install(module);
            t_OverlaySingleDocTermsLeafReader::install(module);
            t_Passage::install(module);
            t_PassageFormatter::install(module);
            t_PassageScorer::install(module);
            t_PhraseHelper::install(module);
            t_PostingsOffsetStrategy::install(module);
            t_PostingsWithTermVectorsOffsetStrategy::install(module);
            t_SplittingBreakIterator::install(module);
            t_TermVectorOffsetStrategy::install(module);
            t_TokenStreamOffsetStrategy::install(module);
            t_UHComponents::install(module);
            t_UnifiedHighlighter::install(module);
            t_UnifiedHighlighter$Builder::install(module);
            t_UnifiedHighlighter$HighlightFlag::install(module);
            t_UnifiedHighlighter$OffsetSource::install(module);
            t_WholeBreakIterator::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "uhighlight");

            t_AnalysisOffsetStrategy::initialize(module);
            t_CharArrayMatcher::initialize(module);
            t_CustomSeparatorBreakIterator::initialize(module);
            t_DefaultPassageFormatter::initialize(module);
            t_FieldHighlighter::initialize(module);
            t_FieldOffsetStrategy::initialize(module);
            t_LabelledCharArrayMatcher::initialize(module);
            t_LengthGoalBreakIterator::initialize(module);
            t_MemoryIndexOffsetStrategy::initialize(module);
            t_MultiFieldsOffsetStrategy::initialize(module);
            t_NoOpOffsetStrategy::initialize(module);
            t_OffsetsEnum::initialize(module);
            t_OffsetsEnum$MultiOffsetsEnum::initialize(module);
            t_OffsetsEnum$OfMatchesIterator::initialize(module);
            t_OffsetsEnum$OfMatchesIteratorWithSubs::initialize(module);
            t_OffsetsEnum$OfPostings::initialize(module);
            t_OverlaySingleDocTermsLeafReader::initialize(module);
            t_Passage::initialize(module);
            t_PassageFormatter::initialize(module);
            t_PassageScorer::initialize(module);
            t_PhraseHelper::initialize(module);
            t_PostingsOffsetStrategy::initialize(module);
            t_PostingsWithTermVectorsOffsetStrategy::initialize(module);
            t_SplittingBreakIterator::initialize(module);
            t_TermVectorOffsetStrategy::initialize(module);
            t_TokenStreamOffsetStrategy::initialize(module);
            t_UHComponents::initialize(module);
            t_UnifiedHighlighter::initialize(module);
            t_UnifiedHighlighter$Builder::initialize(module);
            t_UnifiedHighlighter$HighlightFlag::initialize(module);
            t_UnifiedHighlighter$OffsetSource::initialize(module);
            t_WholeBreakIterator::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/search/vectorhighlight/BaseFragListBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/BaseFragmentsBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/BoundaryScanner.h"
#include "org/apache/lucene/search/vectorhighlight/BreakIteratorBoundaryScanner.h"
#include "org/apache/lucene/search/vectorhighlight/FastVectorHighlighter.h"
#include "org/apache/lucene/search/vectorhighlight/FieldFragList.h"
#include "org/apache/lucene/search/vectorhighlight/FieldFragList$WeightedFragInfo.h"
#include "org/apache/lucene/search/vectorhighlight/FieldFragList$WeightedFragInfo$SubInfo.h"
#include "org/apache/lucene/search/vectorhighlight/FieldPhraseList.h"
#include "org/apache/lucene/search/vectorhighlight/FieldPhraseList$WeightedPhraseInfo.h"
#include "org/apache/lucene/search/vectorhighlight/FieldPhraseList$WeightedPhraseInfo$Toffs.h"
#include "org/apache/lucene/search/vectorhighlight/FieldQuery.h"
#include "org/apache/lucene/search/vectorhighlight/FieldQuery$QueryPhraseMap.h"
#include "org/apache/lucene/search/vectorhighlight/FieldTermStack.h"
#include "org/apache/lucene/search/vectorhighlight/FieldTermStack$TermInfo.h"
#include "org/apache/lucene/search/vectorhighlight/FragListBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/FragmentsBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/ScoreOrderFragmentsBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/ScoreOrderFragmentsBuilder$ScoreComparator.h"
#include "org/apache/lucene/search/vectorhighlight/SimpleBoundaryScanner.h"
#include "org/apache/lucene/search/vectorhighlight/SimpleFieldFragList.h"
#include "org/apache/lucene/search/vectorhighlight/SimpleFragListBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/SimpleFragmentsBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/SingleFragListBuilder.h"
#include "org/apache/lucene/search/vectorhighlight/WeightedFieldFragList.h"
#include "org/apache/lucene/search/vectorhighlight/WeightedFragListBuilder.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "vectorhighlight");

            t_BaseFragListBuilder::install(module);
            t_BaseFragmentsBuilder::install(module);
            t_BoundaryScanner::install(module);
            t_BreakIteratorBoundaryScanner::install(module);
            t_FastVectorHighlighter::install(module);
            t_FieldFragList::install(module);
            t_FieldFragList$WeightedFragInfo::install(module);
            t_FieldFragList$WeightedFragInfo$SubInfo::install(module);
            t_FieldPhraseList::install(module);
            t_FieldPhraseList$WeightedPhraseInfo::install(module);
            t_FieldPhraseList$WeightedPhraseInfo$Toffs::install(module);
            t_FieldQuery::install(module);
            t_FieldQuery$QueryPhraseMap::install(module);
            t_FieldTermStack::install(module);
            t_FieldTermStack$TermInfo::install(module);
            t_FragListBuilder::install(module);
            t_FragmentsBuilder::install(module);
            t_ScoreOrderFragmentsBuilder::install(module);
            t_ScoreOrderFragmentsBuilder$ScoreComparator::install(module);
            t_SimpleBoundaryScanner::install(module);
            t_SimpleFieldFragList::install(module);
            t_SimpleFragListBuilder::install(module);
            t_SimpleFragmentsBuilder::install(module);
            t_SingleFragListBuilder::install(module);
            t_WeightedFieldFragList::install(module);
            t_WeightedFragListBuilder::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.search", "vectorhighlight");

            t_BaseFragListBuilder::initialize(module);
            t_BaseFragmentsBuilder::initialize(module);
            t_BoundaryScanner::initialize(module);
            t_BreakIteratorBoundaryScanner::initialize(module);
            t_FastVectorHighlighter::initialize(module);
            t_FieldFragList::initialize(module);
            t_FieldFragList$WeightedFragInfo::initialize(module);
            t_FieldFragList$WeightedFragInfo$SubInfo::initialize(module);
            t_FieldPhraseList::initialize(module);
            t_FieldPhraseList$WeightedPhraseInfo::initialize(module);
            t_FieldPhraseList$WeightedPhraseInfo$Toffs::initialize(module);
            t_FieldQuery::initialize(module);
            t_FieldQuery$QueryPhraseMap::initialize(module);
            t_FieldTermStack::initialize(module);
            t_FieldTermStack$TermInfo::initialize(module);
            t_FragListBuilder::initialize(module);
            t_FragmentsBuilder::initialize(module);
            t_ScoreOrderFragmentsBuilder::initialize(module);
            t_ScoreOrderFragmentsBuilder$ScoreComparator::initialize(module);
            t_SimpleBoundaryScanner::initialize(module);
            t_SimpleFieldFragList::initialize(module);
            t_SimpleFragListBuilder::initialize(module);
            t_SimpleFragmentsBuilder::initialize(module);
            t_SingleFragListBuilder::initialize(module);
            t_WeightedFieldFragList::initialize(module);
            t_WeightedFragListBuilder::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/spatial3d/Geo3DDocValuesField.h"
#include "org/apache/lucene/spatial3d/Geo3DPoint.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {

        namespace geom {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "spatial3d");

          t_Geo3DDocValuesField::install(module);
          t_Geo3DPoint::install(module);
          geom::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "spatial3d");

          t_Geo3DDocValuesField::initialize(module);
          t_Geo3DPoint::initialize(module);
          geom::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/spatial3d/geom/ArcDistance.h"
#include "org/apache/lucene/spatial3d/geom/BasePlanetObject.h"
#include "org/apache/lucene/spatial3d/geom/Bounded.h"
#include "org/apache/lucene/spatial3d/geom/Bounds.h"
#include "org/apache/lucene/spatial3d/geom/DistanceStyle.h"
#include "org/apache/lucene/spatial3d/geom/GeoArea.h"
#include "org/apache/lucene/spatial3d/geom/GeoAreaFactory.h"
#include "org/apache/lucene/spatial3d/geom/GeoAreaShape.h"
#include "org/apache/lucene/spatial3d/geom/GeoBBox.h"
#include "org/apache/lucene/spatial3d/geom/GeoBBoxFactory.h"
#include "org/apache/lucene/spatial3d/geom/GeoBaseAreaShape.h"
#include "org/apache/lucene/spatial3d/geom/GeoBaseBBox.h"
#include "org/apache/lucene/spatial3d/geom/GeoBaseBounds.h"
#include "org/apache/lucene/spatial3d/geom/GeoBaseCompositeAreaShape.h"
#include "org/apache/lucene/spatial3d/geom/GeoBaseCompositeMembershipShape.h"
#include "org/apache/lucene/spatial3d/geom/GeoBaseCompositeShape.h"
#include "org/apache/lucene/spatial3d/geom/GeoBaseDistanceShape.h"
#include "org/apache/lucene/spatial3d/geom/GeoBaseMembershipShape.h"
#include "org/apache/lucene/spatial3d/geom/GeoBaseShape.h"
#include "org/apache/lucene/spatial3d/geom/GeoBounds.h"
#include "org/apache/lucene/spatial3d/geom/GeoCircle.h"
#include "org/apache/lucene/spatial3d/geom/GeoCircleFactory.h"
#include "org/apache/lucene/spatial3d/geom/GeoCompositeAreaShape.h"
#include "org/apache/lucene/spatial3d/geom/GeoCompositeMembershipShape.h"
#include "org/apache/lucene/spatial3d/geom/GeoCompositePolygon.h"
#include "org/apache/lucene/spatial3d/geom/GeoDegenerateVerticalLine.h"
#include "org/apache/lucene/spatial3d/geom/GeoDistance.h"
#include "org/apache/lucene/spatial3d/geom/GeoDistanceShape.h"
#include "org/apache/lucene/spatial3d/geom/GeoMembershipShape.h"
#include "org/apache/lucene/spatial3d/geom/GeoOutsideDistance.h"
#include "org/apache/lucene/spatial3d/geom/GeoPath.h"
#include "org/apache/lucene/spatial3d/geom/GeoPathFactory.h"
#include "org/apache/lucene/spatial3d/geom/GeoPoint.h"
#include "org/apache/lucene/spatial3d/geom/GeoPointShape.h"
#include "org/apache/lucene/spatial3d/geom/GeoPointShapeFactory.h"
#include "org/apache/lucene/spatial3d/geom/GeoPolygon.h"
#include "org/apache/lucene/spatial3d/geom/GeoPolygonFactory.h"
#include "org/apache/lucene/spatial3d/geom/GeoPolygonFactory$PolygonDescription.h"
#include "org/apache/lucene/spatial3d/geom/GeoS2ShapeFactory.h"
#include "org/apache/lucene/spatial3d/geom/GeoShape.h"
#include "org/apache/lucene/spatial3d/geom/GeoSizeable.h"
#include "org/apache/lucene/spatial3d/geom/LatLonBounds.h"
#include "org/apache/lucene/spatial3d/geom/LinearDistance.h"
#include "org/apache/lucene/spatial3d/geom/LinearSquaredDistance.h"
#include "org/apache/lucene/spatial3d/geom/Membership.h"
#include "org/apache/lucene/spatial3d/geom/NormalDistance.h"
#include "org/apache/lucene/spatial3d/geom/NormalSquaredDistance.h"
#include "org/apache/lucene/spatial3d/geom/Plane.h"
#include "org/apache/lucene/spatial3d/geom/PlanetModel.h"
#include "org/apache/lucene/spatial3d/geom/PlanetModel$DocValueEncoder.h"
#include "org/apache/lucene/spatial3d/geom/PlanetObject.h"
#include "org/apache/lucene/spatial3d/geom/SerializableObject.h"
#include "org/apache/lucene/spatial3d/geom/SidedPlane.h"
#include "org/apache/lucene/spatial3d/geom/Tools.h"
#include "org/apache/lucene/spatial3d/geom/Vector.h"
#include "org/apache/lucene/spatial3d/geom/XYZBounds.h"
#include "org/apache/lucene/spatial3d/geom/XYZSolid.h"
#include "org/apache/lucene/spatial3d/geom/XYZSolidFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.spatial3d", "geom");

            t_ArcDistance::install(module);
            t_BasePlanetObject::install(module);
            t_Bounded::install(module);
            t_Bounds::install(module);
            t_DistanceStyle::install(module);
            t_GeoArea::install(module);
            t_GeoAreaFactory::install(module);
            t_GeoAreaShape::install(module);
            t_GeoBBox::install(module);
            t_GeoBBoxFactory::install(module);
            t_GeoBaseAreaShape::install(module);
            t_GeoBaseBBox::install(module);
            t_GeoBaseBounds::install(module);
            t_GeoBaseCompositeAreaShape::install(module);
            t_GeoBaseCompositeMembershipShape::install(module);
            t_GeoBaseCompositeShape::install(module);
            t_GeoBaseDistanceShape::install(module);
            t_GeoBaseMembershipShape::install(module);
            t_GeoBaseShape::install(module);
            t_GeoBounds::install(module);
            t_GeoCircle::install(module);
            t_GeoCircleFactory::install(module);
            t_GeoCompositeAreaShape::install(module);
            t_GeoCompositeMembershipShape::install(module);
            t_GeoCompositePolygon::install(module);
            t_GeoDegenerateVerticalLine::install(module);
            t_GeoDistance::install(module);
            t_GeoDistanceShape::install(module);
            t_GeoMembershipShape::install(module);
            t_GeoOutsideDistance::install(module);
            t_GeoPath::install(module);
            t_GeoPathFactory::install(module);
            t_GeoPoint::install(module);
            t_GeoPointShape::install(module);
            t_GeoPointShapeFactory::install(module);
            t_GeoPolygon::install(module);
            t_GeoPolygonFactory::install(module);
            t_GeoPolygonFactory$PolygonDescription::install(module);
            t_GeoS2ShapeFactory::install(module);
            t_GeoShape::install(module);
            t_GeoSizeable::install(module);
            t_LatLonBounds::install(module);
            t_LinearDistance::install(module);
            t_LinearSquaredDistance::install(module);
            t_Membership::install(module);
            t_NormalDistance::install(module);
            t_NormalSquaredDistance::install(module);
            t_Plane::install(module);
            t_PlanetModel::install(module);
            t_PlanetModel$DocValueEncoder::install(module);
            t_PlanetObject::install(module);
            t_SerializableObject::install(module);
            t_SidedPlane::install(module);
            t_Tools::install(module);
            t_Vector::install(module);
            t_XYZBounds::install(module);
            t_XYZSolid::install(module);
            t_XYZSolidFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.spatial3d", "geom");

            t_ArcDistance::initialize(module);
            t_BasePlanetObject::initialize(module);
            t_Bounded::initialize(module);
            t_Bounds::initialize(module);
            t_DistanceStyle::initialize(module);
            t_GeoArea::initialize(module);
            t_GeoAreaFactory::initialize(module);
            t_GeoAreaShape::initialize(module);
            t_GeoBBox::initialize(module);
            t_GeoBBoxFactory::initialize(module);
            t_GeoBaseAreaShape::initialize(module);
            t_GeoBaseBBox::initialize(module);
            t_GeoBaseBounds::initialize(module);
            t_GeoBaseCompositeAreaShape::initialize(module);
            t_GeoBaseCompositeMembershipShape::initialize(module);
            t_GeoBaseCompositeShape::initialize(module);
            t_GeoBaseDistanceShape::initialize(module);
            t_GeoBaseMembershipShape::initialize(module);
            t_GeoBaseShape::initialize(module);
            t_GeoBounds::initialize(module);
            t_GeoCircle::initialize(module);
            t_GeoCircleFactory::initialize(module);
            t_GeoCompositeAreaShape::initialize(module);
            t_GeoCompositeMembershipShape::initialize(module);
            t_GeoCompositePolygon::initialize(module);
            t_GeoDegenerateVerticalLine::initialize(module);
            t_GeoDistance::initialize(module);
            t_GeoDistanceShape::initialize(module);
            t_GeoMembershipShape::initialize(module);
            t_GeoOutsideDistance::initialize(module);
            t_GeoPath::initialize(module);
            t_GeoPathFactory::initialize(module);
            t_GeoPoint::initialize(module);
            t_GeoPointShape::initialize(module);
            t_GeoPointShapeFactory::initialize(module);
            t_GeoPolygon::initialize(module);
            t_GeoPolygonFactory::initialize(module);
            t_GeoPolygonFactory$PolygonDescription::initialize(module);
            t_GeoS2ShapeFactory::initialize(module);
            t_GeoShape::initialize(module);
            t_GeoSizeable::initialize(module);
            t_LatLonBounds::initialize(module);
            t_LinearDistance::initialize(module);
            t_LinearSquaredDistance::initialize(module);
            t_Membership::initialize(module);
            t_NormalDistance::initialize(module);
            t_NormalSquaredDistance::initialize(module);
            t_Plane::initialize(module);
            t_PlanetModel::initialize(module);
            t_PlanetModel$DocValueEncoder::initialize(module);
            t_PlanetObject::initialize(module);
            t_SerializableObject::initialize(module);
            t_SidedPlane::initialize(module);
            t_Tools::initialize(module);
            t_Vector::initialize(module);
            t_XYZBounds::initialize(module);
            t_XYZSolid::initialize(module);
            t_XYZSolidFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/store/AlreadyClosedException.h"
#include "org/apache/lucene/store/BaseDirectory.h"
#include "org/apache/lucene/store/BufferedChecksum.h"
#include "org/apache/lucene/store/BufferedChecksumIndexInput.h"
#include "org/apache/lucene/store/BufferedIndexInput.h"
#include "org/apache/lucene/store/ByteArrayDataInput.h"
#include "org/apache/lucene/store/ByteArrayDataOutput.h"
#include "org/apache/lucene/store/ByteBuffersDataInput.h"
#include "org/apache/lucene/store/ByteBuffersDataOutput.h"
#include "org/apache/lucene/store/ByteBuffersDataOutput$ByteBufferRecycler.h"
#include "org/apache/lucene/store/ByteBuffersDirectory.h"
#include "org/apache/lucene/store/ByteBuffersIndexInput.h"
#include "org/apache/lucene/store/ByteBuffersIndexOutput.h"
#include "org/apache/lucene/store/ChecksumIndexInput.h"
#include "org/apache/lucene/store/DataInput.h"
#include "org/apache/lucene/store/DataOutput.h"
#include "org/apache/lucene/store/Directory.h"
#include "org/apache/lucene/store/FSDirectory.h"
#include "org/apache/lucene/store/FSLockFactory.h"
#include "org/apache/lucene/store/FileSwitchDirectory.h"
#include "org/apache/lucene/store/FilterDirectory.h"
#include "org/apache/lucene/store/FilterIndexInput.h"
#include "org/apache/lucene/store/FilterIndexOutput.h"
#include "org/apache/lucene/store/FlushInfo.h"
#include "org/apache/lucene/store/IOContext.h"
#include "org/apache/lucene/store/IOContext$Context.h"
#include "org/apache/lucene/store/IndexInput.h"
#include "org/apache/lucene/store/IndexOutput.h"
#include "org/apache/lucene/store/InputStreamDataInput.h"
#include "org/apache/lucene/store/Lock.h"
#include "org/apache/lucene/store/LockFactory.h"
#include "org/apache/lucene/store/LockObtainFailedException.h"
#include "org/apache/lucene/store/LockReleaseFailedException.h"
#include "org/apache/lucene/store/LockStressTest.h"
#include "org/apache/lucene/store/LockValidatingDirectoryWrapper.h"
#include "org/apache/lucene/store/LockVerifyServer.h"
#include "org/apache/lucene/store/MMapDirectory.h"
#include "org/apache/lucene/store/MemorySegmentAccessInput.h"
#include "org/apache/lucene/store/MergeInfo.h"
#include "org/apache/lucene/store/NIOFSDirectory.h"
#include "org/apache/lucene/store/NRTCachingDirectory.h"
#include "org/apache/lucene/store/NativeFSLockFactory.h"
#include "org/apache/lucene/store/NoLockFactory.h"
#include "org/apache/lucene/store/OutputStreamDataOutput.h"
#include "org/apache/lucene/store/OutputStreamIndexOutput.h"
#include "org/apache/lucene/store/RandomAccessInput.h"
#include "org/apache/lucene/store/RateLimitedIndexOutput.h"
#include "org/apache/lucene/store/RateLimiter.h"
#include "org/apache/lucene/store/RateLimiter$SimpleRateLimiter.h"
#include "org/apache/lucene/store/ReadAdvice.h"
#include "org/apache/lucene/store/SimpleFSLockFactory.h"
#include "org/apache/lucene/store/SingleInstanceLockFactory.h"
#include "org/apache/lucene/store/SleepingLockWrapper.h"
#include "org/apache/lucene/store/TrackingDirectoryWrapper.h"
#include "org/apache/lucene/store/VerifyingLockFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "store");

          t_AlreadyClosedException::install(module);
          t_BaseDirectory::install(module);
          t_BufferedChecksum::install(module);
          t_BufferedChecksumIndexInput::install(module);
          t_BufferedIndexInput::install(module);
          t_ByteArrayDataInput::install(module);
          t_ByteArrayDataOutput::install(module);
          t_ByteBuffersDataInput::install(module);
          t_ByteBuffersDataOutput::install(module);
          t_ByteBuffersDataOutput$ByteBufferRecycler::install(module);
          t_ByteBuffersDirectory::install(module);
          t_ByteBuffersIndexInput::install(module);
          t_ByteBuffersIndexOutput::install(module);
          t_ChecksumIndexInput::install(module);
          t_DataInput::install(module);
          t_DataOutput::install(module);
          t_Directory::install(module);
          t_FSDirectory::install(module);
          t_FSLockFactory::install(module);
          t_FileSwitchDirectory::install(module);
          t_FilterDirectory::install(module);
          t_FilterIndexInput::install(module);
          t_FilterIndexOutput::install(module);
          t_FlushInfo::install(module);
          t_IOContext::install(module);
          t_IOContext$Context::install(module);
          t_IndexInput::install(module);
          t_IndexOutput::install(module);
          t_InputStreamDataInput::install(module);
          t_Lock::install(module);
          t_LockFactory::install(module);
          t_LockObtainFailedException::install(module);
          t_LockReleaseFailedException::install(module);
          t_LockStressTest::install(module);
          t_LockValidatingDirectoryWrapper::install(module);
          t_LockVerifyServer::install(module);
          t_MMapDirectory::install(module);
          t_MemorySegmentAccessInput::install(module);
          t_MergeInfo::install(module);
          t_NIOFSDirectory::install(module);
          t_NRTCachingDirectory::install(module);
          t_NativeFSLockFactory::install(module);
          t_NoLockFactory::install(module);
          t_OutputStreamDataOutput::install(module);
          t_OutputStreamIndexOutput::install(module);
          t_RandomAccessInput::install(module);
          t_RateLimitedIndexOutput::install(module);
          t_RateLimiter::install(module);
          t_RateLimiter$SimpleRateLimiter::install(module);
          t_ReadAdvice::install(module);
          t_SimpleFSLockFactory::install(module);
          t_SingleInstanceLockFactory::install(module);
          t_SleepingLockWrapper::install(module);
          t_TrackingDirectoryWrapper::install(module);
          t_VerifyingLockFactory::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "store");

          t_AlreadyClosedException::initialize(module);
          t_BaseDirectory::initialize(module);
          t_BufferedChecksum::initialize(module);
          t_BufferedChecksumIndexInput::initialize(module);
          t_BufferedIndexInput::initialize(module);
          t_ByteArrayDataInput::initialize(module);
          t_ByteArrayDataOutput::initialize(module);
          t_ByteBuffersDataInput::initialize(module);
          t_ByteBuffersDataOutput::initialize(module);
          t_ByteBuffersDataOutput$ByteBufferRecycler::initialize(module);
          t_ByteBuffersDirectory::initialize(module);
          t_ByteBuffersIndexInput::initialize(module);
          t_ByteBuffersIndexOutput::initialize(module);
          t_ChecksumIndexInput::initialize(module);
          t_DataInput::initialize(module);
          t_DataOutput::initialize(module);
          t_Directory::initialize(module);
          t_FSDirectory::initialize(module);
          t_FSLockFactory::initialize(module);
          t_FileSwitchDirectory::initialize(module);
          t_FilterDirectory::initialize(module);
          t_FilterIndexInput::initialize(module);
          t_FilterIndexOutput::initialize(module);
          t_FlushInfo::initialize(module);
          t_IOContext::initialize(module);
          t_IOContext$Context::initialize(module);
          t_IndexInput::initialize(module);
          t_IndexOutput::initialize(module);
          t_InputStreamDataInput::initialize(module);
          t_Lock::initialize(module);
          t_LockFactory::initialize(module);
          t_LockObtainFailedException::initialize(module);
          t_LockReleaseFailedException::initialize(module);
          t_LockStressTest::initialize(module);
          t_LockValidatingDirectoryWrapper::initialize(module);
          t_LockVerifyServer::initialize(module);
          t_MMapDirectory::initialize(module);
          t_MemorySegmentAccessInput::initialize(module);
          t_MergeInfo::initialize(module);
          t_NIOFSDirectory::initialize(module);
          t_NRTCachingDirectory::initialize(module);
          t_NativeFSLockFactory::initialize(module);
          t_NoLockFactory::initialize(module);
          t_OutputStreamDataOutput::initialize(module);
          t_OutputStreamIndexOutput::initialize(module);
          t_RandomAccessInput::initialize(module);
          t_RateLimitedIndexOutput::initialize(module);
          t_RateLimiter::initialize(module);
          t_RateLimiter$SimpleRateLimiter::initialize(module);
          t_ReadAdvice::initialize(module);
          t_SimpleFSLockFactory::initialize(module);
          t_SingleInstanceLockFactory::initialize(module);
          t_SleepingLockWrapper::initialize(module);
          t_TrackingDirectoryWrapper::initialize(module);
          t_VerifyingLockFactory::initialize(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/util/Accountable.h"
#include "org/apache/lucene/util/Accountables.h"
#include "org/apache/lucene/util/ArrayUtil.h"
#include "org/apache/lucene/util/ArrayUtil$ByteArrayComparator.h"
#include "org/apache/lucene/util/Attribute.h"
#include "org/apache/lucene/util/AttributeFactory.h"
#include "org/apache/lucene/util/AttributeFactory$StaticImplementationAttributeFactory.h"
#include "org/apache/lucene/util/AttributeImpl.h"
#include "org/apache/lucene/util/AttributeReflector.h"
#include "org/apache/lucene/util/AttributeSource.h"
#include "org/apache/lucene/util/AttributeSource$State.h"
#include "org/apache/lucene/util/BitDocIdSet.h"
#include "org/apache/lucene/util/BitSet.h"
#include "org/apache/lucene/util/BitSetIterator.h"
#include "org/apache/lucene/util/BitUtil.h"
#include "org/apache/lucene/util/Bits.h"
#include "org/apache/lucene/util/Bits$MatchAllBits.h"
#include "org/apache/lucene/util/Bits$MatchNoBits.h"
#include "org/apache/lucene/util/ByteBlockPool.h"
#include "org/apache/lucene/util/ByteBlockPool$Allocator.h"
#include "org/apache/lucene/util/ByteBlockPool$DirectAllocator.h"
#include "org/apache/lucene/util/ByteBlockPool$DirectTrackingAllocator.h"
#include "org/apache/lucene/util/BytesRef.h"
#include "org/apache/lucene/util/BytesRefArray.h"
#include "org/apache/lucene/util/BytesRefArray$IndexedBytesRefIterator.h"
#include "org/apache/lucene/util/BytesRefArray$SortState.h"
#include "org/apache/lucene/util/BytesRefBlockPool.h"
#include "org/apache/lucene/util/BytesRefBuilder.h"
#include "org/apache/lucene/util/BytesRefComparator.h"
#include "org/apache/lucene/util/BytesRefHash.h"
#include "org/apache/lucene/util/BytesRefHash$BytesStartArray.h"
#include "org/apache/lucene/util/BytesRefHash$DirectBytesStartArray.h"
#include "org/apache/lucene/util/BytesRefHash$MaxBytesLengthExceededException.h"
#include "org/apache/lucene/util/BytesRefIterator.h"
#include "org/apache/lucene/util/CharsRef.h"
#include "org/apache/lucene/util/CharsRefBuilder.h"
#include "org/apache/lucene/util/ClassLoaderUtils.h"
#include "org/apache/lucene/util/ClasspathResourceLoader.h"
#include "org/apache/lucene/util/CloseableThreadLocal.h"
#include "org/apache/lucene/util/CollectionUtil.h"
#include "org/apache/lucene/util/CommandLineUtil.h"
#include "org/apache/lucene/util/Constants.h"
#include "org/apache/lucene/util/Counter.h"
#include "org/apache/lucene/util/DocBaseBitSetIterator.h"
#include "org/apache/lucene/util/DocIdSetBuilder.h"
#include "org/apache/lucene/util/DocIdSetBuilder$BulkAdder.h"
#include "org/apache/lucene/util/FileDeleter.h"
#include "org/apache/lucene/util/FileDeleter$MsgType.h"
#include "org/apache/lucene/util/FileDeleter$RefCount.h"
#include "org/apache/lucene/util/FilterIterator.h"
#include "org/apache/lucene/util/FixedBitSet.h"
#include "org/apache/lucene/util/FrequencyTrackingRingBuffer.h"
#include "org/apache/lucene/util/GroupVIntUtil.h"
#include "org/apache/lucene/util/GroupVIntUtil$IntReader.h"
#include "org/apache/lucene/util/IOBooleanSupplier.h"
#include "org/apache/lucene/util/IOConsumer.h"
#include "org/apache/lucene/util/IOFunction.h"
#include "org/apache/lucene/util/IORunnable.h"
#include "org/apache/lucene/util/IOSupplier.h"
#include "org/apache/lucene/util/IOUtils.h"
#include "org/apache/lucene/util/IgnoreRandomChains.h"
#include "org/apache/lucene/util/InPlaceMergeSorter.h"
#include "org/apache/lucene/util/InfoStream.h"
#include "org/apache/lucene/util/IntBlockPool.h"
#include "org/apache/lucene/util/IntBlockPool$Allocator.h"
#include "org/apache/lucene/util/IntBlockPool$DirectAllocator.h"
#include "org/apache/lucene/util/IntroSelector.h"
#include "org/apache/lucene/util/IntroSorter.h"
#include "org/apache/lucene/util/IntsRef.h"
#include "org/apache/lucene/util/IntsRefBuilder.h"
#include "org/apache/lucene/util/JavaLoggingInfoStream.h"
#include "org/apache/lucene/util/LSBRadixSorter.h"
#include "org/apache/lucene/util/LongBitSet.h"
#include "org/apache/lucene/util/LongHeap.h"
#include "org/apache/lucene/util/LongValues.h"
#include "org/apache/lucene/util/LongsRef.h"
#include "org/apache/lucene/util/MSBRadixSorter.h"
#include "org/apache/lucene/util/MapOfSets.h"
#include "org/apache/lucene/util/MathUtil.h"
#include "org/apache/lucene/util/MergedIterator.h"
#include "org/apache/lucene/util/ModuleResourceLoader.h"
#include "org/apache/lucene/util/NamedSPILoader.h"
#include "org/apache/lucene/util/NamedSPILoader$NamedSPI.h"
#include "org/apache/lucene/util/NamedThreadFactory.h"
#include "org/apache/lucene/util/NotDocIdSet.h"
#include "org/apache/lucene/util/NumericUtils.h"
#include "org/apache/lucene/util/OfflineSorter.h"
#include "org/apache/lucene/util/OfflineSorter$BufferSize.h"
#include "org/apache/lucene/util/OfflineSorter$ByteSequencesReader.h"
#include "org/apache/lucene/util/OfflineSorter$ByteSequencesWriter.h"
#include "org/apache/lucene/util/OfflineSorter$SortInfo.h"
#include "org/apache/lucene/util/PagedBytes.h"
#include "org/apache/lucene/util/PagedBytes$PagedBytesDataInput.h"
#include "org/apache/lucene/util/PagedBytes$PagedBytesDataOutput.h"
#include "org/apache/lucene/util/PagedBytes$Reader.h"
#include "org/apache/lucene/util/PrintStreamInfoStream.h"
#include "org/apache/lucene/util/PriorityQueue.h"
#include "org/apache/lucene/util/QueryBuilder.h"
#include "org/apache/lucene/util/QueryBuilder$TermAndBoost.h"
#include "org/apache/lucene/util/RadixSelector.h"
#include "org/apache/lucene/util/RamUsageEstimator.h"
#include "org/apache/lucene/util/RecyclingByteBlockAllocator.h"
#include "org/apache/lucene/util/RecyclingIntBlockAllocator.h"
#include "org/apache/lucene/util/RefCount.h"
#include "org/apache/lucene/util/ResourceLoader.h"
#include "org/apache/lucene/util/ResourceLoaderAware.h"
#include "org/apache/lucene/util/RoaringDocIdSet.h"
#include "org/apache/lucene/util/RoaringDocIdSet$Builder.h"
#include "org/apache/lucene/util/RollingBuffer.h"
#include "org/apache/lucene/util/RollingBuffer$Resettable.h"
#include "org/apache/lucene/util/SameThreadExecutorService.h"
#include "org/apache/lucene/util/Selector.h"
#include "org/apache/lucene/util/SentinelIntSet.h"
#include "org/apache/lucene/util/SetOnce.h"
#include "org/apache/lucene/util/SetOnce$AlreadySetException.h"
#include "org/apache/lucene/util/SloppyMath.h"
#include "org/apache/lucene/util/SmallFloat.h"
#include "org/apache/lucene/util/Sorter.h"
#include "org/apache/lucene/util/SparseFixedBitSet.h"
#include "org/apache/lucene/util/StableMSBRadixSorter.h"
#include "org/apache/lucene/util/StringHelper.h"
#include "org/apache/lucene/util/StringSorter.h"
#include "org/apache/lucene/util/SuppressForbidden.h"
#include "org/apache/lucene/util/TermAndVector.h"
#include "org/apache/lucene/util/ThreadInterruptedException.h"
#include "org/apache/lucene/util/TimSorter.h"
#include "org/apache/lucene/util/ToStringUtils.h"
#include "org/apache/lucene/util/UnicodeUtil.h"
#include "org/apache/lucene/util/UnicodeUtil$UTF8CodePoint.h"
#include "org/apache/lucene/util/Unwrappable.h"
#include "org/apache/lucene/util/VectorUtil.h"
#include "org/apache/lucene/util/Version.h"
#include "org/apache/lucene/util/VirtualMethod.h"
#include "org/apache/lucene/util/WeakIdentityMap.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        namespace automaton {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace bkd {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace compress {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace fst {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace graph {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace hnsw {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace mutable$ {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace packed {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace quantization {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "util");

          t_Accountable::install(module);
          t_Accountables::install(module);
          t_ArrayUtil::install(module);
          t_ArrayUtil$ByteArrayComparator::install(module);
          t_Attribute::install(module);
          t_AttributeFactory::install(module);
          t_AttributeFactory$StaticImplementationAttributeFactory::install(module);
          t_AttributeImpl::install(module);
          t_AttributeReflector::install(module);
          t_AttributeSource::install(module);
          t_AttributeSource$State::install(module);
          t_BitDocIdSet::install(module);
          t_BitSet::install(module);
          t_BitSetIterator::install(module);
          t_BitUtil::install(module);
          t_Bits::install(module);
          t_Bits$MatchAllBits::install(module);
          t_Bits$MatchNoBits::install(module);
          t_ByteBlockPool::install(module);
          t_ByteBlockPool$Allocator::install(module);
          t_ByteBlockPool$DirectAllocator::install(module);
          t_ByteBlockPool$DirectTrackingAllocator::install(module);
          t_BytesRef::install(module);
          t_BytesRefArray::install(module);
          t_BytesRefArray$IndexedBytesRefIterator::install(module);
          t_BytesRefArray$SortState::install(module);
          t_BytesRefBlockPool::install(module);
          t_BytesRefBuilder::install(module);
          t_BytesRefComparator::install(module);
          t_BytesRefHash::install(module);
          t_BytesRefHash$BytesStartArray::install(module);
          t_BytesRefHash$DirectBytesStartArray::install(module);
          t_BytesRefHash$MaxBytesLengthExceededException::install(module);
          t_BytesRefIterator::install(module);
          t_CharsRef::install(module);
          t_CharsRefBuilder::install(module);
          t_ClassLoaderUtils::install(module);
          t_ClasspathResourceLoader::install(module);
          t_CloseableThreadLocal::install(module);
          t_CollectionUtil::install(module);
          t_CommandLineUtil::install(module);
          t_Constants::install(module);
          t_Counter::install(module);
          t_DocBaseBitSetIterator::install(module);
          t_DocIdSetBuilder::install(module);
          t_DocIdSetBuilder$BulkAdder::install(module);
          t_FileDeleter::install(module);
          t_FileDeleter$MsgType::install(module);
          t_FileDeleter$RefCount::install(module);
          t_FilterIterator::install(module);
          t_FixedBitSet::install(module);
          t_FrequencyTrackingRingBuffer::install(module);
          t_GroupVIntUtil::install(module);
          t_GroupVIntUtil$IntReader::install(module);
          t_IOBooleanSupplier::install(module);
          t_IOConsumer::install(module);
          t_IOFunction::install(module);
          t_IORunnable::install(module);
          t_IOSupplier::install(module);
          t_IOUtils::install(module);
          t_IgnoreRandomChains::install(module);
          t_InPlaceMergeSorter::install(module);
          t_InfoStream::install(module);
          t_IntBlockPool::install(module);
          t_IntBlockPool$Allocator::install(module);
          t_IntBlockPool$DirectAllocator::install(module);
          t_IntroSelector::install(module);
          t_IntroSorter::install(module);
          t_IntsRef::install(module);
          t_IntsRefBuilder::install(module);
          t_JavaLoggingInfoStream::install(module);
          t_LSBRadixSorter::install(module);
          t_LongBitSet::install(module);
          t_LongHeap::install(module);
          t_LongValues::install(module);
          t_LongsRef::install(module);
          t_MSBRadixSorter::install(module);
          t_MapOfSets::install(module);
          t_MathUtil::install(module);
          t_MergedIterator::install(module);
          t_ModuleResourceLoader::install(module);
          t_NamedSPILoader::install(module);
          t_NamedSPILoader$NamedSPI::install(module);
          t_NamedThreadFactory::install(module);
          t_NotDocIdSet::install(module);
          t_NumericUtils::install(module);
          t_OfflineSorter::install(module);
          t_OfflineSorter$BufferSize::install(module);
          t_OfflineSorter$ByteSequencesReader::install(module);
          t_OfflineSorter$ByteSequencesWriter::install(module);
          t_OfflineSorter$SortInfo::install(module);
          t_PagedBytes::install(module);
          t_PagedBytes$PagedBytesDataInput::install(module);
          t_PagedBytes$PagedBytesDataOutput::install(module);
          t_PagedBytes$Reader::install(module);
          t_PrintStreamInfoStream::install(module);
          t_PriorityQueue::install(module);
          t_QueryBuilder::install(module);
          t_QueryBuilder$TermAndBoost::install(module);
          t_RadixSelector::install(module);
          t_RamUsageEstimator::install(module);
          t_RecyclingByteBlockAllocator::install(module);
          t_RecyclingIntBlockAllocator::install(module);
          t_RefCount::install(module);
          t_ResourceLoader::install(module);
          t_ResourceLoaderAware::install(module);
          t_RoaringDocIdSet::install(module);
          t_RoaringDocIdSet$Builder::install(module);
          t_RollingBuffer::install(module);
          t_RollingBuffer$Resettable::install(module);
          t_SameThreadExecutorService::install(module);
          t_Selector::install(module);
          t_SentinelIntSet::install(module);
          t_SetOnce::install(module);
          t_SetOnce$AlreadySetException::install(module);
          t_SloppyMath::install(module);
          t_SmallFloat::install(module);
          t_Sorter::install(module);
          t_SparseFixedBitSet::install(module);
          t_StableMSBRadixSorter::install(module);
          t_StringHelper::install(module);
          t_StringSorter::install(module);
          t_SuppressForbidden::install(module);
          t_TermAndVector::install(module);
          t_ThreadInterruptedException::install(module);
          t_TimSorter::install(module);
          t_ToStringUtils::install(module);
          t_UnicodeUtil::install(module);
          t_UnicodeUtil$UTF8CodePoint::install(module);
          t_Unwrappable::install(module);
          t_VectorUtil::install(module);
          t_Version::install(module);
          t_VirtualMethod::install(module);
          t_WeakIdentityMap::install(module);
          automaton::__install__(module);
          bkd::__install__(module);
          compress::__install__(module);
          fst::__install__(module);
          graph::__install__(module);
          hnsw::__install__(module);
          mutable$::__install__(module);
          packed::__install__(module);
          quantization::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.lucene", "util");

          t_Accountable::initialize(module);
          t_Accountables::initialize(module);
          t_ArrayUtil::initialize(module);
          t_ArrayUtil$ByteArrayComparator::initialize(module);
          t_Attribute::initialize(module);
          t_AttributeFactory::initialize(module);
          t_AttributeFactory$StaticImplementationAttributeFactory::initialize(module);
          t_AttributeImpl::initialize(module);
          t_AttributeReflector::initialize(module);
          t_AttributeSource::initialize(module);
          t_AttributeSource$State::initialize(module);
          t_BitDocIdSet::initialize(module);
          t_BitSet::initialize(module);
          t_BitSetIterator::initialize(module);
          t_BitUtil::initialize(module);
          t_Bits::initialize(module);
          t_Bits$MatchAllBits::initialize(module);
          t_Bits$MatchNoBits::initialize(module);
          t_ByteBlockPool::initialize(module);
          t_ByteBlockPool$Allocator::initialize(module);
          t_ByteBlockPool$DirectAllocator::initialize(module);
          t_ByteBlockPool$DirectTrackingAllocator::initialize(module);
          t_BytesRef::initialize(module);
          t_BytesRefArray::initialize(module);
          t_BytesRefArray$IndexedBytesRefIterator::initialize(module);
          t_BytesRefArray$SortState::initialize(module);
          t_BytesRefBlockPool::initialize(module);
          t_BytesRefBuilder::initialize(module);
          t_BytesRefComparator::initialize(module);
          t_BytesRefHash::initialize(module);
          t_BytesRefHash$BytesStartArray::initialize(module);
          t_BytesRefHash$DirectBytesStartArray::initialize(module);
          t_BytesRefHash$MaxBytesLengthExceededException::initialize(module);
          t_BytesRefIterator::initialize(module);
          t_CharsRef::initialize(module);
          t_CharsRefBuilder::initialize(module);
          t_ClassLoaderUtils::initialize(module);
          t_ClasspathResourceLoader::initialize(module);
          t_CloseableThreadLocal::initialize(module);
          t_CollectionUtil::initialize(module);
          t_CommandLineUtil::initialize(module);
          t_Constants::initialize(module);
          t_Counter::initialize(module);
          t_DocBaseBitSetIterator::initialize(module);
          t_DocIdSetBuilder::initialize(module);
          t_DocIdSetBuilder$BulkAdder::initialize(module);
          t_FileDeleter::initialize(module);
          t_FileDeleter$MsgType::initialize(module);
          t_FileDeleter$RefCount::initialize(module);
          t_FilterIterator::initialize(module);
          t_FixedBitSet::initialize(module);
          t_FrequencyTrackingRingBuffer::initialize(module);
          t_GroupVIntUtil::initialize(module);
          t_GroupVIntUtil$IntReader::initialize(module);
          t_IOBooleanSupplier::initialize(module);
          t_IOConsumer::initialize(module);
          t_IOFunction::initialize(module);
          t_IORunnable::initialize(module);
          t_IOSupplier::initialize(module);
          t_IOUtils::initialize(module);
          t_IgnoreRandomChains::initialize(module);
          t_InPlaceMergeSorter::initialize(module);
          t_InfoStream::initialize(module);
          t_IntBlockPool::initialize(module);
          t_IntBlockPool$Allocator::initialize(module);
          t_IntBlockPool$DirectAllocator::initialize(module);
          t_IntroSelector::initialize(module);
          t_IntroSorter::initialize(module);
          t_IntsRef::initialize(module);
          t_IntsRefBuilder::initialize(module);
          t_JavaLoggingInfoStream::initialize(module);
          t_LSBRadixSorter::initialize(module);
          t_LongBitSet::initialize(module);
          t_LongHeap::initialize(module);
          t_LongValues::initialize(module);
          t_LongsRef::initialize(module);
          t_MSBRadixSorter::initialize(module);
          t_MapOfSets::initialize(module);
          t_MathUtil::initialize(module);
          t_MergedIterator::initialize(module);
          t_ModuleResourceLoader::initialize(module);
          t_NamedSPILoader::initialize(module);
          t_NamedSPILoader$NamedSPI::initialize(module);
          t_NamedThreadFactory::initialize(module);
          t_NotDocIdSet::initialize(module);
          t_NumericUtils::initialize(module);
          t_OfflineSorter::initialize(module);
          t_OfflineSorter$BufferSize::initialize(module);
          t_OfflineSorter$ByteSequencesReader::initialize(module);
          t_OfflineSorter$ByteSequencesWriter::initialize(module);
          t_OfflineSorter$SortInfo::initialize(module);
          t_PagedBytes::initialize(module);
          t_PagedBytes$PagedBytesDataInput::initialize(module);
          t_PagedBytes$PagedBytesDataOutput::initialize(module);
          t_PagedBytes$Reader::initialize(module);
          t_PrintStreamInfoStream::initialize(module);
          t_PriorityQueue::initialize(module);
          t_QueryBuilder::initialize(module);
          t_QueryBuilder$TermAndBoost::initialize(module);
          t_RadixSelector::initialize(module);
          t_RamUsageEstimator::initialize(module);
          t_RecyclingByteBlockAllocator::initialize(module);
          t_RecyclingIntBlockAllocator::initialize(module);
          t_RefCount::initialize(module);
          t_ResourceLoader::initialize(module);
          t_ResourceLoaderAware::initialize(module);
          t_RoaringDocIdSet::initialize(module);
          t_RoaringDocIdSet$Builder::initialize(module);
          t_RollingBuffer::initialize(module);
          t_RollingBuffer$Resettable::initialize(module);
          t_SameThreadExecutorService::initialize(module);
          t_Selector::initialize(module);
          t_SentinelIntSet::initialize(module);
          t_SetOnce::initialize(module);
          t_SetOnce$AlreadySetException::initialize(module);
          t_SloppyMath::initialize(module);
          t_SmallFloat::initialize(module);
          t_Sorter::initialize(module);
          t_SparseFixedBitSet::initialize(module);
          t_StableMSBRadixSorter::initialize(module);
          t_StringHelper::initialize(module);
          t_StringSorter::initialize(module);
          t_SuppressForbidden::initialize(module);
          t_TermAndVector::initialize(module);
          t_ThreadInterruptedException::initialize(module);
          t_TimSorter::initialize(module);
          t_ToStringUtils::initialize(module);
          t_UnicodeUtil::initialize(module);
          t_UnicodeUtil$UTF8CodePoint::initialize(module);
          t_Unwrappable::initialize(module);
          t_VectorUtil::initialize(module);
          t_Version::initialize(module);
          t_VirtualMethod::initialize(module);
          t_WeakIdentityMap::initialize(module);
          automaton::__initialize__(module);
          bkd::__initialize__(module);
          compress::__initialize__(module);
          fst::__initialize__(module);
          graph::__initialize__(module);
          hnsw::__initialize__(module);
          mutable$::__initialize__(module);
          packed::__initialize__(module);
          quantization::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/lucene/util/automaton/Automata.h"
#include "org/apache/lucene/util/automaton/Automaton.h"
#include "org/apache/lucene/util/automaton/Automaton$Builder.h"
#include "org/apache/lucene/util/automaton/AutomatonProvider.h"
#include "org/apache/lucene/util/automaton/ByteRunAutomaton.h"
#include "org/apache/lucene/util/automaton/ByteRunnable.h"
#include "org/apache/lucene/util/automaton/CharacterRunAutomaton.h"
#include "org/apache/lucene/util/automaton/CompiledAutomaton.h"
#include "org/apache/lucene/util/automaton/CompiledAutomaton$AUTOMATON_TYPE.h"
#include "org/apache/lucene/util/automaton/FiniteStringsIterator.h"
#include "org/apache/lucene/util/automaton/LevenshteinAutomata.h"
#include "org/apache/lucene/util/automaton/LimitedFiniteStringsIterator.h"
#include "org/apache/lucene/util/automaton/NFARunAutomaton.h"
#include "org/apache/lucene/util/automaton/Operations.h"
#include "org/apache/lucene/util/automaton/RegExp.h"
#include "org/apache/lucene/util/automaton/RegExp$Kind.h"
#include "org/apache/lucene/util/automaton/RunAutomaton.h"
#include "org/apache/lucene/util/automaton/StatePair.h"
#include "org/apache/lucene/util/automaton/TooComplexToDeterminizeException.h"
#include "org/apache/lucene/util/automaton/Transition.h"
#include "org/apache/lucene/util/automaton/TransitionAccessor.h"
#include "org/apache/lucene/util/automaton/UTF32ToUTF8.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "automaton");

            t_Automata::install(module);
            t_Automaton::install(module);
            t_Automaton$Builder::install(module);
            t_AutomatonProvider::install(module);
            t_ByteRunAutomaton::install(module);
            t_ByteRunnable::install(module);
            t_CharacterRunAutomaton::install(module);
            t_CompiledAutomaton::install(module);
            t_CompiledAutomaton$AUTOMATON_TYPE::install(module);
            t_FiniteStringsIterator::install(module);
            t_LevenshteinAutomata::install(module);
            t_LimitedFiniteStringsIterator::install(module);
            t_NFARunAutomaton::install(module);
            t_Operations::install(module);
            t_RegExp::install(module);
            t_RegExp$Kind::install(module);
            t_RunAutomaton::install(module);
            t_StatePair::install(module);
            t_TooComplexToDeterminizeException::install(module);
            t_Transition::install(module);
            t_TransitionAccessor::install(module);
            t_UTF32ToUTF8::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "automaton");

            t_Automata::initialize(module);
            t_Automaton::initialize(module);
            t_Automaton$Builder::initialize(module);
            t_AutomatonProvider::initialize(module);
            t_ByteRunAutomaton::initialize(module);
            t_ByteRunnable::initialize(module);
            t_CharacterRunAutomaton::initialize(module);
            t_CompiledAutomaton::initialize(module);
            t_CompiledAutomaton$AUTOMATON_TYPE::initialize(module);
            t_FiniteStringsIterator::initialize(module);
            t_LevenshteinAutomata::initialize(module);
            t_LimitedFiniteStringsIterator::initialize(module);
            t_NFARunAutomaton::initialize(module);
            t_Operations::initialize(module);
            t_RegExp::initialize(module);
            t_RegExp$Kind::initialize(module);
            t_RunAutomaton::initialize(module);
            t_StatePair::initialize(module);
            t_TooComplexToDeterminizeException::initialize(module);
            t_Transition::initialize(module);
            t_TransitionAccessor::initialize(module);
            t_UTF32ToUTF8::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/util/bkd/BKDConfig.h"
#include "org/apache/lucene/util/bkd/BKDRadixSelector.h"
#include "org/apache/lucene/util/bkd/BKDRadixSelector$PathSlice.h"
#include "org/apache/lucene/util/bkd/BKDReader.h"
#include "org/apache/lucene/util/bkd/BKDUtil$ByteArrayPredicate.h"
#include "org/apache/lucene/util/bkd/BKDWriter.h"
#include "org/apache/lucene/util/bkd/HeapPointReader.h"
#include "org/apache/lucene/util/bkd/HeapPointWriter.h"
#include "org/apache/lucene/util/bkd/MutablePointTreeReaderUtils.h"
#include "org/apache/lucene/util/bkd/OfflinePointReader.h"
#include "org/apache/lucene/util/bkd/OfflinePointWriter.h"
#include "org/apache/lucene/util/bkd/PointReader.h"
#include "org/apache/lucene/util/bkd/PointValue.h"
#include "org/apache/lucene/util/bkd/PointWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "bkd");

            t_BKDConfig::install(module);
            t_BKDRadixSelector::install(module);
            t_BKDRadixSelector$PathSlice::install(module);
            t_BKDReader::install(module);
            t_BKDUtil$ByteArrayPredicate::install(module);
            t_BKDWriter::install(module);
            t_HeapPointReader::install(module);
            t_HeapPointWriter::install(module);
            t_MutablePointTreeReaderUtils::install(module);
            t_OfflinePointReader::install(module);
            t_OfflinePointWriter::install(module);
            t_PointReader::install(module);
            t_PointValue::install(module);
            t_PointWriter::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "bkd");

            t_BKDConfig::initialize(module);
            t_BKDRadixSelector::initialize(module);
            t_BKDRadixSelector$PathSlice::initialize(module);
            t_BKDReader::initialize(module);
            t_BKDUtil$ByteArrayPredicate::initialize(module);
            t_BKDWriter::initialize(module);
            t_HeapPointReader::initialize(module);
            t_HeapPointWriter::initialize(module);
            t_MutablePointTreeReaderUtils::initialize(module);
            t_OfflinePointReader::initialize(module);
            t_OfflinePointWriter::initialize(module);
            t_PointReader::initialize(module);
            t_PointValue::initialize(module);
            t_PointWriter::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/util/compress/LZ4.h"
#include "org/apache/lucene/util/compress/LZ4$FastCompressionHashTable.h"
#include "org/apache/lucene/util/compress/LZ4$HashTable.h"
#include "org/apache/lucene/util/compress/LZ4$HighCompressionHashTable.h"
#include "org/apache/lucene/util/compress/LowercaseAsciiCompression.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace compress {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "compress");

            t_LZ4::install(module);
            t_LZ4$FastCompressionHashTable::install(module);
            t_LZ4$HashTable::install(module);
            t_LZ4$HighCompressionHashTable::install(module);
            t_LowercaseAsciiCompression::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "compress");

            t_LZ4::initialize(module);
            t_LZ4$FastCompressionHashTable::initialize(module);
            t_LZ4$HashTable::initialize(module);
            t_LZ4$HighCompressionHashTable::initialize(module);
            t_LowercaseAsciiCompression::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/util/fst/ByteSequenceOutputs.h"
#include "org/apache/lucene/util/fst/BytesRefFSTEnum.h"
#include "org/apache/lucene/util/fst/BytesRefFSTEnum$InputOutput.h"
#include "org/apache/lucene/util/fst/CharSequenceOutputs.h"
#include "org/apache/lucene/util/fst/FST.h"
#include "org/apache/lucene/util/fst/FST$Arc.h"
#include "org/apache/lucene/util/fst/FST$BytesReader.h"
#include "org/apache/lucene/util/fst/FST$FSTMetadata.h"
#include "org/apache/lucene/util/fst/FST$INPUT_TYPE.h"
#include "org/apache/lucene/util/fst/FSTCompiler.h"
#include "org/apache/lucene/util/fst/FSTCompiler$Builder.h"
#include "org/apache/lucene/util/fst/FSTEnum.h"
#include "org/apache/lucene/util/fst/FSTReader.h"
#include "org/apache/lucene/util/fst/IntSequenceOutputs.h"
#include "org/apache/lucene/util/fst/IntsRefFSTEnum.h"
#include "org/apache/lucene/util/fst/IntsRefFSTEnum$InputOutput.h"
#include "org/apache/lucene/util/fst/NoOutputs.h"
#include "org/apache/lucene/util/fst/OffHeapFSTStore.h"
#include "org/apache/lucene/util/fst/OnHeapFSTStore.h"
#include "org/apache/lucene/util/fst/Outputs.h"
#include "org/apache/lucene/util/fst/PairOutputs.h"
#include "org/apache/lucene/util/fst/PairOutputs$Pair.h"
#include "org/apache/lucene/util/fst/PositiveIntOutputs.h"
#include "org/apache/lucene/util/fst/Util.h"
#include "org/apache/lucene/util/fst/Util$FSTPath.h"
#include "org/apache/lucene/util/fst/Util$Result.h"
#include "org/apache/lucene/util/fst/Util$TopNSearcher.h"
#include "org/apache/lucene/util/fst/Util$TopResults.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "fst");

            t_ByteSequenceOutputs::install(module);
            t_BytesRefFSTEnum::install(module);
            t_BytesRefFSTEnum$InputOutput::install(module);
            t_CharSequenceOutputs::install(module);
            t_FST::install(module);
            t_FST$Arc::install(module);
            t_FST$BytesReader::install(module);
            t_FST$FSTMetadata::install(module);
            t_FST$INPUT_TYPE::install(module);
            t_FSTCompiler::install(module);
            t_FSTCompiler$Builder::install(module);
            t_FSTEnum::install(module);
            t_FSTReader::install(module);
            t_IntSequenceOutputs::install(module);
            t_IntsRefFSTEnum::install(module);
            t_IntsRefFSTEnum$InputOutput::install(module);
            t_NoOutputs::install(module);
            t_OffHeapFSTStore::install(module);
            t_OnHeapFSTStore::install(module);
            t_Outputs::install(module);
            t_PairOutputs::install(module);
            t_PairOutputs$Pair::install(module);
            t_PositiveIntOutputs::install(module);
            t_Util::install(module);
            t_Util$FSTPath::install(module);
            t_Util$Result::install(module);
            t_Util$TopNSearcher::install(module);
            t_Util$TopResults::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "fst");

            t_ByteSequenceOutputs::initialize(module);
            t_BytesRefFSTEnum::initialize(module);
            t_BytesRefFSTEnum$InputOutput::initialize(module);
            t_CharSequenceOutputs::initialize(module);
            t_FST::initialize(module);
            t_FST$Arc::initialize(module);
            t_FST$BytesReader::initialize(module);
            t_FST$FSTMetadata::initialize(module);
            t_FST$INPUT_TYPE::initialize(module);
            t_FSTCompiler::initialize(module);
            t_FSTCompiler$Builder::initialize(module);
            t_FSTEnum::initialize(module);
            t_FSTReader::initialize(module);
            t_IntSequenceOutputs::initialize(module);
            t_IntsRefFSTEnum::initialize(module);
            t_IntsRefFSTEnum$InputOutput::initialize(module);
            t_NoOutputs::initialize(module);
            t_OffHeapFSTStore::initialize(module);
            t_OnHeapFSTStore::initialize(module);
            t_Outputs::initialize(module);
            t_PairOutputs::initialize(module);
            t_PairOutputs$Pair::initialize(module);
            t_PositiveIntOutputs::initialize(module);
            t_Util::initialize(module);
            t_Util$FSTPath::initialize(module);
            t_Util$Result::initialize(module);
            t_Util$TopNSearcher::initialize(module);
            t_Util$TopResults::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/util/graph/GraphTokenStreamFiniteStrings.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace graph {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "graph");

            t_GraphTokenStreamFiniteStrings::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "graph");

            t_GraphTokenStreamFiniteStrings::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/util/hnsw/BlockingFloatHeap.h"
#include "org/apache/lucene/util/hnsw/CloseableRandomVectorScorerSupplier.h"
#include "org/apache/lucene/util/hnsw/ConcurrentHnswMerger.h"
#include "org/apache/lucene/util/hnsw/FloatHeap.h"
#include "org/apache/lucene/util/hnsw/HnswBuilder.h"
#include "org/apache/lucene/util/hnsw/HnswConcurrentMergeBuilder.h"
#include "org/apache/lucene/util/hnsw/HnswGraph.h"
#include "org/apache/lucene/util/hnsw/HnswGraph$ArrayNodesIterator.h"
#include "org/apache/lucene/util/hnsw/HnswGraph$CollectionNodesIterator.h"
#include "org/apache/lucene/util/hnsw/HnswGraph$NodesIterator.h"
#include "org/apache/lucene/util/hnsw/HnswGraphBuilder.h"
#include "org/apache/lucene/util/hnsw/HnswGraphBuilder$GraphBuilderKnnCollector.h"
#include "org/apache/lucene/util/hnsw/HnswGraphMerger.h"
#include "org/apache/lucene/util/hnsw/HnswGraphSearcher.h"
#include "org/apache/lucene/util/hnsw/HnswUtil.h"
#include "org/apache/lucene/util/hnsw/IncrementalHnswGraphMerger.h"
#include "org/apache/lucene/util/hnsw/InitializedHnswGraphBuilder.h"
#include "org/apache/lucene/util/hnsw/IntToIntFunction.h"
#include "org/apache/lucene/util/hnsw/NeighborArray.h"
#include "org/apache/lucene/util/hnsw/NeighborQueue.h"
#include "org/apache/lucene/util/hnsw/OnHeapHnswGraph.h"
#include "org/apache/lucene/util/hnsw/OrdinalTranslatedKnnCollector.h"
#include "org/apache/lucene/util/hnsw/RandomVectorScorer.h"
#include "org/apache/lucene/util/hnsw/RandomVectorScorer$AbstractRandomVectorScorer.h"
#include "org/apache/lucene/util/hnsw/RandomVectorScorerSupplier.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace hnsw {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "hnsw");

            t_BlockingFloatHeap::install(module);
            t_CloseableRandomVectorScorerSupplier::install(module);
            t_ConcurrentHnswMerger::install(module);
            t_FloatHeap::install(module);
            t_HnswBuilder::install(module);
            t_HnswConcurrentMergeBuilder::install(module);
            t_HnswGraph::install(module);
            t_HnswGraph$ArrayNodesIterator::install(module);
            t_HnswGraph$CollectionNodesIterator::install(module);
            t_HnswGraph$NodesIterator::install(module);
            t_HnswGraphBuilder::install(module);
            t_HnswGraphBuilder$GraphBuilderKnnCollector::install(module);
            t_HnswGraphMerger::install(module);
            t_HnswGraphSearcher::install(module);
            t_HnswUtil::install(module);
            t_IncrementalHnswGraphMerger::install(module);
            t_InitializedHnswGraphBuilder::install(module);
            t_IntToIntFunction::install(module);
            t_NeighborArray::install(module);
            t_NeighborQueue::install(module);
            t_OnHeapHnswGraph::install(module);
            t_OrdinalTranslatedKnnCollector::install(module);
            t_RandomVectorScorer::install(module);
            t_RandomVectorScorer$AbstractRandomVectorScorer::install(module);
            t_RandomVectorScorerSupplier::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "hnsw");

            t_BlockingFloatHeap::initialize(module);
            t_CloseableRandomVectorScorerSupplier::initialize(module);
            t_ConcurrentHnswMerger::initialize(module);
            t_FloatHeap::initialize(module);
            t_HnswBuilder::initialize(module);
            t_HnswConcurrentMergeBuilder::initialize(module);
            t_HnswGraph::initialize(module);
            t_HnswGraph$ArrayNodesIterator::initialize(module);
            t_HnswGraph$CollectionNodesIterator::initialize(module);
            t_HnswGraph$NodesIterator::initialize(module);
            t_HnswGraphBuilder::initialize(module);
            t_HnswGraphBuilder$GraphBuilderKnnCollector::initialize(module);
            t_HnswGraphMerger::initialize(module);
            t_HnswGraphSearcher::initialize(module);
            t_HnswUtil::initialize(module);
            t_IncrementalHnswGraphMerger::initialize(module);
            t_InitializedHnswGraphBuilder::initialize(module);
            t_IntToIntFunction::initialize(module);
            t_NeighborArray::initialize(module);
            t_NeighborQueue::initialize(module);
            t_OnHeapHnswGraph::initialize(module);
            t_OrdinalTranslatedKnnCollector::initialize(module);
            t_RandomVectorScorer::initialize(module);
            t_RandomVectorScorer$AbstractRandomVectorScorer::initialize(module);
            t_RandomVectorScorerSupplier::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/util/mutable/MutableValue.h"
#include "org/apache/lucene/util/mutable/MutableValueBool.h"
#include "org/apache/lucene/util/mutable/MutableValueDate.h"
#include "org/apache/lucene/util/mutable/MutableValueDouble.h"
#include "org/apache/lucene/util/mutable/MutableValueFloat.h"
#include "org/apache/lucene/util/mutable/MutableValueInt.h"
#include "org/apache/lucene/util/mutable/MutableValueLong.h"
#include "org/apache/lucene/util/mutable/MutableValueStr.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace mutable$ {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "mutable");

            t_MutableValue::install(module);
            t_MutableValueBool::install(module);
            t_MutableValueDate::install(module);
            t_MutableValueDouble::install(module);
            t_MutableValueFloat::install(module);
            t_MutableValueInt::install(module);
            t_MutableValueLong::install(module);
            t_MutableValueStr::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "mutable");

            t_MutableValue::initialize(module);
            t_MutableValueBool::initialize(module);
            t_MutableValueDate::initialize(module);
            t_MutableValueDouble::initialize(module);
            t_MutableValueFloat::initialize(module);
            t_MutableValueInt::initialize(module);
            t_MutableValueLong::initialize(module);
            t_MutableValueStr::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/util/packed/AbstractBlockPackedWriter.h"
#include "org/apache/lucene/util/packed/AbstractPagedMutable.h"
#include "org/apache/lucene/util/packed/BlockPackedReaderIterator.h"
#include "org/apache/lucene/util/packed/BlockPackedWriter.h"
#include "org/apache/lucene/util/packed/DirectMonotonicReader.h"
#include "org/apache/lucene/util/packed/DirectMonotonicReader$Meta.h"
#include "org/apache/lucene/util/packed/DirectMonotonicWriter.h"
#include "org/apache/lucene/util/packed/DirectReader.h"
#include "org/apache/lucene/util/packed/DirectWriter.h"
#include "org/apache/lucene/util/packed/GrowableWriter.h"
#include "org/apache/lucene/util/packed/MonotonicBlockPackedReader.h"
#include "org/apache/lucene/util/packed/MonotonicBlockPackedWriter.h"
#include "org/apache/lucene/util/packed/PackedDataInput.h"
#include "org/apache/lucene/util/packed/PackedDataOutput.h"
#include "org/apache/lucene/util/packed/PackedInts.h"
#include "org/apache/lucene/util/packed/PackedInts$Decoder.h"
#include "org/apache/lucene/util/packed/PackedInts$Encoder.h"
#include "org/apache/lucene/util/packed/PackedInts$Format.h"
#include "org/apache/lucene/util/packed/PackedInts$FormatAndBits.h"
#include "org/apache/lucene/util/packed/PackedInts$Mutable.h"
#include "org/apache/lucene/util/packed/PackedInts$NullReader.h"
#include "org/apache/lucene/util/packed/PackedInts$Reader.h"
#include "org/apache/lucene/util/packed/PackedInts$ReaderIterator.h"
#include "org/apache/lucene/util/packed/PackedInts$Writer.h"
#include "org/apache/lucene/util/packed/PackedLongValues.h"
#include "org/apache/lucene/util/packed/PackedLongValues$Builder.h"
#include "org/apache/lucene/util/packed/PackedLongValues$Iterator.h"
#include "org/apache/lucene/util/packed/PagedGrowableWriter.h"
#include "org/apache/lucene/util/packed/PagedMutable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "packed");

            t_AbstractBlockPackedWriter::install(module);
            t_AbstractPagedMutable::install(module);
            t_BlockPackedReaderIterator::install(module);
            t_BlockPackedWriter::install(module);
            t_DirectMonotonicReader::install(module);
            t_DirectMonotonicReader$Meta::install(module);
            t_DirectMonotonicWriter::install(module);
            t_DirectReader::install(module);
            t_DirectWriter::install(module);
            t_GrowableWriter::install(module);
            t_MonotonicBlockPackedReader::install(module);
            t_MonotonicBlockPackedWriter::install(module);
            t_PackedDataInput::install(module);
            t_PackedDataOutput::install(module);
            t_PackedInts::install(module);
            t_PackedInts$Decoder::install(module);
            t_PackedInts$Encoder::install(module);
            t_PackedInts$Format::install(module);
            t_PackedInts$FormatAndBits::install(module);
            t_PackedInts$Mutable::install(module);
            t_PackedInts$NullReader::install(module);
            t_PackedInts$Reader::install(module);
            t_PackedInts$ReaderIterator::install(module);
            t_PackedInts$Writer::install(module);
            t_PackedLongValues::install(module);
            t_PackedLongValues$Builder::install(module);
            t_PackedLongValues$Iterator::install(module);
            t_PagedGrowableWriter::install(module);
            t_PagedMutable::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "packed");

            t_AbstractBlockPackedWriter::initialize(module);
            t_AbstractPagedMutable::initialize(module);
            t_BlockPackedReaderIterator::initialize(module);
            t_BlockPackedWriter::initialize(module);
            t_DirectMonotonicReader::initialize(module);
            t_DirectMonotonicReader$Meta::initialize(module);
            t_DirectMonotonicWriter::initialize(module);
            t_DirectReader::initialize(module);
            t_DirectWriter::initialize(module);
            t_GrowableWriter::initialize(module);
            t_MonotonicBlockPackedReader::initialize(module);
            t_MonotonicBlockPackedWriter::initialize(module);
            t_PackedDataInput::initialize(module);
            t_PackedDataOutput::initialize(module);
            t_PackedInts::initialize(module);
            t_PackedInts$Decoder::initialize(module);
            t_PackedInts$Encoder::initialize(module);
            t_PackedInts$Format::initialize(module);
            t_PackedInts$FormatAndBits::initialize(module);
            t_PackedInts$Mutable::initialize(module);
            t_PackedInts$NullReader::initialize(module);
            t_PackedInts$Reader::initialize(module);
            t_PackedInts$ReaderIterator::initialize(module);
            t_PackedInts$Writer::initialize(module);
            t_PackedLongValues::initialize(module);
            t_PackedLongValues$Builder::initialize(module);
            t_PackedLongValues$Iterator::initialize(module);
            t_PagedGrowableWriter::initialize(module);
            t_PagedMutable::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/lucene/util/quantization/QuantizedByteVectorValues.h"
#include "org/apache/lucene/util/quantization/QuantizedVectorsReader.h"
#include "org/apache/lucene/util/quantization/ScalarQuantizedVectorSimilarity.h"
#include "org/apache/lucene/util/quantization/ScalarQuantizedVectorSimilarity$ByteVectorComparator.h"
#include "org/apache/lucene/util/quantization/ScalarQuantizedVectorSimilarity$DotProduct.h"
#include "org/apache/lucene/util/quantization/ScalarQuantizedVectorSimilarity$Euclidean.h"
#include "org/apache/lucene/util/quantization/ScalarQuantizedVectorSimilarity$MaximumInnerProduct.h"
#include "org/apache/lucene/util/quantization/ScalarQuantizer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace quantization {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "quantization");

            t_QuantizedByteVectorValues::install(module);
            t_QuantizedVectorsReader::install(module);
            t_ScalarQuantizedVectorSimilarity::install(module);
            t_ScalarQuantizedVectorSimilarity$ByteVectorComparator::install(module);
            t_ScalarQuantizedVectorSimilarity$DotProduct::install(module);
            t_ScalarQuantizedVectorSimilarity$Euclidean::install(module);
            t_ScalarQuantizedVectorSimilarity$MaximumInnerProduct::install(module);
            t_ScalarQuantizer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.lucene.util", "quantization");

            t_QuantizedByteVectorValues::initialize(module);
            t_QuantizedVectorsReader::initialize(module);
            t_ScalarQuantizedVectorSimilarity::initialize(module);
            t_ScalarQuantizedVectorSimilarity$ByteVectorComparator::initialize(module);
            t_ScalarQuantizedVectorSimilarity$DotProduct::initialize(module);
            t_ScalarQuantizedVectorSimilarity$Euclidean::initialize(module);
            t_ScalarQuantizedVectorSimilarity$MaximumInnerProduct::initialize(module);
            t_ScalarQuantizer::initialize(module);
          }
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace pylucene {

      namespace analysis {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace index {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace queries {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace queryparser {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace ref {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace search {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace store {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace util {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.apache", "pylucene");

        analysis::__install__(module);
        index::__install__(module);
        queries::__install__(module);
        queryparser::__install__(module);
        ref::__install__(module);
        search::__install__(module);
        store::__install__(module);
        util::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.apache", "pylucene");

        analysis::__initialize__(module);
        index::__initialize__(module);
        queries::__initialize__(module);
        queryparser::__initialize__(module);
        ref::__initialize__(module);
        search::__initialize__(module);
        store::__initialize__(module);
        util::__initialize__(module);
      }
    }
  }
}

#include "org/apache/pylucene/analysis/PythonAnalyzer.h"
#include "org/apache/pylucene/analysis/PythonFilteringTokenFilter.h"
#include "org/apache/pylucene/analysis/PythonTokenFilter.h"
#include "org/apache/pylucene/analysis/PythonTokenStream.h"
#include "org/apache/pylucene/analysis/PythonTokenizer.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "analysis");

          t_PythonAnalyzer::install(module);
          t_PythonFilteringTokenFilter::install(module);
          t_PythonTokenFilter::install(module);
          t_PythonTokenStream::install(module);
          t_PythonTokenizer::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "analysis");

          t_PythonAnalyzer::initialize(module);
          t_PythonFilteringTokenFilter::initialize(module);
          t_PythonTokenFilter::initialize(module);
          t_PythonTokenStream::initialize(module);
          t_PythonTokenizer::initialize(module);
        }
      }
    }
  }
}

#include "org/apache/pylucene/index/PythonIndexDeletionPolicy.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace index {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "index");

          t_PythonIndexDeletionPolicy::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "index");

          t_PythonIndexDeletionPolicy::initialize(module);
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace pylucene {
      namespace queries {

        namespace spans {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "queries");

          spans::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "queries");

          spans::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/pylucene/queries/spans/PythonSpanCollector.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace queries {
        namespace spans {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.queries", "spans");

            t_PythonSpanCollector::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.queries", "spans");

            t_PythonSpanCollector::initialize(module);
          }
        }
      }
    }
  }
}


namespace org {
  namespace apache {
    namespace pylucene {
      namespace queryparser {

        namespace classic {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "queryparser");

          classic::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "queryparser");

          classic::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/pylucene/queryparser/classic/PythonMultiFieldQueryParser.h"
#include "org/apache/pylucene/queryparser/classic/PythonQueryParser.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace queryparser {
        namespace classic {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.queryparser", "classic");

            t_PythonMultiFieldQueryParser::install(module);
            t_PythonQueryParser::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.queryparser", "classic");

            t_PythonMultiFieldQueryParser::initialize(module);
            t_PythonQueryParser::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/pylucene/ref/PythonObject.h"
#include "org/apache/pylucene/ref/PythonObjectFinalizer.h"
#include "org/apache/pylucene/ref/PythonObjectManager.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace ref {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "ref");

          t_PythonObject::install(module);
          t_PythonObjectFinalizer::install(module);
          t_PythonObjectManager::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "ref");

          t_PythonObject::initialize(module);
          t_PythonObjectFinalizer::initialize(module);
          t_PythonObjectManager::initialize(module);
        }
      }
    }
  }
}

#include "org/apache/pylucene/search/PythonSimpleCollector.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {

        namespace highlight {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace similarities {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "search");

          t_PythonSimpleCollector::install(module);
          highlight::__install__(module);
          similarities::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "search");

          t_PythonSimpleCollector::initialize(module);
          highlight::__initialize__(module);
          similarities::__initialize__(module);
        }
      }
    }
  }
}

#include "org/apache/pylucene/search/highlight/PythonFormatter.h"
#include "org/apache/pylucene/search/highlight/PythonFragmenter.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace highlight {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.search", "highlight");

            t_PythonFormatter::install(module);
            t_PythonFragmenter::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.search", "highlight");

            t_PythonFormatter::initialize(module);
            t_PythonFragmenter::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/pylucene/search/similarities/PythonClassicSimilarity.h"
#include "org/apache/pylucene/search/similarities/PythonPerFieldSimilarityWrapper.h"
#include "org/apache/pylucene/search/similarities/PythonSimilarity.h"
#include "org/apache/pylucene/search/similarities/PythonSimilarity$PythonSimScorer.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace similarities {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.search", "similarities");

            t_PythonClassicSimilarity::install(module);
            t_PythonPerFieldSimilarityWrapper::install(module);
            t_PythonSimilarity::install(module);
            t_PythonSimilarity$PythonSimScorer::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.apache.pylucene.search", "similarities");

            t_PythonClassicSimilarity::initialize(module);
            t_PythonPerFieldSimilarityWrapper::initialize(module);
            t_PythonSimilarity::initialize(module);
            t_PythonSimilarity$PythonSimScorer::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/apache/pylucene/store/PythonDirectory.h"
#include "org/apache/pylucene/store/PythonIndexInput.h"
#include "org/apache/pylucene/store/PythonIndexOutput.h"
#include "org/apache/pylucene/store/PythonLock.h"
#include "org/apache/pylucene/store/PythonLockFactory.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace store {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "store");

          t_PythonDirectory::install(module);
          t_PythonIndexInput::install(module);
          t_PythonIndexOutput::install(module);
          t_PythonLock::install(module);
          t_PythonLockFactory::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "store");

          t_PythonDirectory::initialize(module);
          t_PythonIndexInput::initialize(module);
          t_PythonIndexOutput::initialize(module);
          t_PythonLock::initialize(module);
          t_PythonLockFactory::initialize(module);
        }
      }
    }
  }
}

#include "org/apache/pylucene/util/PythonAttribute.h"
#include "org/apache/pylucene/util/PythonAttributeImpl.h"
#include "org/apache/pylucene/util/PythonComparable.h"
#include "org/apache/pylucene/util/PythonIterator.h"
#include "org/apache/pylucene/util/PythonList.h"
#include "org/apache/pylucene/util/PythonListIterator.h"
#include "org/apache/pylucene/util/PythonSet.h"

namespace org {
  namespace apache {
    namespace pylucene {
      namespace util {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "util");

          t_PythonAttribute::install(module);
          t_PythonAttributeImpl::install(module);
          t_PythonComparable::install(module);
          t_PythonIterator::install(module);
          t_PythonList::install(module);
          t_PythonListIterator::install(module);
          t_PythonSet::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.apache.pylucene", "util");

          t_PythonAttribute::initialize(module);
          t_PythonAttributeImpl::initialize(module);
          t_PythonComparable::initialize(module);
          t_PythonIterator::initialize(module);
          t_PythonList::initialize(module);
          t_PythonListIterator::initialize(module);
          t_PythonSet::initialize(module);
        }
      }
    }
  }
}


namespace org {
  namespace egothor {

    namespace stemmer {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "org", "egothor");

      stemmer::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "org", "egothor");

      stemmer::__initialize__(module);
    }
  }
}

#include "org/egothor/stemmer/Compile.h"
#include "org/egothor/stemmer/Diff.h"
#include "org/egothor/stemmer/DiffIt.h"
#include "org/egothor/stemmer/Gener.h"
#include "org/egothor/stemmer/Lift.h"
#include "org/egothor/stemmer/MultiTrie.h"
#include "org/egothor/stemmer/MultiTrie2.h"
#include "org/egothor/stemmer/Optimizer.h"
#include "org/egothor/stemmer/Optimizer2.h"
#include "org/egothor/stemmer/Reduce.h"
#include "org/egothor/stemmer/Row.h"
#include "org/egothor/stemmer/Trie.h"

namespace org {
  namespace egothor {
    namespace stemmer {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.egothor", "stemmer");

        t_Compile::install(module);
        t_Diff::install(module);
        t_DiffIt::install(module);
        t_Gener::install(module);
        t_Lift::install(module);
        t_MultiTrie::install(module);
        t_MultiTrie2::install(module);
        t_Optimizer::install(module);
        t_Optimizer2::install(module);
        t_Reduce::install(module);
        t_Row::install(module);
        t_Trie::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.egothor", "stemmer");

        t_Compile::initialize(module);
        t_Diff::initialize(module);
        t_DiffIt::initialize(module);
        t_Gener::initialize(module);
        t_Lift::initialize(module);
        t_MultiTrie::initialize(module);
        t_MultiTrie2::initialize(module);
        t_Optimizer::initialize(module);
        t_Optimizer2::initialize(module);
        t_Reduce::initialize(module);
        t_Row::initialize(module);
        t_Trie::initialize(module);
      }
    }
  }
}


namespace org {
  namespace tartarus {

    namespace snowball {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "org", "tartarus");

      snowball::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "org", "tartarus");

      snowball::__initialize__(module);
    }
  }
}

#include "org/tartarus/snowball/Among.h"
#include "org/tartarus/snowball/SnowballProgram.h"
#include "org/tartarus/snowball/SnowballStemmer.h"

namespace org {
  namespace tartarus {
    namespace snowball {

      namespace ext {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.tartarus", "snowball");

        t_Among::install(module);
        t_SnowballProgram::install(module);
        t_SnowballStemmer::install(module);
        ext::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.tartarus", "snowball");

        t_Among::initialize(module);
        t_SnowballProgram::initialize(module);
        t_SnowballStemmer::initialize(module);
        ext::__initialize__(module);
      }
    }
  }
}

#include "org/tartarus/snowball/ext/ArabicStemmer.h"
#include "org/tartarus/snowball/ext/ArmenianStemmer.h"
#include "org/tartarus/snowball/ext/BasqueStemmer.h"
#include "org/tartarus/snowball/ext/CatalanStemmer.h"
#include "org/tartarus/snowball/ext/DanishStemmer.h"
#include "org/tartarus/snowball/ext/DutchStemmer.h"
#include "org/tartarus/snowball/ext/EnglishStemmer.h"
#include "org/tartarus/snowball/ext/EstonianStemmer.h"
#include "org/tartarus/snowball/ext/FinnishStemmer.h"
#include "org/tartarus/snowball/ext/FrenchStemmer.h"
#include "org/tartarus/snowball/ext/GermanStemmer.h"
#include "org/tartarus/snowball/ext/GreekStemmer.h"
#include "org/tartarus/snowball/ext/HindiStemmer.h"
#include "org/tartarus/snowball/ext/HungarianStemmer.h"
#include "org/tartarus/snowball/ext/IndonesianStemmer.h"
#include "org/tartarus/snowball/ext/IrishStemmer.h"
#include "org/tartarus/snowball/ext/ItalianStemmer.h"
#include "org/tartarus/snowball/ext/LithuanianStemmer.h"
#include "org/tartarus/snowball/ext/NepaliStemmer.h"
#include "org/tartarus/snowball/ext/NorwegianStemmer.h"
#include "org/tartarus/snowball/ext/PorterStemmer.h"
#include "org/tartarus/snowball/ext/PortugueseStemmer.h"
#include "org/tartarus/snowball/ext/RomanianStemmer.h"
#include "org/tartarus/snowball/ext/RussianStemmer.h"
#include "org/tartarus/snowball/ext/SerbianStemmer.h"
#include "org/tartarus/snowball/ext/SpanishStemmer.h"
#include "org/tartarus/snowball/ext/SwedishStemmer.h"
#include "org/tartarus/snowball/ext/TamilStemmer.h"
#include "org/tartarus/snowball/ext/TurkishStemmer.h"
#include "org/tartarus/snowball/ext/YiddishStemmer.h"

namespace org {
  namespace tartarus {
    namespace snowball {
      namespace ext {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.tartarus.snowball", "ext");

          t_ArabicStemmer::install(module);
          t_ArmenianStemmer::install(module);
          t_BasqueStemmer::install(module);
          t_CatalanStemmer::install(module);
          t_DanishStemmer::install(module);
          t_DutchStemmer::install(module);
          t_EnglishStemmer::install(module);
          t_EstonianStemmer::install(module);
          t_FinnishStemmer::install(module);
          t_FrenchStemmer::install(module);
          t_GermanStemmer::install(module);
          t_GreekStemmer::install(module);
          t_HindiStemmer::install(module);
          t_HungarianStemmer::install(module);
          t_IndonesianStemmer::install(module);
          t_IrishStemmer::install(module);
          t_ItalianStemmer::install(module);
          t_LithuanianStemmer::install(module);
          t_NepaliStemmer::install(module);
          t_NorwegianStemmer::install(module);
          t_PorterStemmer::install(module);
          t_PortugueseStemmer::install(module);
          t_RomanianStemmer::install(module);
          t_RussianStemmer::install(module);
          t_SerbianStemmer::install(module);
          t_SpanishStemmer::install(module);
          t_SwedishStemmer::install(module);
          t_TamilStemmer::install(module);
          t_TurkishStemmer::install(module);
          t_YiddishStemmer::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.tartarus.snowball", "ext");

          t_ArabicStemmer::initialize(module);
          t_ArmenianStemmer::initialize(module);
          t_BasqueStemmer::initialize(module);
          t_CatalanStemmer::initialize(module);
          t_DanishStemmer::initialize(module);
          t_DutchStemmer::initialize(module);
          t_EnglishStemmer::initialize(module);
          t_EstonianStemmer::initialize(module);
          t_FinnishStemmer::initialize(module);
          t_FrenchStemmer::initialize(module);
          t_GermanStemmer::initialize(module);
          t_GreekStemmer::initialize(module);
          t_HindiStemmer::initialize(module);
          t_HungarianStemmer::initialize(module);
          t_IndonesianStemmer::initialize(module);
          t_IrishStemmer::initialize(module);
          t_ItalianStemmer::initialize(module);
          t_LithuanianStemmer::initialize(module);
          t_NepaliStemmer::initialize(module);
          t_NorwegianStemmer::initialize(module);
          t_PorterStemmer::initialize(module);
          t_PortugueseStemmer::initialize(module);
          t_RomanianStemmer::initialize(module);
          t_RussianStemmer::initialize(module);
          t_SerbianStemmer::initialize(module);
          t_SpanishStemmer::initialize(module);
          t_SwedishStemmer::initialize(module);
          t_TamilStemmer::initialize(module);
          t_TurkishStemmer::initialize(module);
          t_YiddishStemmer::initialize(module);
        }
      }
    }
  }
}


namespace org {
  namespace xml {

    namespace sax {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "org", "xml");

      sax::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "org", "xml");

      sax::__initialize__(module);
    }
  }
}


namespace org {
  namespace xml {
    namespace sax {

      namespace helpers {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.xml", "sax");

        helpers::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.xml", "sax");

        helpers::__initialize__(module);
      }
    }
  }
}

#include "org/xml/sax/helpers/DefaultHandler.h"

namespace org {
  namespace xml {
    namespace sax {
      namespace helpers {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.xml.sax", "helpers");

          t_DefaultHandler::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.xml.sax", "helpers");

          t_DefaultHandler::initialize(module);
        }
      }
    }
  }
}

