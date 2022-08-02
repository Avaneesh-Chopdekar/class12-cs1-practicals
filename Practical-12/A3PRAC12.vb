Private Sub cmbShape_Click()
    
    If cmbShape.Text = "Circle" Then
    
        lblRadius.Visible = True
        txtRadius.Visible = True
        lblLength.Visible = False
        txtLength.Visible = False
        lblBreadth.Visible = False
        txtBreadth.Visible = False
        Shape1.Shape = 3
        Shape1.Visible = True

    ElseIf cmbShape.Text = "Rectangle" Then

        lblLength.Visible = True
        txtLength.Visible = True
        lblBreadth.Visible = True
        txtBreadth.Visible = True
        lblRadius.Visible = False
        txtRadius.Visible = False
        Shape1.Shape = 0
        Shape1.Visible = True

    End If

End Sub

Private Sub cmdArea_Click()

    Dim a As Double

    If cmbShape.Text = "Circle" Then
        a = 3.14 * CDbl(txtRadius.Text) * CDbl(txtRadius.Text)
        MsgBox("Area = " & a)
    Else
        a = CDbl(txtLength.Text) * CDbl(txtBreadth.Text)
        MsgBox("Area = " & a)
    End If

End Sub
