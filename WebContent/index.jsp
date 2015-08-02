<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head lang="en">
<title>Music Manager</title>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="stylesheet"
	href="http://maxcdn.bootstrapcdn.com/bootstrap/3.3.5/css/bootstrap.min.css">
<script
	src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.3/jquery.min.js"></script>
<script
	src="http://maxcdn.bootstrapcdn.com/bootstrap/3.3.5/js/bootstrap.min.js"></script>
</head>
<body>
	<form action="hello" method="post">
		<div class="modal-dialog">
			<div class="form-horizontal">
				<div class="form-group">
					<label class="control-label col-xs-1">Name:</label>
					<div class="col-lg-8">
						<input type="text" name="name" class="form-control" />
					</div>
				</div>

				<div class="form-group">
					<label class="control-label col-xs-1">Author:</label>
					<div class="col-lg-8">
						<input type="text" name="author" class="form-control">
					</div>
				</div>

				<div class="col-md-9 text-center">
					<button type="submit" name="Add" class="btn btn-primary">Add</button>
					<button type="submit" name="Add" class="btn btn-primary">Delete</button>
				</div>

				<div class="col-md-9 text-center">
					<table class="table table-striped">
						<thead>
							<tr>
								<th>Name</th>
								<th>Author</th>
							</tr>
						</thead>
						<tbody>
							<tr>

							</tr>
						</tbody>
					</table>
				</div>


			</div>

			<%--<button type="submit" name="submit" class="btn btn-inverse btn-block">Login</button>--%>
			<%--</form>--%>
		</div>
	</form>

</body>
</html>