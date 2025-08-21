#ifndef org_apache_lucene_document_DoublePoint_H
#define org_apache_lucene_document_DoublePoint_H

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
    class Double;
    class Number;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class DoublePoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_9119e6eea2cc0516,
            mid_decodeDimension_e3202a91a6cc1d13,
            mid_encodeDimension_472e15952d6511c2,
            mid_newExactQuery_c7a27db7697a3b7b,
            mid_newRangeQuery_144f71b949e45671,
            mid_newRangeQuery_af7ead373e629f65,
            mid_newSetQuery_d5601452d338b358,
            mid_newSetQuery_9484176e9ce4ba1f,
            mid_nextDown_8fff3d7dcb9fddc5,
            mid_nextUp_8fff3d7dcb9fddc5,
            mid_numericValue_1b3282bb4db06655,
            mid_pack_3404ef6dbb0e1a97,
            mid_setBytesValue_ac0de3ee0e03786d,
            mid_setDoubleValue_b5bc1a2fb9ff9e90,
            mid_setDoubleValues_fdfa19ef08e3e691,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DoublePoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DoublePoint(const DoublePoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          DoublePoint(const ::java::lang::String &, const JArray< jdouble > &);

          static jdouble decodeDimension(const JArray< jbyte > &, jint);
          static void encodeDimension(jdouble, const JArray< jbyte > &, jint);
          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, jdouble);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, jdouble, jdouble);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< jdouble > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const ::java::util::Collection &);
          static jdouble nextDown(jdouble);
          static jdouble nextUp(jdouble);
          ::java::lang::Number numericValue() const;
          static ::org::apache::lucene::util::BytesRef pack(const JArray< jdouble > &);
          void setBytesValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setDoubleValue(jdouble) const;
          void setDoubleValues(const JArray< jdouble > &) const;
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
        extern PyType_Def PY_TYPE_DEF(DoublePoint);
        extern PyTypeObject *PY_TYPE(DoublePoint);

        class t_DoublePoint {
        public:
          PyObject_HEAD
          DoublePoint object;
          static PyObject *wrap_Object(const DoublePoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
