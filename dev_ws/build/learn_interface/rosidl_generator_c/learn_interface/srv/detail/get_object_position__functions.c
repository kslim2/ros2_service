// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from learn_interface:srv/GetObjectPosition.idl
// generated code does not contain a copyright notice
#include "learn_interface/srv/detail/get_object_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
learn_interface__srv__GetObjectPosition_Request__init(learn_interface__srv__GetObjectPosition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // get
  return true;
}

void
learn_interface__srv__GetObjectPosition_Request__fini(learn_interface__srv__GetObjectPosition_Request * msg)
{
  if (!msg) {
    return;
  }
  // get
}

bool
learn_interface__srv__GetObjectPosition_Request__are_equal(const learn_interface__srv__GetObjectPosition_Request * lhs, const learn_interface__srv__GetObjectPosition_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // get
  if (lhs->get != rhs->get) {
    return false;
  }
  return true;
}

bool
learn_interface__srv__GetObjectPosition_Request__copy(
  const learn_interface__srv__GetObjectPosition_Request * input,
  learn_interface__srv__GetObjectPosition_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // get
  output->get = input->get;
  return true;
}

learn_interface__srv__GetObjectPosition_Request *
learn_interface__srv__GetObjectPosition_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learn_interface__srv__GetObjectPosition_Request * msg = (learn_interface__srv__GetObjectPosition_Request *)allocator.allocate(sizeof(learn_interface__srv__GetObjectPosition_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learn_interface__srv__GetObjectPosition_Request));
  bool success = learn_interface__srv__GetObjectPosition_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
learn_interface__srv__GetObjectPosition_Request__destroy(learn_interface__srv__GetObjectPosition_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    learn_interface__srv__GetObjectPosition_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
learn_interface__srv__GetObjectPosition_Request__Sequence__init(learn_interface__srv__GetObjectPosition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learn_interface__srv__GetObjectPosition_Request * data = NULL;

  if (size) {
    data = (learn_interface__srv__GetObjectPosition_Request *)allocator.zero_allocate(size, sizeof(learn_interface__srv__GetObjectPosition_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learn_interface__srv__GetObjectPosition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learn_interface__srv__GetObjectPosition_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
learn_interface__srv__GetObjectPosition_Request__Sequence__fini(learn_interface__srv__GetObjectPosition_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      learn_interface__srv__GetObjectPosition_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

learn_interface__srv__GetObjectPosition_Request__Sequence *
learn_interface__srv__GetObjectPosition_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learn_interface__srv__GetObjectPosition_Request__Sequence * array = (learn_interface__srv__GetObjectPosition_Request__Sequence *)allocator.allocate(sizeof(learn_interface__srv__GetObjectPosition_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = learn_interface__srv__GetObjectPosition_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
learn_interface__srv__GetObjectPosition_Request__Sequence__destroy(learn_interface__srv__GetObjectPosition_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    learn_interface__srv__GetObjectPosition_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
learn_interface__srv__GetObjectPosition_Request__Sequence__are_equal(const learn_interface__srv__GetObjectPosition_Request__Sequence * lhs, const learn_interface__srv__GetObjectPosition_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!learn_interface__srv__GetObjectPosition_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
learn_interface__srv__GetObjectPosition_Request__Sequence__copy(
  const learn_interface__srv__GetObjectPosition_Request__Sequence * input,
  learn_interface__srv__GetObjectPosition_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(learn_interface__srv__GetObjectPosition_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    learn_interface__srv__GetObjectPosition_Request * data =
      (learn_interface__srv__GetObjectPosition_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!learn_interface__srv__GetObjectPosition_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          learn_interface__srv__GetObjectPosition_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!learn_interface__srv__GetObjectPosition_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
learn_interface__srv__GetObjectPosition_Response__init(learn_interface__srv__GetObjectPosition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
learn_interface__srv__GetObjectPosition_Response__fini(learn_interface__srv__GetObjectPosition_Response * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
learn_interface__srv__GetObjectPosition_Response__are_equal(const learn_interface__srv__GetObjectPosition_Response * lhs, const learn_interface__srv__GetObjectPosition_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
learn_interface__srv__GetObjectPosition_Response__copy(
  const learn_interface__srv__GetObjectPosition_Response * input,
  learn_interface__srv__GetObjectPosition_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

learn_interface__srv__GetObjectPosition_Response *
learn_interface__srv__GetObjectPosition_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learn_interface__srv__GetObjectPosition_Response * msg = (learn_interface__srv__GetObjectPosition_Response *)allocator.allocate(sizeof(learn_interface__srv__GetObjectPosition_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learn_interface__srv__GetObjectPosition_Response));
  bool success = learn_interface__srv__GetObjectPosition_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
learn_interface__srv__GetObjectPosition_Response__destroy(learn_interface__srv__GetObjectPosition_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    learn_interface__srv__GetObjectPosition_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
learn_interface__srv__GetObjectPosition_Response__Sequence__init(learn_interface__srv__GetObjectPosition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learn_interface__srv__GetObjectPosition_Response * data = NULL;

  if (size) {
    data = (learn_interface__srv__GetObjectPosition_Response *)allocator.zero_allocate(size, sizeof(learn_interface__srv__GetObjectPosition_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learn_interface__srv__GetObjectPosition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learn_interface__srv__GetObjectPosition_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
learn_interface__srv__GetObjectPosition_Response__Sequence__fini(learn_interface__srv__GetObjectPosition_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      learn_interface__srv__GetObjectPosition_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

learn_interface__srv__GetObjectPosition_Response__Sequence *
learn_interface__srv__GetObjectPosition_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learn_interface__srv__GetObjectPosition_Response__Sequence * array = (learn_interface__srv__GetObjectPosition_Response__Sequence *)allocator.allocate(sizeof(learn_interface__srv__GetObjectPosition_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = learn_interface__srv__GetObjectPosition_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
learn_interface__srv__GetObjectPosition_Response__Sequence__destroy(learn_interface__srv__GetObjectPosition_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    learn_interface__srv__GetObjectPosition_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
learn_interface__srv__GetObjectPosition_Response__Sequence__are_equal(const learn_interface__srv__GetObjectPosition_Response__Sequence * lhs, const learn_interface__srv__GetObjectPosition_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!learn_interface__srv__GetObjectPosition_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
learn_interface__srv__GetObjectPosition_Response__Sequence__copy(
  const learn_interface__srv__GetObjectPosition_Response__Sequence * input,
  learn_interface__srv__GetObjectPosition_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(learn_interface__srv__GetObjectPosition_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    learn_interface__srv__GetObjectPosition_Response * data =
      (learn_interface__srv__GetObjectPosition_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!learn_interface__srv__GetObjectPosition_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          learn_interface__srv__GetObjectPosition_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!learn_interface__srv__GetObjectPosition_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
