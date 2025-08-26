#ifndef org_apache_lucene_search_PointInSetQuery_H
#define org_apache_lucene_search_PointInSetQuery_H

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
      namespace util {
        class Accountable;
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
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class PointInSetQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_createWeight_dc54d493278607e4,
            mid_equals_00d17418847797d4,
            mid_getBytesPerDim_bd89ce15dad49192,
            mid_getField_e7df854526d67fa3,
            mid_getNumDims_bd89ce15dad49192,
            mid_getPackedPoints_4a269b968b3a511f,
            mid_hashCode_bd89ce15dad49192,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_toString_fef9c036acf290a9,
            mid_visit_85475af8e8904ab4,
            mid_toString_e16a141122e42829,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointInSetQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointInSetQuery(const PointInSetQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint getBytesPerDim() const;
          ::java::lang::String getField() const;
          jint getNumDims() const;
          ::java::util::Collection getPackedPoints() const;
          jint hashCode() const;
          jlong ramBytesUsed() const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(PointInSetQuery);
        extern PyTypeObject *PY_TYPE(PointInSetQuery);

        class t_PointInSetQuery {
        public:
          PyObject_HEAD
          PointInSetQuery object;
          static PyObject *wrap_Object(const PointInSetQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
