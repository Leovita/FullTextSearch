#ifndef org_apache_lucene_search_matchhighlight_FieldValueHighlighters_H
#define org_apache_lucene_search_matchhighlight_FieldValueHighlighters_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Predicate;
    }
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class PassageFormatter;
          class MatchHighlighter$FieldValueHighlighter;
          class PassageSelector;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class FieldValueHighlighters : public ::java::lang::Object {
           public:
            enum {
              mid_defaultPassageSelector_1b7dcd5fd3ca3c2e,
              mid_highlighted_7400de7e153e5d2c,
              mid_maxLeadingCharacters_68d0686d1a438ce1,
              mid_skipRemaining_bdad1913c8377fe7,
              mid_verbatimValue_a4142c191d256ccc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldValueHighlighters(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldValueHighlighters(const FieldValueHighlighters& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::search::matchhighlight::PassageSelector defaultPassageSelector();
            static ::org::apache::lucene::search::matchhighlight::MatchHighlighter$FieldValueHighlighter highlighted(jint, jint, const ::org::apache::lucene::search::matchhighlight::PassageFormatter &, const ::java::util::function::Predicate &);
            static ::org::apache::lucene::search::matchhighlight::MatchHighlighter$FieldValueHighlighter maxLeadingCharacters(jint, const ::java::lang::String &, const ::java::util::Set &);
            static ::org::apache::lucene::search::matchhighlight::MatchHighlighter$FieldValueHighlighter skipRemaining();
            static ::org::apache::lucene::search::matchhighlight::MatchHighlighter$FieldValueHighlighter verbatimValue(const ::java::lang::String &, const JArray< ::java::lang::String > &);
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
          extern PyType_Def PY_TYPE_DEF(FieldValueHighlighters);
          extern PyTypeObject *PY_TYPE(FieldValueHighlighters);

          class t_FieldValueHighlighters {
          public:
            PyObject_HEAD
            FieldValueHighlighters object;
            static PyObject *wrap_Object(const FieldValueHighlighters&);
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
