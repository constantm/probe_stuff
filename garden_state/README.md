# GardenState

Project for reading and displaying garden parameters from an Arduino via serial port.

## Installation

If [available in Hex](https://hex.pm/docs/publish), the package can be installed as:

  1. Add garden_state to your list of dependencies in `mix.exs`:

        def deps do
          [{:garden_state, "~> 0.0.1"}]
        end

  2. Ensure garden_state is started before your application:

        def application do
          [applications: [:garden_state]]
        end

