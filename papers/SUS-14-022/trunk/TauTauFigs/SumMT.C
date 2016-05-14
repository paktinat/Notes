void SumMT(){
  //=========Macro generated from canvas: TBD_flipped_log_comp_overlayc_ratio/
  //=========  (Wed Aug 12 16:37:53 2015) by ROOT version5.34/03
  TCanvas *TBD_flipped_log_comp_overlayc_ratio = new TCanvas("SumMT_SSQCD", "",3,26,600,600);
  gStyle->SetOptFit(1);
  TBD_flipped_log_comp_overlayc_ratio->Range(0,0,1,1);
  TBD_flipped_log_comp_overlayc_ratio->SetFillColor(0);
  TBD_flipped_log_comp_overlayc_ratio->SetBorderMode(0);
  TBD_flipped_log_comp_overlayc_ratio->SetBorderSize(2);
  TBD_flipped_log_comp_overlayc_ratio->SetLeftMargin(0.18);
  TBD_flipped_log_comp_overlayc_ratio->SetRightMargin(0.08);
  TBD_flipped_log_comp_overlayc_ratio->SetTopMargin(0.07);
  TBD_flipped_log_comp_overlayc_ratio->SetBottomMargin(0.17);
  TBD_flipped_log_comp_overlayc_ratio->SetFrameBorderMode(0);
  TBD_flipped_log_comp_overlayc_ratio->SetFrameBorderSize(0);
  
  TBD_flipped_log_comp_overlayc_ratio->SetLogy();

  // ------------>Primitives in pad: TBD_flipped_log_comp_overlay_plotpad
  // TPad *TBD_flipped_log_comp_overlay_plotpad = new TPad("TBD_flipped_log_comp_overlay_plotpad", "Pad containing the overlay plot",0,0.211838,1,1);
  // TBD_flipped_log_comp_overlay_plotpad->Draw();
  // TBD_flipped_log_comp_overlay_plotpad->cd();
  // TBD_flipped_log_comp_overlay_plotpad->Range(66.62215,-2.606783,320.2937,3.16839);
  // TBD_flipped_log_comp_overlay_plotpad->SetFillColor(0);
  // TBD_flipped_log_comp_overlay_plotpad->SetFillStyle(4000);
  // TBD_flipped_log_comp_overlay_plotpad->SetBorderMode(0);
  // TBD_flipped_log_comp_overlay_plotpad->SetBorderSize(2);
  // TBD_flipped_log_comp_overlay_plotpad->SetLogy();
  // TBD_flipped_log_comp_overlay_plotpad->SetLeftMargin(0.131579);
  // TBD_flipped_log_comp_overlay_plotpad->SetRightMargin(0.08);
  // TBD_flipped_log_comp_overlay_plotpad->SetTopMargin(0.06895515);
  // TBD_flipped_log_comp_overlay_plotpad->SetBottomMargin(0.07206074);
  // TBD_flipped_log_comp_overlay_plotpad->SetFrameLineWidth(3);
  // TBD_flipped_log_comp_overlay_plotpad->SetFrameBorderMode(0);
  // TBD_flipped_log_comp_overlay_plotpad->SetFrameBorderSize(0);
  // TBD_flipped_log_comp_overlay_plotpad->SetFrameLineWidth(3);
  // TBD_flipped_log_comp_overlay_plotpad->SetFrameBorderMode(0);
  // TBD_flipped_log_comp_overlay_plotpad->SetFrameBorderSize(0);
   
  THStack *h_stack = new THStack();
  h_stack->SetName("h_stack");
  h_stack->SetTitle("");
  h_stack->SetMinimum(0.02);
  h_stack->SetMaximum(320);
   
  TH1F *h_stack_stack_1 = new TH1F("h_stack_stack_1","",4,100,300);
  h_stack_stack_1->SetMinimum(0.006447329);
  h_stack_stack_1->SetMaximum(589.0637);
  h_stack_stack_1->SetDirectory(0);
  h_stack_stack_1->SetStats(0);
  h_stack_stack_1->SetLineWidth(2);
  h_stack_stack_1->GetXaxis()->SetTitle("#Sigma m_{T}^{#tau_{i}}");
  h_stack_stack_1->GetXaxis()->SetNdivisions(505);
  h_stack_stack_1->GetXaxis()->SetLabelFont(42);
  h_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
  h_stack_stack_1->GetXaxis()->SetTitleSize(0.05);
  h_stack_stack_1->GetXaxis()->SetTitleOffset(1.1);
  h_stack_stack_1->GetXaxis()->SetTitleFont(42);
  h_stack_stack_1->GetYaxis()->SetTitle("Events");
  h_stack_stack_1->GetYaxis()->SetNdivisions(505);
  h_stack_stack_1->GetYaxis()->SetLabelFont(42);
  h_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
  h_stack_stack_1->GetYaxis()->SetTitleSize(0.05);
  h_stack_stack_1->GetYaxis()->SetTitleOffset(1.3);
  h_stack_stack_1->GetYaxis()->SetTitleFont(42);
  h_stack_stack_1->GetZaxis()->SetLabelFont(42);
  h_stack_stack_1->GetZaxis()->SetLabelSize(0.035);
  h_stack_stack_1->GetZaxis()->SetTitleSize(0.035);
  h_stack_stack_1->GetZaxis()->SetTitleFont(42);
  h_stack->SetHistogram(h_stack_stack_1);
   
  Double_t xAxis1[5] = {100, 150, 200, 250, 300}; 
  TH1D *h__MC = new TH1D("h__MC","",4, xAxis1);
   
  TH1D *h__Higgs = new TH1D("h__Higgs","",4, xAxis1);
  h__Higgs->SetBinContent(1,0.07092376);
  h__Higgs->SetBinContent(2,0.318799);
  h__Higgs->SetBinContent(3,0.07742544);
  h__Higgs->SetBinContent(4,0.0748884);
  h__Higgs->SetBinError(1,0.03511451);
  h__Higgs->SetBinError(2,0.08018868);
  h__Higgs->SetBinError(3,0.03262404);
  h__Higgs->SetBinError(4,0.02342941);
  h__Higgs->SetEntries(82);
  h__Higgs->SetStats(0);

  Int_t ci;   // for color index setting
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
  Double_t xAxis2[5] = {100, 150, 200, 250, 300}; 
   
  TH1D *h__WWjets = new TH1D("h__WWjets","",4, xAxis2);
  h__WWjets->SetBinContent(2,0.270886);
  h__WWjets->SetBinContent(3,0.4698851);
  h__WWjets->SetBinContent(4,0.1483787);
  h__WWjets->SetBinError(2,0.1038165);
  h__WWjets->SetBinError(3,0.1340059);
  h__WWjets->SetBinError(4,0.0700099);
  h__WWjets->SetEntries(32);
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
  Double_t xAxis3[5] = {100, 150, 200, 250, 300}; 
   
  TH1D *h__Top = new TH1D("h__Top","",4, xAxis3);
  h__Top->SetBinContent(2,0.2561433);
  h__Top->SetBinContent(3,0.001803654);
  h__Top->SetBinContent(4,0.5268298);
  h__Top->SetBinError(2,0.2561433);
  h__Top->SetBinError(3,0.001803654);
  h__Top->SetBinError(4,0.5268298);
  h__Top->SetEntries(51);
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
  Double_t xAxis4[5] = {100, 150, 200, 250, 300}; 
   
  TH1D *h__Zjets = new TH1D("h__Zjets","",4, xAxis4);
  h__Zjets->SetBinContent(1,1.158208);
  h__Zjets->SetBinContent(2,4.615497);
  h__Zjets->SetBinContent(3,1.13796);
  h__Zjets->SetBinContent(4,0.8086002);
  h__Zjets->SetBinError(1,0.6784595);
  h__Zjets->SetBinError(2,1.398525);
  h__Zjets->SetBinError(3,0.3865141);
  h__Zjets->SetBinError(4,0.5636718);
  h__Zjets->SetBinError(5,0.01049275);
  h__Zjets->SetEntries(203);
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
  Double_t xAxis5[5] = {100, 150, 200, 250, 300}; 
   
  TH1D *h__Wjets = new TH1D("h__Wjets","",4, xAxis5);
  h__Wjets->SetBinContent(2,15.56548);
  h__Wjets->SetBinContent(3,13.13984);
  h__Wjets->SetBinContent(4,0.4286065);
  h__Wjets->SetBinError(2,4.397508);
  h__Wjets->SetBinError(3,4.379561);
  h__Wjets->SetBinError(4,0.4027816);
  h__Wjets->SetEntries(60);
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
  Double_t xAxis6[5] = {100, 150, 200, 250, 300}; 
   
  TH1D *h__QCD = new TH1D("h__QCD","",4, xAxis6);
  h__QCD->SetBinContent(1,11.93606);
  h__QCD->SetBinContent(2,24.76747);
  h__QCD->SetBinContent(3,7.179674);
  h__QCD->SetBinContent(4,-0.04037426);
  h__QCD->SetBinError(1,3.464624);
  h__QCD->SetBinError(2,5.845861);
  h__QCD->SetBinError(3,3.758563);
  h__QCD->SetBinError(4,0.01697944);
  h__QCD->SetBinError(5,0.00151102);
  h__QCD->SetEntries(31.87465);
  //h__QCD->SetEntries(16);
  h__QCD->SetStats(0);

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
  Double_t xAxis7[5] = {100, 150, 200, 250, 300}; 



  h_stack->Add(h__Higgs,"");
  h_stack->Add(h__WWjets,"");
  h_stack->Add(h__Top,"");
  h_stack->Add(h__Zjets,"");
  h_stack->Add(h__Wjets,"");
  h_stack->Add(h__QCD,"");
  h_stack->Draw("hist");

  h__MC->Add(h__Higgs);
  h__MC->Add(h__WWjets);
  h__MC->Add(h__Top);
  h__MC->Add(h__Zjets);
  h__MC->Add(h__Wjets);
  h__MC->Add(h__QCD);

  h__MC->SetLineColor(kWhite);
  h__MC->SetFillColor(kBlack);
  h__MC->SetFillStyle(3004);
  h__MC->SetStats(0);

  h__MC->Draw("E2 SAME");

  TH1D *h2_copy = new TH1D("h2_copy","",4, xAxis7);
  h2_copy->SetBinContent(1,15);
  h2_copy->SetBinContent(2,64);
  h2_copy->SetBinContent(3,13);
  h2_copy->SetBinContent(4,2);
  h2_copy->SetBinError(1,3.872983);
  h2_copy->SetBinError(2,8);
  h2_copy->SetBinError(3,3.605551);
  h2_copy->SetBinError(4,1.414214);
  h2_copy->SetMinimum(0.05);
  h2_copy->SetMaximum(320);
  h2_copy->SetEntries(110);
  h2_copy->SetStats(0);
  h2_copy->SetLineWidth(2);
  h2_copy->SetMarkerStyle(20);
  h2_copy->GetXaxis()->SetNdivisions(505);
  h2_copy->GetXaxis()->SetLabelFont(42);
  h2_copy->GetXaxis()->SetLabelSize(0.07);
  h2_copy->GetXaxis()->SetTitleSize(0.07);
  h2_copy->GetXaxis()->SetTitleOffset(1.1);
  h2_copy->GetXaxis()->SetTitleFont(42);
  h2_copy->GetYaxis()->SetNdivisions(505);
  h2_copy->GetYaxis()->SetLabelFont(42);
  h2_copy->GetYaxis()->SetLabelSize(0.07);
  h2_copy->GetYaxis()->SetTitleSize(0.07);
  h2_copy->GetYaxis()->SetTitleOffset(1.3);
  h2_copy->GetYaxis()->SetTitleFont(42);
  h2_copy->GetZaxis()->SetLabelFont(42);
  h2_copy->GetZaxis()->SetLabelSize(0.035);
  h2_copy->GetZaxis()->SetTitleSize(0.035);
  h2_copy->GetZaxis()->SetTitleFont(42);
  h2_copy->Draw("sameE");

  Double_t xAxis8[5] = {100, 150, 200, 250, 300}; 
   
  TH1D *h_susy = new TH1D("h_susy","",4, xAxis8);
  h_susy->SetBinContent(2,0.6868009);
  h_susy->SetBinContent(3,2.489492);
  h_susy->SetBinContent(4,3.597845);
  h_susy->SetBinError(2,0.1304177);
  h_susy->SetBinError(3,0.2751065);
  h_susy->SetBinError(4,0.3128613);
  h_susy->SetBinError(5,0.1757565);
  h_susy->SetEntries(415);
  h_susy->SetLineStyle(3);
  h_susy->SetLineWidth(4);
  h_susy->GetXaxis()->SetNdivisions(505);
  h_susy->GetXaxis()->SetLabelFont(42);
  h_susy->GetXaxis()->SetLabelSize(0.07);
  h_susy->GetXaxis()->SetTitleSize(0.07);
  h_susy->GetXaxis()->SetTitleOffset(1.1);
  h_susy->GetXaxis()->SetTitleFont(42);
  h_susy->GetYaxis()->SetNdivisions(505);
  h_susy->GetYaxis()->SetLabelFont(42);
  h_susy->GetYaxis()->SetLabelSize(0.07);
  h_susy->GetYaxis()->SetTitleSize(0.07);
  h_susy->GetYaxis()->SetTitleOffset(1.3);
  h_susy->GetYaxis()->SetTitleFont(42);
  h_susy->GetZaxis()->SetLabelFont(42);
  h_susy->GetZaxis()->SetLabelSize(0.035);
  h_susy->GetZaxis()->SetTitleSize(0.035);
  h_susy->GetZaxis()->SetTitleFont(42);
  h_susy->Draw("samehist");

  TLatex *   tex ;
  tex = new TLatex(0.68,0.943,"#sqrt{s} = 8 TeV, L = 18.1 fb^{-1}");
  tex->SetNDC();
  tex->SetTextSize(0.0305);
  tex->SetLineWidth(2);
  tex->Draw();
  tex = new TLatex(0.22,0.85,"CMS Preliminary");
  tex->SetNDC();
  tex->SetLineWidth(2);
  tex->Draw();
   
  
  TLegend *leg = new TLegend(0.65,0.65,0.91,0.92,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextFont(62);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(2);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);

  TLegendEntry *entry;
  entry=leg->AddEntry(h2_copy,"data","pl");
  entry=leg->AddEntry(h__QCD,"QCD multijet","f");
  entry=leg->AddEntry(h__Wjets,"W","f");
  entry=leg->AddEntry(h__Zjets,"ZX","f");
  entry=leg->AddEntry(h__Top,"Top","f");
  entry=leg->AddEntry(h__WWjets,"WW","f");
  entry=leg->AddEntry(h__Higgs,"Higgs","f");
  entry=leg->AddEntry(h__MC,"Uncertainties","f");
  entry=leg->AddEntry(h_susy,"SUSY","f");
  leg->Draw();
}

