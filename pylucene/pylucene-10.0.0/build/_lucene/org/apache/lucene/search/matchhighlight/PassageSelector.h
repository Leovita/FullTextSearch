#ifndef org_apache_lucene_search_matchhighlight_PassageSelector_H
#define org_apache_lucene_search_matchhighlight_PassageSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class PassageAdjuster;
          class OffsetRange;
          class Passage;
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
    class Comparator;
    class List;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_df2d0639b6d7fdd6,
              mid_pickBest_eed2f434edf9e7f9,
              mid_pickBest_0e3a3d844dcb4746,
              mid_pickDefaultPassage_22b71cf7cf7ac372,
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
