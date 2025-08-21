#ifndef org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsReader_H
#define org_apache_lucene_codecs_simpletext_SimpleTextStoredFieldsReader_H

#include "org/apache/lucene/codecs/StoredFieldsReader.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace index {
        class StoredFieldVisitor;
        class SegmentInfo;
        class FieldInfos;
      }
    }
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
              mid_init$_8a6064ffe72845a7,
              mid_checkIntegrity_3720c61b0679eb3e,
              mid_clone_4e066a6f20734e17,
              mid_close_3720c61b0679eb3e,
              mid_document_94ed5009dd10cb1f,
              mid_toString_09a7afff1868fc5e,
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
