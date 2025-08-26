#ifndef org_apache_lucene_document_LongPoint_H
#define org_apache_lucene_document_LongPoint_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Class;
    class Number;
    class Long;
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

        class LongPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_9e52c7109c8baa43,
            mid_decodeDimension_6566cb2be8167573,
            mid_encodeDimension_722532cf3f3003a2,
            mid_newExactQuery_98e0283bae36d37a,
            mid_newRangeQuery_83653169e610b239,
            mid_newRangeQuery_d24bb07db2b1e6e7,
            mid_newSetQuery_bf074e07e7c212d7,
            mid_newSetQuery_525d6c1fce01d552,
            mid_numericValue_b9665294ea488d3c,
            mid_pack_e46322d5e87d00ca,
            mid_setBytesValue_920ce0cdf4259cc9,
            mid_setLongValue_1d3149fac12f2af3,
            mid_setLongValues_bf6da8fca8728f3d,
            mid_toString_e7df854526d67fa3,
            mid_unpack_31efd53223f74c29,
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