// void Plot2(){  
//   // ------------>Primitives in pad: TBD_flipped_log_comp_overlay_ratiopad
//   TBD_flipped_log_comp_overlay_ratiopad = new TPad("TBD_flipped_log_comp_overlay_ratiopad", "Pad containing the ratio",0,0.01863354,0.9967105,0.2189441);
//   TBD_flipped_log_comp_overlay_ratiopad->Draw();
//   TBD_flipped_log_comp_overlay_ratiopad->cd();
//   TBD_flipped_log_comp_overlay_ratiopad->Range(66.21832,-0.8571431,318.9553,2.214286);
//   TBD_flipped_log_comp_overlay_ratiopad->SetFillColor(0);
//   TBD_flipped_log_comp_overlay_ratiopad->SetBorderMode(0);
//   TBD_flipped_log_comp_overlay_ratiopad->SetBorderSize(2);
//   TBD_flipped_log_comp_overlay_ratiopad->SetLeftMargin(0.1336634);
//   TBD_flipped_log_comp_overlay_ratiopad->SetRightMargin(0.075);
//   TBD_flipped_log_comp_overlay_ratiopad->SetTopMargin(0.06976745);
//   TBD_flipped_log_comp_overlay_ratiopad->SetBottomMargin(0.2790698);
//   TBD_flipped_log_comp_overlay_ratiopad->SetFrameLineWidth(3);
//   TBD_flipped_log_comp_overlay_ratiopad->SetFrameBorderMode(0);
//   TBD_flipped_log_comp_overlay_ratiopad->SetFrameBorderSize(0);
//   TBD_flipped_log_comp_overlay_ratiopad->SetFrameLineWidth(3);
//   TBD_flipped_log_comp_overlay_ratiopad->SetFrameBorderMode(0);
//   TBD_flipped_log_comp_overlay_ratiopad->SetFrameBorderSize(0);
//   Double_t xAxis9[5] = {100, 150, 200, 250, 300}; 
  
