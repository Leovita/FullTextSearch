#ifndef org_apache_lucene_document_XYDocValuesPointInGeometryQuery_H
#define org_apache_lucene_document_XYDocValuesPointInGeometryQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Weight;
        class QueryVisitor;
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class XYDocValuesPointInGeometryQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_createWeight_dc54d493278607e4,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_fef9c036acf290a9,
            mid_visit_85475af8e8904ab4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit XYDocValuesPointInGeometryQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          XYDocValuesPointInGeometryQuery(const XYDocValuesPointInGeometryQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::java::lang::String toString(const ::java::lang::String &) const;
          void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
        extern PyType_Def PY_TYPE_DEF(XYDocValuesPointInGeometryQuery);
        extern PyTypeObject *PY_TYPE(XYDocValuesPointInGeometryQuery);

        class t_XYDocValuesPointInGeometryQuery {
        public:
          PyObject_HEAD
          XYDocValuesPointInGeometryQuery object;
          static PyObject *wrap_Object(const XYDocValuesPointInGeometryQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
