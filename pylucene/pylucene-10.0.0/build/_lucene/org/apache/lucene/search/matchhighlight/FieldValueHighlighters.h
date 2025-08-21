#ifndef org_apache_lucene_search_matchhighlight_FieldValueHighlighters_H
#define org_apache_lucene_search_matchhighlight_FieldValueHighlighters_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Set;
    namespace function {
      class Predicate;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class MatchHighlighter$FieldValueHighlighter;
          class PassageSelector;
          class PassageFormatter;
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
              mid_defaultPassageSelector_e708d3d2654adcd6,
              mid_highlighted_e3cad40d42e01769,
              mid_maxLeadingCharacters_3cd52ab6f73d912e,
              mid_skipRemaining_c6a6cd618173b2de,
              mid_verbatimValue_62de9f2dfbbb0041,
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