//   /* 
//      TH1D *h1_copy = new TH1D("h1_copy","",4, xAxis9);
//      h1_copy->SetBinContent(1,1);
//      h1_copy->SetBinContent(2,1);
//      h1_copy->SetBinContent(3,1);
//      h1_copy->SetBinContent(4,1);
//      h1_copy->SetBinError(1,0.7816663);
//      h1_copy->SetBinError(2,0.3109659);
//      h1_copy->SetBinError(3,0.419559);
//      h1_copy->SetBinError(4,0.6215861);
//   */
//   TH1F *h1_copy  = (TH1F*)h__MC->Clone();
//   h1_copy->Divide(h1_copy);

//   h1_copy->SetMinimum(0);
//   h1_copy->SetMaximum(2);
//   h1_copy->SetEntries(12.59742);
//   h1_copy->SetStats(0);
//   h1_copy->SetFillColor(1);
//   h1_copy->SetFillStyle(3004);
//   h1_copy->SetLineWidth(2);
//   h1_copy->GetXaxis()->SetTitle("#Sigma m_{T}^{#tau_{i}}");
//   h1_copy->GetXaxis()->SetNdivisions(505);
//   h1_copy->GetXaxis()->SetLabelFont(42);
//   h1_copy->GetXaxis()->SetLabelSize(0);
//   h1_copy->GetXaxis()->SetTitleSize(0.2);
//   h1_copy->GetXaxis()->SetTickLength(0.09);
//   h1_copy->GetXaxis()->SetTitleOffset(0.5);
//   h1_copy->GetXaxis()->SetTitleFont(42);
//   h1_copy->GetYaxis()->SetTitle("Data / MC");
//   h1_copy->GetYaxis()->SetNdivisions(509);
//   h1_copy->GetYaxis()->SetLabelFont(42);
//   h1_copy->GetYaxis()->SetLabelSize(0.19);
//   h1_copy->GetYaxis()->SetTitleSize(0.18);
//   h1_copy->GetYaxis()->SetTitleOffset(0.36);
//   h1_copy->GetYaxis()->SetTitleFont(42);
//   h1_copy->GetZaxis()->SetLabelFont(42);
//   h1_copy->GetZaxis()->SetLabelSize(0.035);
//   h1_copy->GetZaxis()->SetTitleSize(0.035);
//   h1_copy->GetZaxis()->SetTitleFont(42);
//   h1_copy->Draw("E2");
//   Double_t xAxis10[5] = {100, 150, 200, 250, 300}; 
  
