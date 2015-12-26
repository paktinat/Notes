void /home/hbakhshi/Downloads/Copy/Files/Copy/MonthlyLogs/2015/07July15/STau/ABCD2()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Dec 26 17:46:09 2015) by ROOT version6.02/04
   TCanvas *c1 = new TCanvas("c1", "c1",10,81,1734,1054);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   TArrow *arrow = new TArrow(0.08,0.2,0.08,0.95,0.02,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineWidth(3);
   arrow->SetAngle(54);
   arrow->Draw();
   arrow = new TArrow(0.08,0.2,0.95,0.2,0.02,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->SetLineWidth(3);
   arrow->SetAngle(54);
   arrow->Draw();
   TLatex *   tex = new TLatex(0.8306358,0.1412826,"M_{T2}\\;or\\;\\Sigma M_T^{\\tau_i}");
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.05317919,0.7715431,"Charge\\;or \\; \\tau Isolation");
   tex->SetTextAlign(22);
   tex->SetTextSize(0.04);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}
