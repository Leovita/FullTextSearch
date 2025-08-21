#ifndef org_apache_lucene_search_PointInSetQuery_H
#define org_apache_lucene_search_PointInSetQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace search {
        class QueryVisitor;
        class ScoreMode;
        class Weight;
        class IndexSearcher;
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
    class Object;
  }
  namespace io {
    class IOException;
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
            mid_createWeight_77fe52950093e704,
            mid_equals_570b5248a6da3ef6,
            mid_getBytesPerDim_20fbf7565993c3d7,
            mid_getField_09a7afff1868fc5e,
            mid_getNumDims_20fbf7565993c3d7,
            mid_getPackedPoints_aa58b3beec16cbbd,
            mid_hashCode_20fbf7565993c3d7,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_toString_cb0eb1432185fc94,
            mid_visit_1b22ec612b613eea,
            mid_toString_6629ab823d439f65,
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
