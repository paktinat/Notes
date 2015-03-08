{
//=========Macro generated from canvas: muTau_log_comp_overlay/
//=========  (Sun Mar  8 17:47:10 2015) by ROOT version5.34/03
   TCanvas *muTau_log_comp_overlay = new TCanvas("muTau_log_comp_overlay", "",1,52,600,630);
   gStyle->SetOptFit(1);
   muTau_log_comp_overlay->Range(-121.6216,-3.072356,554.0541,2.4202);
   muTau_log_comp_overlay->SetFillColor(0);
   muTau_log_comp_overlay->SetFillStyle(4000);
   muTau_log_comp_overlay->SetBorderMode(0);
   muTau_log_comp_overlay->SetBorderSize(2);
   muTau_log_comp_overlay->SetLogy();
   muTau_log_comp_overlay->SetLeftMargin(0.18);
   muTau_log_comp_overlay->SetRightMargin(0.08);
   muTau_log_comp_overlay->SetTopMargin(0.07);
   muTau_log_comp_overlay->SetBottomMargin(0.17);
   muTau_log_comp_overlay->SetFrameFillStyle(0);
   muTau_log_comp_overlay->SetFrameLineWidth(3);
   muTau_log_comp_overlay->SetFrameBorderMode(0);
   muTau_log_comp_overlay->SetFrameBorderSize(0);
   muTau_log_comp_overlay->SetFrameFillStyle(0);
   muTau_log_comp_overlay->SetFrameLineWidth(3);
   muTau_log_comp_overlay->SetFrameBorderMode(0);
   muTau_log_comp_overlay->SetFrameBorderSize(0);
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("");
   h_stack->SetMinimum(0.02);
   h_stack->SetMaximum(63.83611);
   
   TH1F *h__stack_1 = new TH1F("h__stack_1","",10,0,500);
   h__stack_1->SetMinimum(0.007267394);
   h__stack_1->SetMaximum(108.5729);
   h__stack_1->SetDirectory(0);
   h__stack_1->SetStats(0);
   h__stack_1->SetLineWidth(2);
   h__stack_1->GetXaxis()->SetTitle("tauMT");
   h__stack_1->GetXaxis()->SetNdivisions(505);
   h__stack_1->GetXaxis()->SetLabelFont(42);
   h__stack_1->GetXaxis()->SetLabelSize(0.05);
   h__stack_1->GetXaxis()->SetTitleSize(0.05);
   h__stack_1->GetXaxis()->SetTitleOffset(1.1);
   h__stack_1->GetXaxis()->SetTitleFont(42);
   h__stack_1->GetYaxis()->SetTitle("Events");
   h__stack_1->GetYaxis()->SetNdivisions(505);
   h__stack_1->GetYaxis()->SetLabelFont(42);
   h__stack_1->GetYaxis()->SetLabelSize(0.05);
   h__stack_1->GetYaxis()->SetTitleSize(0.05);
   h__stack_1->GetYaxis()->SetTitleOffset(1.3);
   h__stack_1->GetYaxis()->SetTitleFont(42);
   h__stack_1->GetZaxis()->SetLabelFont(42);
   h__stack_1->GetZaxis()->SetLabelSize(0.035);
   h__stack_1->GetZaxis()->SetTitleSize(0.035);
   h__stack_1->GetZaxis()->SetTitleFont(42);
   h_stack->SetHistogram(h__stack_1);
   
   Double_t xAxis1[11] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h__QCD = new TH1D("h__QCD","",10, xAxis1);
   h__QCD->SetEntries(112);
   h__QCD->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#cccc00");
   h__QCD->SetFillColor(ci);

   ci = TColor::GetColor("#cccc00");
   h__QCD->SetLineColor(ci);
   h__QCD->SetLineWidth(2);

   ci = TColor::GetColor("#cccc00");
   h__QCD->SetMarkerColor(ci);
   h__QCD->GetXaxis()->SetNdivisions(505);
   h__QCD->GetXaxis()->SetLabelFont(42);
   h__QCD->GetXaxis()->SetLabelSize(0.07);
   h__QCD->GetXaxis()->SetTitleSize(0.07);
   h__QCD->GetXaxis()->SetTitleOffset(1.1);
   h__QCD->GetXaxis()->SetTitleFont(42);
   h__QCD->GetYaxis()->SetNdivisions(505);
   h__QCD->GetYaxis()->SetLabelFont(42);
   h__QCD->GetYaxis()->SetLabelSize(0.07);
   h__QCD->GetYaxis()->SetTitleSize(0.07);
   h__QCD->GetYaxis()->SetTitleOffset(1.3);
   h__QCD->GetYaxis()->SetTitleFont(42);
   h__QCD->GetZaxis()->SetLabelFont(42);
   h__QCD->GetZaxis()->SetLabelSize(0.035);
   h__QCD->GetZaxis()->SetTitleSize(0.035);
   h__QCD->GetZaxis()->SetTitleFont(42);
   h_stack->Add(h__QCD,"");
   Double_t xAxis2[11] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h__Wjets = new TH1D("h__Wjets","",10, xAxis2);
   h__Wjets->SetBinContent(3,11.16586);
   h__Wjets->SetBinContent(4,5.715386);
   h__Wjets->SetBinContent(5,0.6290485);
   h__Wjets->SetBinContent(6,0.01281987);
   h__Wjets->SetBinContent(7,0.1451119);
   h__Wjets->SetBinError(3,4.110604);
   h__Wjets->SetBinError(4,3.00175);
   h__Wjets->SetBinError(5,0.4449139);
   h__Wjets->SetBinError(6,0.01281987);
   h__Wjets->SetBinError(7,0.1451119);
   h__Wjets->SetEntries(44);
   h__Wjets->SetStats(0);

   ci = TColor::GetColor("#00cc00");
   h__Wjets->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   h__Wjets->SetLineColor(ci);
   h__Wjets->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   h__Wjets->SetMarkerColor(ci);
   h__Wjets->GetXaxis()->SetNdivisions(505);
   h__Wjets->GetXaxis()->SetLabelFont(42);
   h__Wjets->GetXaxis()->SetLabelSize(0.07);
   h__Wjets->GetXaxis()->SetTitleSize(0.07);
   h__Wjets->GetXaxis()->SetTitleOffset(1.1);
   h__Wjets->GetXaxis()->SetTitleFont(42);
   h__Wjets->GetYaxis()->SetNdivisions(505);
   h__Wjets->GetYaxis()->SetLabelFont(42);
   h__Wjets->GetYaxis()->SetLabelSize(0.07);
   h__Wjets->GetYaxis()->SetTitleSize(0.07);
   h__Wjets->GetYaxis()->SetTitleOffset(1.3);
   h__Wjets->GetYaxis()->SetTitleFont(42);
   h__Wjets->GetZaxis()->SetLabelFont(42);
   h__Wjets->GetZaxis()->SetLabelSize(0.035);
   h__Wjets->GetZaxis()->SetTitleSize(0.035);
   h__Wjets->GetZaxis()->SetTitleFont(42);
   h_stack->Add(h__Wjets,"");
   Double_t xAxis3[11] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h__Zjets = new TH1D("h__Zjets","",10, xAxis3);
   h__Zjets->SetBinContent(3,0.2523331);
   h__Zjets->SetBinContent(4,0.6430037);
   h__Zjets->SetBinContent(5,0.1355882);
   h__Zjets->SetBinContent(6,0.09237369);
   h__Zjets->SetBinContent(7,0.03586079);
   h__Zjets->SetBinContent(9,0.01405187);
   h__Zjets->SetBinError(3,0.05311392);
   h__Zjets->SetBinError(4,0.3457977);
   h__Zjets->SetBinError(5,0.03924024);
   h__Zjets->SetBinError(6,0.03412604);
   h__Zjets->SetBinError(7,0.02006078);
   h__Zjets->SetBinError(9,0.01405187);
   h__Zjets->SetEntries(145);
   h__Zjets->SetStats(0);

   ci = TColor::GetColor("#006600");
   h__Zjets->SetFillColor(ci);

   ci = TColor::GetColor("#006600");
   h__Zjets->SetLineColor(ci);
   h__Zjets->SetLineWidth(2);

   ci = TColor::GetColor("#006600");
   h__Zjets->SetMarkerColor(ci);
   h__Zjets->GetXaxis()->SetNdivisions(505);
   h__Zjets->GetXaxis()->SetLabelFont(42);
   h__Zjets->GetXaxis()->SetLabelSize(0.07);
   h__Zjets->GetXaxis()->SetTitleSize(0.07);
   h__Zjets->GetXaxis()->SetTitleOffset(1.1);
   h__Zjets->GetXaxis()->SetTitleFont(42);
   h__Zjets->GetYaxis()->SetNdivisions(505);
   h__Zjets->GetYaxis()->SetLabelFont(42);
   h__Zjets->GetYaxis()->SetLabelSize(0.07);
   h__Zjets->GetYaxis()->SetTitleSize(0.07);
   h__Zjets->GetYaxis()->SetTitleOffset(1.3);
   h__Zjets->GetYaxis()->SetTitleFont(42);
   h__Zjets->GetZaxis()->SetLabelFont(42);
   h__Zjets->GetZaxis()->SetLabelSize(0.035);
   h__Zjets->GetZaxis()->SetTitleSize(0.035);
   h__Zjets->GetZaxis()->SetTitleFont(42);
   h_stack->Add(h__Zjets,"");
   Double_t xAxis4[11] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h__Top = new TH1D("h__Top","",10, xAxis4);
   h__Top->SetBinContent(3,0.4126902);
   h__Top->SetBinContent(4,0.7377826);
   h__Top->SetBinContent(6,0.000225774);
   h__Top->SetBinContent(10,0.002123369);
   h__Top->SetBinError(3,0.411423);
   h__Top->SetBinError(4,0.7377826);
   h__Top->SetBinError(6,0.000225774);
   h__Top->SetBinError(10,0.002123369);
   h__Top->SetEntries(54);
   h__Top->SetStats(0);

   ci = TColor::GetColor("#3366cc");
   h__Top->SetFillColor(ci);

   ci = TColor::GetColor("#3366cc");
   h__Top->SetLineColor(ci);
   h__Top->SetLineWidth(2);

   ci = TColor::GetColor("#3366cc");
   h__Top->SetMarkerColor(ci);
   h__Top->GetXaxis()->SetNdivisions(505);
   h__Top->GetXaxis()->SetLabelFont(42);
   h__Top->GetXaxis()->SetLabelSize(0.07);
   h__Top->GetXaxis()->SetTitleSize(0.07);
   h__Top->GetXaxis()->SetTitleOffset(1.1);
   h__Top->GetXaxis()->SetTitleFont(42);
   h__Top->GetYaxis()->SetNdivisions(505);
   h__Top->GetYaxis()->SetLabelFont(42);
   h__Top->GetYaxis()->SetLabelSize(0.07);
   h__Top->GetYaxis()->SetTitleSize(0.07);
   h__Top->GetYaxis()->SetTitleOffset(1.3);
   h__Top->GetYaxis()->SetTitleFont(42);
   h__Top->GetZaxis()->SetLabelFont(42);
   h__Top->GetZaxis()->SetLabelSize(0.035);
   h__Top->GetZaxis()->SetTitleSize(0.035);
   h__Top->GetZaxis()->SetTitleFont(42);
   h_stack->Add(h__Top,"");
   Double_t xAxis5[11] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h__WWjets = new TH1D("h__WWjets","",10, xAxis5);
   h__WWjets->SetBinContent(3,0.8860104);
   h__WWjets->SetBinContent(4,0.9653068);
   h__WWjets->SetBinContent(5,0.1365364);
   h__WWjets->SetBinContent(6,0.1067374);
   h__WWjets->SetBinContent(7,0.05912144);
   h__WWjets->SetBinContent(10,0.03329655);
   h__WWjets->SetBinError(3,0.2162053);
   h__WWjets->SetBinError(4,0.2215367);
   h__WWjets->SetBinError(5,0.0970026);
   h__WWjets->SetBinError(6,0.0757532);
   h__WWjets->SetBinError(7,0.05912144);
   h__WWjets->SetBinError(10,0.03329655);
   h__WWjets->SetEntries(52);
   h__WWjets->SetStats(0);

   ci = TColor::GetColor("#000066");
   h__WWjets->SetFillColor(ci);

   ci = TColor::GetColor("#000066");
   h__WWjets->SetLineColor(ci);
   h__WWjets->SetLineWidth(2);

   ci = TColor::GetColor("#000066");
   h__WWjets->SetMarkerColor(ci);
   h__WWjets->GetXaxis()->SetNdivisions(505);
   h__WWjets->GetXaxis()->SetLabelFont(42);
   h__WWjets->GetXaxis()->SetLabelSize(0.07);
   h__WWjets->GetXaxis()->SetTitleSize(0.07);
   h__WWjets->GetXaxis()->SetTitleOffset(1.1);
   h__WWjets->GetXaxis()->SetTitleFont(42);
   h__WWjets->GetYaxis()->SetNdivisions(505);
   h__WWjets->GetYaxis()->SetLabelFont(42);
   h__WWjets->GetYaxis()->SetLabelSize(0.07);
   h__WWjets->GetYaxis()->SetTitleSize(0.07);
   h__WWjets->GetYaxis()->SetTitleOffset(1.3);
   h__WWjets->GetYaxis()->SetTitleFont(42);
   h__WWjets->GetZaxis()->SetLabelFont(42);
   h__WWjets->GetZaxis()->SetLabelSize(0.035);
   h__WWjets->GetZaxis()->SetTitleSize(0.035);
   h__WWjets->GetZaxis()->SetTitleFont(42);
   h_stack->Add(h__WWjets,"");
   Double_t xAxis6[11] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h__Higgs = new TH1D("h__Higgs","",10, xAxis6);
   h__Higgs->SetBinContent(3,0.05032606);
   h__Higgs->SetBinContent(4,0.06525523);
   h__Higgs->SetBinContent(5,0.02751728);
   h__Higgs->SetBinContent(6,0.0184111);
   h__Higgs->SetBinContent(8,0.008923499);
   h__Higgs->SetBinError(3,0.01878047);
   h__Higgs->SetBinError(4,0.02096276);
   h__Higgs->SetBinError(5,0.01379651);
   h__Higgs->SetBinError(6,0.01065476);
   h__Higgs->SetBinError(8,0.008923499);
   h__Higgs->SetEntries(38);
   h__Higgs->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   h__Higgs->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   h__Higgs->SetLineColor(ci);
   h__Higgs->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   h__Higgs->SetMarkerColor(ci);
   h__Higgs->GetXaxis()->SetNdivisions(505);
   h__Higgs->GetXaxis()->SetLabelFont(42);
   h__Higgs->GetXaxis()->SetLabelSize(0.07);
   h__Higgs->GetXaxis()->SetTitleSize(0.07);
   h__Higgs->GetXaxis()->SetTitleOffset(1.1);
   h__Higgs->GetXaxis()->SetTitleFont(42);
   h__Higgs->GetYaxis()->SetNdivisions(505);
   h__Higgs->GetYaxis()->SetLabelFont(42);
   h__Higgs->GetYaxis()->SetLabelSize(0.07);
   h__Higgs->GetYaxis()->SetTitleSize(0.07);
   h__Higgs->GetYaxis()->SetTitleOffset(1.3);
   h__Higgs->GetYaxis()->SetTitleFont(42);
   h__Higgs->GetZaxis()->SetLabelFont(42);
   h__Higgs->GetZaxis()->SetLabelSize(0.035);
   h__Higgs->GetZaxis()->SetTitleSize(0.035);
   h__Higgs->GetZaxis()->SetTitleFont(42);
   h_stack->Add(h__Higgs,"");
   h_stack->Draw("hist");
   Double_t xAxis7[11] = {0, 50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h__SUSY_no0 = new TH1D("h__SUSY_no0","",10, xAxis7);
   h__SUSY_no0->SetBinContent(3,0.4196464);
   h__SUSY_no0->SetBinContent(4,0.6736728);
   h__SUSY_no0->SetBinContent(5,1.135247);
   h__SUSY_no0->SetBinContent(6,0.5928689);
   h__SUSY_no0->SetBinContent(7,0.4218087);
   h__SUSY_no0->SetBinContent(8,0.1225222);
   h__SUSY_no0->SetBinContent(10,0.1359002);
   h__SUSY_no0->SetBinError(3,0.1546851);
   h__SUSY_no0->SetBinError(4,0.2080488);
   h__SUSY_no0->SetBinError(5,0.2704603);
   h__SUSY_no0->SetBinError(6,0.1851893);
   h__SUSY_no0->SetBinError(7,0.1606636);
   h__SUSY_no0->SetBinError(8,0.086668);
   h__SUSY_no0->SetBinError(10,0.09610505);
   h__SUSY_no0->SetBinError(11,0.06701629);
   h__SUSY_no0->SetEntries(63);
   h__SUSY_no0->SetStats(0);

   ci = TColor::GetColor("#660000");
   h__SUSY_no0->SetLineColor(ci);
   h__SUSY_no0->SetLineStyle(2);
   h__SUSY_no0->SetLineWidth(3);

   ci = TColor::GetColor("#660000");
   h__SUSY_no0->SetMarkerColor(ci);
   h__SUSY_no0->GetXaxis()->SetNdivisions(505);
   h__SUSY_no0->GetXaxis()->SetLabelFont(42);
   h__SUSY_no0->GetXaxis()->SetLabelSize(0.07);
   h__SUSY_no0->GetXaxis()->SetTitleSize(0.07);
   h__SUSY_no0->GetXaxis()->SetTitleOffset(1.1);
   h__SUSY_no0->GetXaxis()->SetTitleFont(42);
   h__SUSY_no0->GetYaxis()->SetNdivisions(505);
   h__SUSY_no0->GetYaxis()->SetLabelFont(42);
   h__SUSY_no0->GetYaxis()->SetLabelSize(0.07);
   h__SUSY_no0->GetYaxis()->SetTitleSize(0.07);
   h__SUSY_no0->GetYaxis()->SetTitleOffset(1.3);
   h__SUSY_no0->GetYaxis()->SetTitleFont(42);
   h__SUSY_no0->GetZaxis()->SetLabelFont(42);
   h__SUSY_no0->GetZaxis()->SetLabelSize(0.035);
   h__SUSY_no0->GetZaxis()->SetTitleSize(0.035);
   h__SUSY_no0->GetZaxis()->SetTitleFont(42);
   h__SUSY_no0->Draw("samehist");
   
   TLegend *leg = new TLegend(0.71,0.68,0.91,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("h__QCD","QCD","f");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#cccc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h__Wjets","W","f");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h__Zjets","ZX","f");

   ci = TColor::GetColor("#006600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h__Top","Top","f");

   ci = TColor::GetColor("#3366cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#3366cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h__WWjets","WW","f");

   ci = TColor::GetColor("#000066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000066");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h__Higgs","Higgs","f");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h__SUSY_no0","SUSY","f");

   ci = TColor::GetColor("#660000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#660000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1F *h___1 = new TH1F("h___1","",10,0,500);
   h___1->SetMinimum(0.02123974);
   h___1->SetMaximum(39.3647);
   h___1->SetDirectory(0);
   h___1->SetStats(0);
   h___1->SetLineWidth(2);
   h___1->GetXaxis()->SetNdivisions(505);
   h___1->GetXaxis()->SetLabelFont(42);
   h___1->GetXaxis()->SetLabelSize(0.07);
   h___1->GetXaxis()->SetTitleSize(0.07);
   h___1->GetXaxis()->SetTitleOffset(1.1);
   h___1->GetXaxis()->SetTitleFont(42);
   h___1->GetYaxis()->SetNdivisions(505);
   h___1->GetYaxis()->SetLabelFont(42);
   h___1->GetYaxis()->SetLabelSize(0.07);
   h___1->GetYaxis()->SetTitleSize(0.07);
   h___1->GetYaxis()->SetTitleOffset(1.3);
   h___1->GetYaxis()->SetTitleFont(42);
   h___1->GetZaxis()->SetLabelFont(42);
   h___1->GetZaxis()->SetLabelSize(0.035);
   h___1->GetZaxis()->SetTitleSize(0.035);
   h___1->GetZaxis()->SetTitleFont(42);
   h___1->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.18,0.943,"");
tex->SetNDC();
   tex->SetTextSize(0.0305);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.614094,0.9440559,"#sqrt{s} = 8 TeV, L = 19.60 fb^{-1}");
tex->SetNDC();
   tex->SetTextSize(0.0305);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *h___2 = new TH1F("h___2","",10,0,500);
   h___2->SetMinimum(0.02123974);
   h___2->SetMaximum(39.3647);
   h___2->SetDirectory(0);
   h___2->SetStats(0);
   h___2->SetLineWidth(2);
   h___2->GetXaxis()->SetTitle("tauMT");
   h___2->GetXaxis()->SetNdivisions(505);
   h___2->GetXaxis()->SetLabelFont(42);
   h___2->GetXaxis()->SetLabelSize(0.05);
   h___2->GetXaxis()->SetTitleSize(0.05);
   h___2->GetXaxis()->SetTitleOffset(1.1);
   h___2->GetXaxis()->SetTitleFont(42);
   h___2->GetYaxis()->SetTitle("Events");
   h___2->GetYaxis()->SetNdivisions(505);
   h___2->GetYaxis()->SetLabelFont(42);
   h___2->GetYaxis()->SetLabelSize(0.05);
   h___2->GetYaxis()->SetTitleSize(0.05);
   h___2->GetYaxis()->SetTitleOffset(1.47);
   h___2->GetYaxis()->SetTitleFont(42);
   h___2->GetZaxis()->SetLabelFont(42);
   h___2->GetZaxis()->SetLabelSize(0.035);
   h___2->GetZaxis()->SetTitleSize(0.035);
   h___2->GetZaxis()->SetTitleFont(42);
   h___2->Draw("sameaxis");
      tex = new TLatex(5.350986,132.5949,"MT2 > 90");
   tex->SetTextSize(0.03146853);
   tex->SetLineWidth(2);
   tex->Draw();
   muTau_log_comp_overlay->Modified();
   muTau_log_comp_overlay->cd();
   muTau_log_comp_overlay->SetSelected(muTau_log_comp_overlay);
   muTau_log_comp_overlay->ToggleToolBar();
}
