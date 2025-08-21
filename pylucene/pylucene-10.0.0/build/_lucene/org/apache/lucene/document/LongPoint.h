#ifndef org_apache_lucene_document_LongPoint_H
#define org_apache_lucene_document_LongPoint_H

#include "org/apache/lucene/document/Field.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
    class Number;
    class Long;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class LongPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_2e5171918cd5d9fa,
            mid_decodeDimension_e68bac179e5a013e,
            mid_encodeDimension_be470a93ee399bf5,
            mid_newExactQuery_cb577c99d891ea6f,
            mid_newRangeQuery_2e1f01af3550a891,
            mid_newRangeQuery_d94de4eddd72517b,
            mid_newSetQuery_b01e10398514ec4c,
            mid_newSetQuery_9484176e9ce4ba1f,
            mid_numericValue_1b3282bb4db06655,
            mid_pack_e843a66d32ccb07a,
            mid_setBytesValue_ac0de3ee0e03786d,
            mid_setLongValue_8b3d46852b435a94,
            mid_setLongValues_140bd592f9f15dfc,
            mid_toString_09a7afff1868fc5e,
            mid_unpack_59bfe2428519483b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongPoint(const LongPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          LongPoint(const ::java::lang::String &, const JArray< jlong > &);

          static jlong decodeDimension(const JArray< jbyte > &, jint);
          static void encodeDimension(jlong, const JArray< jbyte > &, jint);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jlong);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jlong, jlong);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jlong > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          ::java::lang::Number numericValue() const;
          static ::org::apache::lucene::util::BytesRef pack(const JArray< jlong > &);
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setLongValue(jlong) const;
          void setLongValues(const JArray< jlong > &) const;
          ::java::lang::String toString() const;
          static void unpack(const ::org::apache::lucene::util::BytesRef &, jint, const JArray< jlong > &);
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
        extern PyType_Def PY_TYPE_DEF(LongPoint);
        extern PyTypeObject *PY_TYPE(LongPoint);

        class t_LongPoint {
        public:
          PyObject_HEAD
          LongPoint object;
          static PyObject *wrap_Object(const LongPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
