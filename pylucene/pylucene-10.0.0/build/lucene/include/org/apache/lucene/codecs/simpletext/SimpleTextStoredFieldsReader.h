#ifndef org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsReader_H
#define org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsReader_H

#include "org/apache/lucene/codecs/StoredFieldsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace index {
        class SegmentInfo;
        class StoredFieldVisitor;
        class FieldInfos;
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

          class SimpleTextStoredFieldsReader : public ::org::apache::lucene::codecs::StoredFieldsReader {
           public:
            enum {
              mid_init$_deeb245564001ba1,
              mid_checkIntegrity_e7bdbe105ce1bafb,
              mid_clone_a7e1c9cc255e1e90,
              mid_close_e7bdbe105ce1bafb,
              mid_document_78d5bbf2e2144955,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextStoredFieldsReader(jobject obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextStoredFieldsReader(const SimpleTextStoredFieldsReader& obj) : ::org::apache::lucene::codecs::StoredFieldsReader(obj) {}

            SimpleTextStoredFieldsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &);

            void checkIntegrity() const;
            ::org::apache::lucene::codecs::StoredFieldsReader clone() const;
            void close() const;
            void document(jint, const ::org::apache::lucene::index::StoredFieldVisitor &) const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleTextStoredFieldsReader);
          extern PyTypeObject *PY_TYPE(SimpleTextStoredFieldsReader);

          class t_SimpleTextStoredFieldsReader {
          public:
            PyObject_HEAD
            SimpleTextStoredFieldsReader object;
            static PyObject *wrap_Object(const SimpleTextStoredFieldsReader&);
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
