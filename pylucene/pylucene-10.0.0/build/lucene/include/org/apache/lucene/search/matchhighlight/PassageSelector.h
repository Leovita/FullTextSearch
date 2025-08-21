#ifndef org_apache_lucene_search_matchhighlight_PassageSelector_H
#define org_apache_lucene_search_matchhighlight_PassageSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class Passage;
          class PassageAdjuster;
          class OffsetRange;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace util {
    class List;
    class Comparator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class PassageSelector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_7bc3047968c6f583,
              mid_pickBest_659d2f6b9af8526e,
              mid_pickBest_a8bd55ef4b1755ec,
              mid_pickDefaultPassage_52e2c7e70783d3a2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PassageSelector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PassageSelector(const PassageSelector& obj) : ::java::lang::Object(obj) {}

            static ::java::util::Comparator *DEFAULT_SCORER;

            PassageSelector();
            PassageSelector(const ::java::util::Comparator &, const ::org::apache::lucene::search::matchhighlight::PassageAdjuster &);

            ::java::util::List pickBest(const ::java::lang::CharSequence &, const ::java::util::List &, jint, jint) const;
            ::java::util::List pickBest(const ::java::lang::CharSequence &, const ::java::util::List &, jint, jint, const ::java::util::List &) const;
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
        namespace matchhighlight {
          extern PyType_Def PY_TYPE_DEF(PassageSelector);
          extern PyTypeObject *PY_TYPE(PassageSelector);

          class t_PassageSelector {
          public:
            PyObject_HEAD
            PassageSelector object;
            static PyObject *wrap_Object(const PassageSelector&);
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
