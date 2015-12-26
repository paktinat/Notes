void ABCD()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul 15 17:59:37 2015) by ROOT version6.02/04
   TCanvas *c1 = new TCanvas("c1", "c1",5,25,1734,1024);
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
   TLatex *   tex = new TLatex(0.8375723,0.1312625,"M_{T2}/\\Sigma M_T^{\\tau_i}");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.06011561,0.7334711,"Charge/#tauIsolation");
   tex->SetTextSize(0.0268595);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}
