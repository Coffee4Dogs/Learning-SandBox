from django.urls import path
from . import views

urlpatterns =[
    path("polls/", include("polls.urls")),
    path("admin/", views.index, name="index"),
]