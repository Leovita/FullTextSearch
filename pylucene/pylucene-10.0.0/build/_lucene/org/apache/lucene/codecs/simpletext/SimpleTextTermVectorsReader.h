#ifndef org_apache_lucene_codecs_simpletext_SimpleTextTermVectorsReader_H
#define org_apache_lucene_codecs_simpletext_SimpleTextTermVectorsReader_H

#include "org/apache/lucene/codecs/TermVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace index {
        class SegmentInfo;
        class Fields;
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

          class SimpleTextTermVectorsReader : public ::org::apache::lucene::codecs::TermVectorsReader {
           public:
            enum {
              mid_init$_0915fb04c93214b0,
              mid_checkIntegrity_e7bdbe105ce1bafb,
              mid_clone_7a10ef35062ba8d1,
              mid_close_e7bdbe105ce1bafb,
              mid_get_fb85108cc18b1699,
              mid_toString_e7df854526d67fa3,
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
