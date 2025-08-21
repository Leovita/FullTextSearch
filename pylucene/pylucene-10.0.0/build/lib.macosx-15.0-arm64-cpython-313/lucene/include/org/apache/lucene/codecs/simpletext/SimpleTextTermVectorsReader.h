#ifndef org_apache_lucene_codecs_simpletext_SimpleTextTermVectorsReader_H
#define org_apache_lucene_codecs_simpletext_SimpleTextTermVectorsReader_H

#include "org/apache/lucene/codecs/TermVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Fields;
        class SegmentInfo;
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

          class SimpleTextTermVectorsReader : public ::org::apache::lucene::codecs::TermVectorsReader {
           public:
            enum {
              mid_init$_a9ba310ae9ac5967,
              mid_checkIntegrity_3720c61b0679eb3e,
              mid_clone_0b9ae2ecfa80c759,
              mid_close_3720c61b0679eb3e,
              mid_get_780247cb7111176e,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextTermVectorsReader(jobject obj) : ::org::apache::lucene::codecs::TermVectorsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextTermVectorsReader(const SimpleTextTermVectorsReader& obj) : ::org::apache::lucene::codecs::TermVectorsReader(obj) {}

            SimpleTextTermVectorsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &);

            void checkIntegrity() const;
            ::org::apache::lucene::codecs::TermVectorsReader clone() const;
            void close() const;
            ::org::apache::lucene::index::Fields get(jint) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleTextTermVectorsReader);
          extern PyTypeObject *PY_TYPE(SimpleTextTermVectorsReader);

          class t_SimpleTextTermVectorsReader {
          public:
            PyObject_HEAD
            SimpleTextTermVectorsReader object;
            static PyObject *wrap_Object(const SimpleTextTermVectorsReader&);
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
