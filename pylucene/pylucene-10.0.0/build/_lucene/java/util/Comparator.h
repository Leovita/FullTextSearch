#ifndef java_util_Comparator_H
#define java_util_Comparator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class ToIntFunction;
      class Function;
      class ToLongFunction;
      class ToDoubleFunction;
    }
    class Comparator;
  }
  namespace lang {
    class Class;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Comparator : public ::java::lang::Object {
     public:
      enum {
        mid_compare_69b7b8451ec9257c,
        mid_comparing_27cfff47b14c7bd8,
        mid_comparing_49beabb89d4e5de5,
        mid_comparingDouble_2fa8056b71cab02d,
        mid_comparingInt_7444a91bf14d79b1,
        mid_comparingLong_90cc471f6c429e5c,
        mid_equals_00d17418847797d4,
        mid_naturalOrder_5cc89c689cd941fe,
        mid_nullsFirst_32fbcabc9f5c9b30,
        mid_nullsLast_32fbcabc9f5c9b30,
        mid_reverseOrder_5cc89c689cd941fe,
        mid_reversed_5cc89c689cd941fe,
        mid_thenComparing_32fbcabc9f5c9b30,
        mid_thenComparing_27cfff47b14c7bd8,
        mid_thenComparing_49beabb89d4e5de5,
        mid_thenComparingDouble_2fa8056b71cab02d,
        mid_thenComparingInt_7444a91bf14d79b1,
        mid_thenComparingLong_90cc471f6c429e5c,
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
