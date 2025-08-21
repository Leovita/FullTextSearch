#ifndef org_apache_lucene_search_grouping_GroupingSearch_H
#define org_apache_lucene_search_grouping_GroupingSearch_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class Sort;
        namespace grouping {
          class GroupingSearch;
          class GroupSelector;
          class TopGroups;
        }
        class IndexSearcher;
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
  namespace util {
    class Collection;
    class Map;
  }
  namespace lang {
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
      namespace search {
        namespace grouping {

          class GroupingSearch : public ::java::lang::Object {
           public:
            enum {
              mid_init$_0d82408c6e55bc30,
              mid_init$_d7278af460a7b96a,
              mid_init$_665eebd6bb04e638,
              mid_init$_18272dfd6f608e97,
              mid_disableCaching_8b3a5dc395b036be,
              mid_getAllGroupHeads_959b4f7101dd7f4b,
              mid_getAllMatchingGroups_aa58b3beec16cbbd,
              mid_search_05faad07f2abb954,
              mid_setAllGroupHeads_3b9f2608e509ed64,
              mid_setAllGroups_3b9f2608e509ed64,
              mid_setCaching_611246f7e167c777,
              mid_setCachingInMB_d5e101a3f32d1e82,
              mid_setGroupDocsLimit_2a59a8dd6f55f7fa,
              mid_setGroupDocsOffset_2a59a8dd6f55f7fa,
              mid_setGroupSort_6993ad4f0d1c1f25,
              mid_setIncludeMaxScore_3b9f2608e509ed64,
              mid_setSortWithinGroup_6993ad4f0d1c1f25,
              mid_groupByFieldOrFunction_05faad07f2abb954,
              mid_groupByDocBlock_05faad07f2abb954,
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
