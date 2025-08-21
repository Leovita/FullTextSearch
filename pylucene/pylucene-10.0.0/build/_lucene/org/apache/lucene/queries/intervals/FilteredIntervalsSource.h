#ifndef org_apache_lucene_queries_intervals_FilteredIntervalsSource_H
#define org_apache_lucene_queries_intervals_FilteredIntervalsSource_H

#include "org/apache/lucene/queries/intervals/IntervalsSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {
          class IntervalIterator;
          class IntervalMatchesIterator;
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
      namespace queries {
        namespace intervals {

          class FilteredIntervalsSource : public ::org::apache::lucene::queries::intervals::IntervalsSource {
           public:
            enum {
              mid_init$_d15d0d59212300c1,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_intervals_1bd3f71593e381ee,
              mid_matches_088afda15bab86d5,
              mid_maxGaps_6d3e68bd024fdd35,
              mid_maxWidth_6d3e68bd024fdd35,
              mid_minExtent_20fbf7565993c3d7,
              mid_pullUpDisjunctions_aa58b3beec16cbbd,
              mid_toString_09a7afff1868fc5e,
              mid_visit_c97c62e73c4b5880,
              mid_accept_9d5e63f231ba931f,
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
