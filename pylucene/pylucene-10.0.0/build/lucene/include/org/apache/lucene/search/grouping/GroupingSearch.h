#ifndef org_apache_lucene_search_grouping_GroupingSearch_H
#define org_apache_lucene_search_grouping_GroupingSearch_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class GroupSelector;
          class TopGroups;
          class GroupingSearch;
        }
        class IndexSearcher;
        class Query;
        class Sort;
      }
      namespace util {
        class Bits;
      }
      namespace queries {
        namespace function {
          class ValueSource;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class GroupingSearch : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ee46a189998009d6,
              mid_init$_a28ff1cdbaf0bf6c,
              mid_init$_dddaabc7d6744e95,
              mid_init$_835d86704283a594,
              mid_disableCaching_9b9a57e90572c24c,
              mid_getAllGroupHeads_92a4f567193c49d1,
              mid_getAllMatchingGroups_4a269b968b3a511f,
              mid_search_c494f2bd8ce48a18,
              mid_setAllGroupHeads_9517ecc32dbb504e,
              mid_setAllGroups_9517ecc32dbb504e,
              mid_setCaching_197581ac964946a6,
              mid_setCachingInMB_c4dc0d47350ed166,
              mid_setGroupDocsLimit_231b32cf3aefed68,
              mid_setGroupDocsOffset_231b32cf3aefed68,
              mid_setGroupSort_a6aacd1411a7c087,
              mid_setIncludeMaxScore_9517ecc32dbb504e,
              mid_setSortWithinGroup_a6aacd1411a7c087,
              mid_groupByFieldOrFunction_c494f2bd8ce48a18,
              mid_groupByDocBlock_c494f2bd8ce48a18,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupingSearch(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupingSearch(const GroupingSearch& obj) : ::java::lang::Object(obj) {}

            GroupingSearch(const ::java::lang::String &);
            GroupingSearch(const ::org::apache::lucene::search::Query &);
            GroupingSearch(const ::org::apache::lucene::search::grouping::GroupSelector &);
            GroupingSearch(const ::org::apache::lucene::queries::function::ValueSource &, const ::java::util::Map &);

            GroupingSearch disableCaching() const;
            ::org::apache::lucene::util::Bits getAllGroupHeads() const;
            ::java::util::Collection getAllMatchingGroups() const;
            ::org::apache::lucene::search::grouping::TopGroups search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, jint, jint) const;
            GroupingSearch setAllGroupHeads(jboolean) const;
            GroupingSearch setAllGroups(jboolean) const;
            GroupingSearch setCaching(jint, jboolean) const;
            GroupingSearch setCachingInMB(jdouble, jboolean) const;
            GroupingSearch setGroupDocsLimit(jint) const;
            GroupingSearch setGroupDocsOffset(jint) const;
            GroupingSearch setGroupSort(const ::org::apache::lucene::search::Sort &) const;
            GroupingSearch setIncludeMaxScore(jboolean) const;
            GroupingSearch setSortWithinGroup(const ::org::apache::lucene::search::Sort &) const;
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
          extern PyType_Def PY_TYPE_DEF(GroupingSearch);
          extern PyTypeObject *PY_TYPE(GroupingSearch);

          class t_GroupingSearch {
          public:
            PyObject_HEAD
            GroupingSearch object;
            static PyObject *wrap_Object(const GroupingSearch&);
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
