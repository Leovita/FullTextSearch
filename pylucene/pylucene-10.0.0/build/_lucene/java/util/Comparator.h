#ifndef java_util_Comparator_H
#define java_util_Comparator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
  }
  namespace util {
    namespace function {
      class ToDoubleFunction;
      class ToLongFunction;
      class Function;
      class ToIntFunction;
    }
    class Comparator;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Comparator : public ::java::lang::Object {
     public:
      enum {
        mid_compare_40855b2159b37f04,
        mid_comparing_a7da6949807fd8af,
        mid_comparing_161c3cca822c58f1,
        mid_comparingDouble_d7b8365ef53bfede,
        mid_comparingInt_779969723e896174,
        mid_comparingLong_86d88a362783f543,
        mid_equals_570b5248a6da3ef6,
        mid_naturalOrder_39238840448c1807,
        mid_nullsFirst_5881a6ca7ceb37bb,
        mid_nullsLast_5881a6ca7ceb37bb,
        mid_reverseOrder_39238840448c1807,
        mid_reversed_39238840448c1807,
        mid_thenComparing_5881a6ca7ceb37bb,
        mid_thenComparing_a7da6949807fd8af,
        mid_thenComparing_161c3cca822c58f1,
        mid_thenComparingDouble_d7b8365ef53bfede,
        mid_thenComparingInt_779969723e896174,
        mid_thenComparingLong_86d88a362783f543,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Comparator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Comparator(const Comparator& obj) : ::java::lang::Object(obj) {}

      jint compare(const ::java::lang::Object &, const ::java::lang::Object &) const;
      static Comparator comparing(const ::java::util::function::Function &);
      static Comparator comparing(const ::java::util::function::Function &, const Comparator &);
      static Comparator comparingDouble(const ::java::util::function::ToDoubleFunction &);
      static Comparator comparingInt(const ::java::util::function::ToIntFunction &);
      static Comparator comparingLong(const ::java::util::function::ToLongFunction &);
      jboolean equals(const ::java::lang::Object &) const;
      static Comparator naturalOrder();
      static Comparator nullsFirst(const Comparator &);
      static Comparator nullsLast(const Comparator &);
      static Comparator reverseOrder();
      Comparator reversed() const;
      Comparator thenComparing(const Comparator &) const;
      Comparator thenComparing(const ::java::util::function::Function &) const;
      Comparator thenComparing(const ::java::util::function::Function &, const Comparator &) const;
      Comparator thenComparingDouble(const ::java::util::function::ToDoubleFunction &) const;
      Comparator thenComparingInt(const ::java::util::function::ToIntFunction &) const;
      Comparator thenComparingLong(const ::java::util::function::ToLongFunction &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Comparator);
    extern PyTypeObject *PY_TYPE(Comparator);

    class t_Comparator {
    public:
      PyObject_HEAD
      Comparator object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Comparator *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Comparator&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Comparator&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
