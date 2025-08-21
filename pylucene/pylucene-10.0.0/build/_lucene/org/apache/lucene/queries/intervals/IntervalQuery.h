#ifndef org_apache_lucene_queries_intervals_IntervalQuery_H
#define org_apache_lucene_queries_intervals_IntervalQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class QueryVisitor;
        class ScoreMode;
        class Weight;
        class IndexSearcher;
      }
      namespace queries {
        namespace intervals {
          class IntervalsSource;
        }
      }
    }
  }
}
namespace java {
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
      namespace queries {
        namespace intervals {

          class IntervalQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_d15d0d59212300c1,
              mid_init$_43773e8449659975,
              mid_init$_677c8089b09bee2b,
              mid_createWeight_77fe52950093e704,
              mid_equals_570b5248a6da3ef6,
              mid_getField_09a7afff1868fc5e,
              mid_hashCode_20fbf7565993c3d7,
              mid_toString_cb0eb1432185fc94,
              mid_visit_1b22ec612b613eea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntervalQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntervalQuery(const IntervalQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            IntervalQuery(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);
            IntervalQuery(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &, jfloat);
            IntervalQuery(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &, jfloat, jfloat);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getField() const;
            jint hashCode() const;
            ::java::lang::String toString(const ::java::lang::String &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {
          extern PyType_Def PY_TYPE_DEF(IntervalQuery);
          extern PyTypeObject *PY_TYPE(IntervalQuery);

          class t_IntervalQuery {
          public:
            PyObject_HEAD
            IntervalQuery object;
            static PyObject *wrap_Object(const IntervalQuery&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
