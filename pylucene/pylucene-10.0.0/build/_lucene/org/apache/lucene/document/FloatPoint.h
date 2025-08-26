#ifndef org_apache_lucene_document_FloatPoint_H
#define org_apache_lucene_document_FloatPoint_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Float;
    class Class;
    class Number;
    class String;
  }
  namespace util {
    class Collection;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class FloatPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_833042f82a09f518,
            mid_decodeDimension_5a5c564d6d4c0b92,
            mid_encodeDimension_d6fabc6de258f7a6,
            mid_newExactQuery_bde45c78fff9161d,
            mid_newRangeQuery_28530d9f4b68fa70,
            mid_newRangeQuery_d4cf9dd160b804b6,
            mid_newSetQuery_65301ded65c7e90a,
            mid_newSetQuery_525d6c1fce01d552,
            mid_nextDown_760c23641efab431,
            mid_nextUp_760c23641efab431,
            mid_numericValue_b9665294ea488d3c,
            mid_pack_beeac8a87199a073,
            mid_setBytesValue_920ce0cdf4259cc9,
            mid_setFloatValue_675f4cb9a2529ee0,
            mid_setFloatValues_d2e2fadde4bf8d25,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FloatPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FloatPoint(const FloatPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          FloatPoint(const ::java::lang::String &, const JArray< jfloat > &);

          static jfloat decodeDimension(const JArray< jbyte > &, jint);
          static void encodeDimension(jfloat, const JArray< jbyte > &, jint);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jfloat);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jfloat > &, const JArray< jfloat > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jfloat, jfloat);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jfloat > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          static jfloat nextDown(jfloat);
          static jfloat nextUp(jfloat);
          ::java::lang::Number numericValue() const;
          static ::org::apache::lucene::util::BytesRef pack(const JArray< jfloat > &);
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setFloatValue(jfloat) const;
          void setFloatValues(const JArray< jfloat > &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(FloatPoint);
        extern PyTypeObject *PY_TYPE(FloatPoint);

        class t_FloatPoint {
        public:
          PyObject_HEAD
          FloatPoint object;
          static PyObject *wrap_Object(const FloatPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
