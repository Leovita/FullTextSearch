#ifndef org_apache_lucene_document_Field_H
#define org_apache_lucene_document_Field_H

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
      namespace index {
        class IndexableField;
        class IndexableFieldType;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class Field : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2e2255ae4b431689,
            mid_init$_923373ca1c892e07,
            mid_init$_f7854dec2d55782d,
            mid_init$_adfbd0e665b026bd,
            mid_init$_dd4390c490400bf6,
            mid_init$_c3f5f43a834f0732,
            mid_binaryValue_adbedbc1fa61c358,
            mid_fieldType_fa2f4688e330515c,
            mid_getCharSequenceValue_f2e5418fe0d66c69,
            mid_invertableType_6d1985fbf4a5f74d,
            mid_name_e7df854526d67fa3,
            mid_numericValue_b9665294ea488d3c,
            mid_readerValue_58cfbaca8545e054,
            mid_setByteValue_a5d0ad9e85e76a64,
            mid_setBytesValue_a4d4f283481182e8,
            mid_setBytesValue_920ce0cdf4259cc9,
            mid_setDoubleValue_a03f734ddaeb69b4,
            mid_setFloatValue_675f4cb9a2529ee0,
            mid_setIntValue_8226bd0b0fc13dba,
            mid_setLongValue_1d3149fac12f2af3,
            mid_setReaderValue_89ab2bee9aa84b00,
            mid_setShortValue_19904c0bd37f0d7f,
            mid_setStringValue_ee46a189998009d6,
            mid_setTokenStream_4fe096967a533954,
            mid_storedValue_71ce58210dba1993,
            mid_stringValue_e7df854526d67fa3,
            mid_toString_e7df854526d67fa3,
            mid_tokenStream_c33c4c82a743c93e,
            mid_tokenStreamValue_6d4d6f6f288807ef,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Field(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Field(const Field& obj) : ::java::lang::Object(obj) {}

          Field(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const ::java::io::Reader &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const ::java::lang::CharSequence &, const ::org::apache::lucene::index::IndexableFieldType &);
          Field(const ::java::lang::String &, const JArray< jbyte > &, jint, jint, const ::org::apache::lucene::index::IndexableFieldType &);

          ::org::apache::lucene::util::BytesRef binaryValue() const;
          ::org::apache::lucene::index::IndexableFieldType fieldType() const;
          ::java::lang::CharSequence getCharSequenceValue() const;
          ::org::apache::lucene::document::InvertableType invertableType() const;
          ::java::lang::String name() const;
          ::java::lang::Number numericValue() const;
          ::java::io::Reader readerValue() const;
          void setByteValue(jbyte) const;
          void setBytesValue(const JArray< jbyte > &) const;
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setDoubleValue(jdouble) const;
          void setFloatValue(jfloat) const;
          void setIntValue(jint) const;
          void setLongValue(jlong) const;
          void setReaderValue(const ::java::io::Reader &) const;
          void setShortValue(jshort) const;
          void setStringValue(const ::java::lang::String &) const;
          void setTokenStream(const ::org::apache::lucene::analysis::TokenStream &) const;
          ::org::apache::lucene::document::StoredValue storedValue() const;
          ::java::lang::String stringValue() const;
          ::java::lang::String toString() const;
          ::org::apache::lucene::analysis::TokenStream tokenStream(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::analysis::TokenStream &) const;
          ::org::apache::lucene::analysis::TokenStream tokenStreamValue() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(Field);
        extern PyTypeObject *PY_TYPE(Field);

        class t_Field {
        public:
          PyObject_HEAD
          Field object;
          static PyObject *wrap_Object(const Field&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
