#ifndef org_apache_lucene_misc_document_LazyDocument$LazyField_H
#define org_apache_lucene_misc_document_LazyDocument$LazyField_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexableField;
        class IndexableFieldType;
      }
      namespace util {
        class BytesRef;
      }
      namespace document {
        class InvertableType;
        class StoredValue;
      }
      namespace analysis {
        class Analyzer;
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Number;
  }
  namespace io {
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace document {

          class LazyDocument$LazyField : public ::java::lang::Object {
           public:
            enum {
              mid_binaryValue_9740fddd1c7df148,
              mid_fieldType_231a8407c689c49d,
              mid_hasBeenLoaded_947277eca0748c4e,
              mid_invertableType_72515c0beb0174e7,
              mid_name_09a7afff1868fc5e,
              mid_numericValue_1b3282bb4db06655,
              mid_readerValue_2493c69d5db06811,
              mid_storedValue_c117239a18be2fcb,
              mid_stringValue_09a7afff1868fc5e,
              mid_tokenStream_675528819f96fe99,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LazyDocument$LazyField(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LazyDocument$LazyField(const LazyDocument$LazyField& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::BytesRef binaryValue() const;
            ::org::apache::lucene::index::IndexableFieldType fieldType() const;
            jboolean hasBeenLoaded() const;
            ::org::apache::lucene::document::InvertableType invertableType() const;
            ::java::lang::String name() const;
            ::java::lang::Number numericValue() const;
            ::java::io::Reader readerValue() const;
            ::org::apache::lucene::document::StoredValue storedValue() const;
            ::java::lang::String stringValue() const;
            ::org::apache::lucene::analysis::TokenStream tokenStream(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::TokenStream &) const;
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
      namespace misc {
        namespace document {
          extern PyType_Def PY_TYPE_DEF(LazyDocument$LazyField);
          extern PyTypeObject *PY_TYPE(LazyDocument$LazyField);

          class t_LazyDocument$LazyField {
          public:
            PyObject_HEAD
            LazyDocument$LazyField object;
            static PyObject *wrap_Object(const LazyDocument$LazyField&);
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
