#ifndef org_apache_lucene_queries_intervals_FilteredIntervalsSource_H
#define org_apache_lucene_queries_intervals_FilteredIntervalsSource_H

#include "org/apache/lucene/queries/intervals/IntervalsSource.h"

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
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {
          class IntervalMatchesIterator;
          class IntervalIterator;
        }
      }
      namespace search {
        class QueryVisitor;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {

          class FilteredIntervalsSource : public ::org::apache::lucene::queries::intervals::IntervalsSource {
           public:
            enum {
              mid_init$_071af72004967fb5,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_intervals_ace1dbcddaadc96d,
              mid_matches_10d72833c4e0c293,
              mid_maxGaps_865e12603ebc5e5d,
              mid_maxWidth_865e12603ebc5e5d,
              mid_minExtent_bd89ce15dad49192,
              mid_pullUpDisjunctions_4a269b968b3a511f,
              mid_toString_e7df854526d67fa3,
              mid_visit_5f02824c31e51cfd,
              mid_accept_a5d323f4e6f4bfcb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FilteredIntervalsSource(jobject obj) : ::org::apache::lucene::queries::intervals::IntervalsSource(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FilteredIntervalsSource(const FilteredIntervalsSource& obj) : ::org::apache::lucene::queries::intervals::IntervalsSource(obj) {}

            FilteredIntervalsSource(const ::java::lang::String &, const ::org::apache::lucene::queries::intervals::IntervalsSource &);

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::org::apache::lucene::queries::intervals::IntervalIterator intervals(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReaderContext &) const;
            ::org::apache::lucene::queries::intervals::IntervalMatchesIterator matches(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
            static ::org::apache::lucene::queries::intervals::IntervalsSource maxGaps(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint);
            static ::org::apache::lucene::queries::intervals::IntervalsSource maxWidth(const ::org::apache::lucene::queries::intervals::IntervalsSource &, jint);
            jint minExtent() const;
            ::java::util::Collection pullUpDisjunctions() const;
            ::java::lang::String toString() const;
            void visit(const ::java::lang::String &, const ::org::apache::lucene::search::QueryVisitor &) const;
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
          extern PyType_Def PY_TYPE_DEF(FilteredIntervalsSource);
          extern PyTypeObject *PY_TYPE(FilteredIntervalsSource);

          class t_FilteredIntervalsSource {
          public:
            PyObject_HEAD
            FilteredIntervalsSource object;
            static PyObject *wrap_Object(const FilteredIntervalsSource&);
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
