#ifndef org_apache_lucene_search_grouping_AllGroupHeadsCollector_H
#define org_apache_lucene_search_grouping_AllGroupHeadsCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class GroupSelector;
          class AllGroupHeadsCollector;
        }
        class ScoreMode;
        class Scorable;
        class Sort;
      }
      namespace util {
        class FixedBitSet;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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
        namespace grouping {

          class AllGroupHeadsCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_collect_8226bd0b0fc13dba,
              mid_groupHeadsSize_bd89ce15dad49192,
              mid_newCollector_ea4452381ae91c03,
              mid_retrieveGroupHeads_4b72a28a860ae838,
              mid_retrieveGroupHeads_bc9f5479443cad82,
              mid_scoreMode_23e7061dcdc84768,
              mid_setScorer_c06bdf7d53c6460a,
              mid_newGroupHead_273cacf9407aa34a,
              mid_getCollectedGroupHeads_4a269b968b3a511f,
              mid_doSetNextReader_32243afefe6b151f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AllGroupHeadsCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AllGroupHeadsCollector(const AllGroupHeadsCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            void collect(jint) const;
            jint groupHeadsSize() const;
            static AllGroupHeadsCollector newCollector(const ::org::apache::lucene::search::grouping::GroupSelector &, const ::org::apache::lucene::search::Sort &);
            JArray< jint > retrieveGroupHeads() const;
            ::org::apache::lucene::util::FixedBitSet retrieveGroupHeads(jint) const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
            void setScorer(const ::org::apache::lucene::search::Scorable &) const;
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
      namespace search {
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(AllGroupHeadsCollector);
          extern PyTypeObject *PY_TYPE(AllGroupHeadsCollector);

          class t_AllGroupHeadsCollector {
          public:
            PyObject_HEAD
            AllGroupHeadsCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AllGroupHeadsCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AllGroupHeadsCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AllGroupHeadsCollector&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