//   /* 
//      TH1D *h2_copy__2 = new TH1D("h2_copy__2","",4, xAxis10);
//      h2_copy__2->SetBinContent(1,12.20374);
//      h2_copy__2->SetBinContent(2,3.043734);
//      h2_copy__2->SetBinContent(3,0.8767837);
//      h2_copy__2->SetBinContent(4,1.006389);
//      h2_copy__2->SetBinError(1,7.444957);
//      h2_copy__2->SetBinError(2,0.7698595);
//      h2_copy__2->SetBinError(3,0.3560842);
//      h2_copy__2->SetBinError(4,0.8378963);
//   */
//   TH1F *h2_copy__2  = (TH1F*)h2_copy->Clone();
//   h2_copy__2->Divide(h__MC);

//   h2_copy__2->SetMinimum(0.4);
//   h2_copy__2->SetMaximum(3);
//   h2_copy__2->SetEntries(5.162083);
//   h2_copy__2->SetDirectory(0);
//   h2_copy__2->SetStats(0);
//   h2_copy__2->SetLineWidth(2);
//   h2_copy__2->SetMarkerStyle(20);
//   h2_copy__2->GetXaxis()->SetNdivisions(505);
//   h2_copy__2->GetXaxis()->SetLabelFont(42);
//   h2_copy__2->GetXaxis()->SetLabelSize(0.07);
//   h2_copy__2->GetXaxis()->SetTitleSize(0.07);
//   h2_copy__2->GetXaxis()->SetTitleOffset(1.1);
//   h2_copy__2->GetXaxis()->SetTitleFont(42);
//   h2_copy__2->GetYaxis()->SetNdivisions(505);
//   h2_copy__2->GetYaxis()->SetLabelFont(42);
//   h2_copy__2->GetYaxis()->SetLabelSize(0.07);
//   h2_copy__2->GetYaxis()->SetTitleSize(0.07);
//   h2_copy__2->GetYaxis()->SetTitleOffset(1.3);
//   h2_copy__2->GetYaxis()->SetTitleFont(42);
//   h2_copy__2->GetZaxis()->SetLabelFont(42);
//   h2_copy__2->GetZaxis()->SetLabelSize(0.035);
//   h2_copy__2->GetZaxis()->SetTitleSize(0.035);
//   h2_copy__2->GetZaxis()->SetTitleFont(42);
//   h2_copy__2->Draw("Esame");
//   TLine *line = new TLine(100,1,300,1);
//   line->SetLineStyle(7);
//   line->SetLineWidth(2);
//   line->Draw();
//   Double_t xAxis11[5] = {100, 150, 200, 250, 300}; 
   
