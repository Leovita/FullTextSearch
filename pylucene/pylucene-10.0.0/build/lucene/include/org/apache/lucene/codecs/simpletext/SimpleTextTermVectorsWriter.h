#ifndef org_apache_lucene_codecs_simpletext_SimpleTextTermVectorsWriter_H
#define org_apache_lucene_codecs_simpletext_SimpleTextTermVectorsWriter_H

#include "org/apache/lucene/codecs/TermVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace util {
        class BytesRef;
      }
      namespace index {
        class FieldInfo;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace simpletext {

          class SimpleTextTermVectorsWriter : public ::org::apache::lucene::codecs::TermVectorsWriter {
           public:
            enum {
              mid_init$_242f0c71b92fd6af,
              mid_addPosition_e467e9221c0680cd,
              mid_close_e7bdbe105ce1bafb,
              mid_finish_8226bd0b0fc13dba,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_startDocument_8226bd0b0fc13dba,
              mid_startField_fa294ef516f109e2,
              mid_startTerm_86aec93bf51df65e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextTermVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextTermVectorsWriter(const SimpleTextTermVectorsWriter& obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {}

            SimpleTextTermVectorsWriter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);

            void addPosition(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
            void close() const;
            void finish(jint) const;
            jlong ramBytesUsed() const;
            void startDocument(jint) const;
            void startField(const ::org::apache::lucene::index::FieldInfo &, jint, jboolean, jboolean, jboolean) const;
            void startTerm(const ::org::apache::lucene::util::BytesRef &, jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextTermVectorsWriter);
          extern PyTypeObject *PY_TYPE(SimpleTextTermVectorsWriter);

          class t_SimpleTextTermVectorsWriter {
          public:
            PyObject_HEAD
            SimpleTextTermVectorsWriter object;
            static PyObject *wrap_Object(const SimpleTextTermVectorsWriter&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
