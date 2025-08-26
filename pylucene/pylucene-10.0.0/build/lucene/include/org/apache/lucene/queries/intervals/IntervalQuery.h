#ifndef org_apache_lucene_queries_intervals_IntervalQuery_H
#define org_apache_lucene_queries_intervals_IntervalQuery_H

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
      namespace queries {
        namespace intervals {

          class IntervalQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_071af72004967fb5,
              mid_init$_5cab293f3a7c8750,
              mid_init$_9a9d0d1b876e37b4,
              mid_createWeight_dc54d493278607e4,
              mid_equals_00d17418847797d4,
              mid_getField_e7df854526d67fa3,
              mid_hashCode_bd89ce15dad49192,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
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