//   TH1D *h1_copy__3 = new TH1D("h1_copy__3","",4, xAxis11);
//   h1_copy__3->SetBinContent(1,1);
//   h1_copy__3->SetBinContent(2,1);
//   h1_copy__3->SetBinContent(3,1);
//   h1_copy__3->SetBinContent(4,1);
//   h1_copy__3->SetBinError(1,0.7816663);
//   h1_copy__3->SetBinError(2,0.3109659);
//   h1_copy__3->SetBinError(3,0.419559);
//   h1_copy__3->SetBinError(4,0.6215861);
//   h1_copy__3->SetMinimum(0);
//   h1_copy__3->SetMaximum(2);
//   h1_copy__3->SetEntries(12.59742);
//   h1_copy__3->SetDirectory(0);
//   h1_copy__3->SetStats(0);
//   h1_copy__3->SetFillColor(1);
//   h1_copy__3->SetFillStyle(3004);
//   h1_copy__3->SetLineWidth(2);
//   h1_copy__3->GetXaxis()->SetTitle("#Sigma m_{T}^{#tau_{i}}");
//   h1_copy__3->GetXaxis()->SetNdivisions(505);
//   h1_copy__3->GetXaxis()->SetLabelFont(42);
//   h1_copy__3->GetXaxis()->SetLabelSize(0);
//   h1_copy__3->GetXaxis()->SetTitleSize(0.2);
//   h1_copy__3->GetXaxis()->SetTickLength(0.09);
//   h1_copy__3->GetXaxis()->SetTitleOffset(0.5);
//   h1_copy__3->GetXaxis()->SetTitleFont(42);
//   h1_copy__3->GetYaxis()->SetTitle("Data / MC");
//   h1_copy__3->GetYaxis()->SetNdivisions(509);
//   h1_copy__3->GetYaxis()->SetLabelFont(42);
//   h1_copy__3->GetYaxis()->SetLabelSize(0.19);
//   h1_copy__3->GetYaxis()->SetTitleSize(0.18);
//   h1_copy__3->GetYaxis()->SetTitleOffset(0.36);
//   h1_copy__3->GetYaxis()->SetTitleFont(42);
//   h1_copy__3->GetZaxis()->SetLabelFont(42);
//   h1_copy__3->GetZaxis()->SetLabelSize(0.035);
//   h1_copy__3->GetZaxis()->SetTitleSize(0.035);
//   h1_copy__3->GetZaxis()->SetTitleFont(42);
//   h1_copy__3->Draw("sameaxis");
//   TBD_flipped_log_comp_overlay_ratiopad->Modified();
//   TBD_flipped_log_comp_overlayc_ratio->cd();
//   TBD_flipped_log_comp_overlayc_ratio->Modified();
//   TBD_flipped_log_comp_overlayc_ratio->cd();
//   TBD_flipped_log_comp_overlayc_ratio->SetSelected(TBD_flipped_log_comp_overlayc_ratio);
// }
