#ifndef org_apache_lucene_document_BinaryPoint_H
#define org_apache_lucene_document_BinaryPoint_H

#include "org/apache/lucene/document/Field.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexableFieldType;
      }
      namespace search {
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class BinaryPoint : public ::org::apache::lucene::document::Field {
         public:
          enum {
            mid_init$_e88b77b557e3b4ce,
            mid_init$_923373ca1c892e07,
            mid_newExactQuery_080dc72afdd03681,
            mid_newRangeQuery_dc63e52097e2ec70,
            mid_newRangeQuery_86e0503aeb0931ac,
            mid_newSetQuery_5dc6e114228d6288,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BinaryPoint(jobject obj) : ::org::apache::lucene::document::Field(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BinaryPoint(const BinaryPoint& obj) : ::org::apache::lucene::document::Field(obj) {}

          BinaryPoint(const ::java::lang::String &, const JArray< JArray< jbyte > > &);
          BinaryPoint(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::index::IndexableFieldType &);

          static ::org::apache::lucene::search::Query newExactQuery(const ::java::lang::String &, const JArray< jbyte > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< jbyte > &, const JArray< jbyte > &);
          static ::org::apache::lucene::search::Query newRangeQuery(const ::java::lang::String &, const JArray< JArray< jbyte > > &, const JArray< JArray< jbyte > > &);
          static ::org::apache::lucene::search::Query newSetQuery(const ::java::lang::String &, const JArray< JArray< jbyte > > &);
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
        extern PyType_Def PY_TYPE_DEF(BinaryPoint);
        extern PyTypeObject *PY_TYPE(BinaryPoint);

        class t_BinaryPoint {
        public:
          PyObject_HEAD
          BinaryPoint object;
          static PyObject *wrap_Object(const BinaryPoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
