#ifndef org_apache_lucene_document_DoublePoint_H
#define org_apache_lucene_document_DoublePoint_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class Class;
    class Double;
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

        class DoublePoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_56f9393984b1aa05,
            mid_decodeDimension_c2e0de33baae7063,
            mid_encodeDimension_7d1aa5cb76acb208,
            mid_newExactQuery_38d35640db112494,
            mid_newRangeQuery_0678967a97ef81b7,
            mid_newRangeQuery_ff2ac9f72c2e19d4,
            mid_newSetQuery_64540f129849c16a,
            mid_newSetQuery_525d6c1fce01d552,
            mid_nextDown_8493a5edcb36d651,
            mid_nextUp_8493a5edcb36d651,
            mid_numericValue_b9665294ea488d3c,
            mid_pack_cc38a83d0e4c7475,
            mid_setBytesValue_920ce0cdf4259cc9,
            mid_setDoubleValue_a03f734ddaeb69b4,
            mid_setDoubleValues_7dc1191a69fe0b60,
            mid_toString_e7df854526d67fa3,
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
