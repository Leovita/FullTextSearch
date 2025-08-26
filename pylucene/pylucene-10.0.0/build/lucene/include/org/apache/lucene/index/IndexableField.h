#ifndef org_apache_lucene_index_IndexableField_H
#define org_apache_lucene_index_IndexableField_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Number;
    class String;
    class CharSequence;
  }
  namespace io {
    class Reader;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class Analyzer;
      }
      namespace document {
        class StoredValue;
        class InvertableType;
      }
      namespace util {
        class BytesRef;
      }
      namespace index {
        class IndexableFieldType;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexableField : public ::java::lang::Object {
         public:
          enum {
            mid_binaryValue_adbedbc1fa61c358,
            mid_fieldType_fa2f4688e330515c,
            mid_getCharSequenceValue_f2e5418fe0d66c69,
            mid_invertableType_6d1985fbf4a5f74d,
            mid_name_e7df854526d67fa3,
            mid_numericValue_b9665294ea488d3c,
            mid_readerValue_58cfbaca8545e054,
            mid_storedValue_71ce58210dba1993,
            mid_stringValue_e7df854526d67fa3,
            mid_tokenStream_c33c4c82a743c93e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexableField(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexableField(const IndexableField& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          ::org::apache::lucene::index::IndexableFieldType fieldType() const;
          ::java::lang::CharSequence getCharSequenceValue() const;
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

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(IndexableField);
        extern PyTypeObject *PY_TYPE(IndexableField);

        class t_IndexableField {
        public:
          PyObject_HEAD
          IndexableField object;
          static PyObject *wrap_Object(const IndexableField&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
