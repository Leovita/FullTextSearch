#ifndef org_apache_lucene_search_grouping_TermGroupSelector_H
#define org_apache_lucene_search_grouping_TermGroupSelector_H

#include "org/apache/lucene/search/grouping/GroupSelector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class SearchGroup;
          class GroupSelector$State;
        }
        class Scorable;
      }
      namespace util {
        class BytesRef;
      }
      namespace index {
        class LeafReaderContext;
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
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class TermGroupSelector : public ::org::apache::lucene::search::grouping::GroupSelector {
           public:
            enum {
              mid_init$_ee46a189998009d6,
              mid_advanceTo_15b8933896566317,
              mid_copyValue_adbedbc1fa61c358,
              mid_currentValue_adbedbc1fa61c358,
              mid_setGroups_b5398b431eb321fb,
              mid_setNextReader_32243afefe6b151f,
              mid_setScorer_c06bdf7d53c6460a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermGroupSelector(jobject obj) : ::org::apache::lucene::search::grouping::GroupSelector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermGroupSelector(const TermGroupSelector& obj) : ::org::apache::lucene::search::grouping::GroupSelector(obj) {}

            TermGroupSelector(const ::java::lang::String &);

            ::org::apache::lucene::search::grouping::GroupSelector$State advanceTo(jint) const;
            ::org::apache::lucene::util::BytesRef copyValue() const;
            ::org::apache::lucene::util::BytesRef currentValue() const;
            void setGroups(const ::java::util::Collection &) const;
            void setNextReader(const ::org::apache::lucene::index::LeafReaderContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(TermGroupSelector);
          extern PyTypeObject *PY_TYPE(TermGroupSelector);

          class t_TermGroupSelector {
          public:
            PyObject_HEAD
            TermGroupSelector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_TermGroupSelector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const TermGroupSelector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const TermGroupSelector&, PyTypeObject *);
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
