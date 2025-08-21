#ifndef org_apache_lucene_document_Field_H
#define org_apache_lucene_document_Field_H

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
    class CharSequence;
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
      namespace document {

        class Field : public ::java::lang::Object {
         public:
          enum {
            mid_init$_c2c4df0fca98cb34,
            mid_init$_a3febbf6875c2424,
            mid_init$_8b44a925b601cedf,
            mid_init$_c046a3d4a11eee41,
            mid_init$_70496424cd45bbeb,
            mid_init$_b665a6a74dbfc847,
            mid_binaryValue_9740fddd1c7df148,
            mid_fieldType_231a8407c689c49d,
            mid_getCharSequenceValue_373f0038978f926b,
            mid_invertableType_72515c0beb0174e7,
            mid_name_09a7afff1868fc5e,
            mid_numericValue_1b3282bb4db06655,
            mid_readerValue_2493c69d5db06811,
            mid_setByteValue_bcdac0a459ff35f6,
            mid_setBytesValue_3ce1e597fb62ac79,
            mid_setBytesValue_ac0de3ee0e03786d,
            mid_setDoubleValue_b5bc1a2fb9ff9e90,
            mid_setFloatValue_c771a95b0227fb6a,
            mid_setIntValue_540b2b23d51b1efd,
            mid_setLongValue_8b3d46852b435a94,
            mid_setReaderValue_fa55492f0f5d7f31,
            mid_setShortValue_13ddeb599c553531,
            mid_setStringValue_0d82408c6e55bc30,
            mid_setTokenStream_7d17c8514b99ffc6,
            mid_storedValue_c117239a18be2fcb,
            mid_stringValue_09a7afff1868fc5e,
            mid_toString_09a7afff1868fc5e,
            mid_tokenStream_675528819f96fe99,
            mid_tokenStreamValue_707aa2a89bdef693,
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
