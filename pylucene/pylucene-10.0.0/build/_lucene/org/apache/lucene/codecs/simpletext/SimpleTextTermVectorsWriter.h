#ifndef org_apache_lucene_codecs_simpletext_SimpleTextTermVectorsWriter_H
#define org_apache_lucene_codecs_simpletext_SimpleTextTermVectorsWriter_H

#include "org/apache/lucene/codecs/TermVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class FieldInfo;
      }
      namespace store {
        class IOContext;
        class Directory;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
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
              mid_init$_4dba7632ff601768,
              mid_addPosition_54dd3593ad2b559e,
              mid_close_3720c61b0679eb3e,
              mid_finish_540b2b23d51b1efd,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_startDocument_540b2b23d51b1efd,
              mid_startField_109b6acc549dbc3d,
              mid_startTerm_be93bdc4fbbb5027,
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
