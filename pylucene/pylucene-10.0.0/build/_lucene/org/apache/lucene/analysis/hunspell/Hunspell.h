#ifndef org_apache_lucene_analysis_hunspell_Hunspell_H
#define org_apache_lucene_analysis_hunspell_Hunspell_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Runnable;
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class TimeoutPolicy;
          class AffixedWord;
          class EntrySuggestion;
          class Dictionary;
          class SuggestionTimeoutException;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class Hunspell : public ::java::lang::Object {
           public:
            enum {
              mid_init$_081d976eaef7e2bb,
              mid_init$_4103eff5f3c62ac6,
              mid_analyzeSimpleWord_49920ced44282529,
              mid_compress_d50f639aec147b86,
              mid_getAllWordForms_49920ced44282529,
              mid_getRoots_49920ced44282529,
              mid_spell_94f7e759d94961b0,
              mid_suggest_49920ced44282529,
              mid_suggest_cb9f4139110d624d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Hunspell(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Hunspell(const Hunspell& obj) : ::java::lang::Object(obj) {}

            Hunspell(const ::org::apache::lucene::analysis::hunspell::Dictionary &);
            Hunspell(const ::org::apache::lucene::analysis::hunspell::Dictionary &, const ::org::apache::lucene::analysis::hunspell::TimeoutPolicy &, const ::java::lang::Runnable &);

            ::java::util::List analyzeSimpleWord(const ::java::lang::String &) const;
            ::org::apache::lucene::analysis::hunspell::EntrySuggestion compress(const ::java::util::List &) const;
            ::java::util::List getAllWordForms(const ::java::lang::String &) const;
            ::java::util::List getRoots(const ::java::lang::String &) const;
            jboolean spell(const ::java::lang::String &) const;
            ::java::util::List suggest(const ::java::lang::String &) const;
            ::java::util::List suggest(const ::java::lang::String &, jlong) const;
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
      namespace analysis {
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(Hunspell);
          extern PyTypeObject *PY_TYPE(Hunspell);

          class t_Hunspell {
          public:
            PyObject_HEAD
            Hunspell object;
            static PyObject *wrap_Object(const Hunspell&);
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
