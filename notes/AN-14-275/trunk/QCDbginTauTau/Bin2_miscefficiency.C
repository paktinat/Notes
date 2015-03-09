{
//=========Macro generated from canvas: QCDEstimation/QCDEstimation
//=========  (Sun Mar  8 14:38:42 2015) by ROOT version5.34/03
   TCanvas *QCDEstimation = new TCanvas("QCDEstimation", "QCDEstimation",333,65,700,502);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   QCDEstimation->Range(0,0,1,1);
   QCDEstimation->SetFillColor(0);
   QCDEstimation->SetBorderMode(0);
   QCDEstimation->SetBorderSize(2);
   QCDEstimation->SetLeftMargin(0.18);
   QCDEstimation->SetRightMargin(0.08);
   QCDEstimation->SetTopMargin(0.07);
   QCDEstimation->SetBottomMargin(0.17);
   QCDEstimation->SetFrameLineWidth(3);
   QCDEstimation->SetFrameBorderMode(0);
   QCDEstimation->SetFrameBorderSize(0);
  
// ------------>Primitives in pad: QCDEstimation_1
   TPad *QCDEstimation_1 = new TPad("QCDEstimation_1", "QCDEstimation_1",0.01,0.01,0.99,0.99);
   QCDEstimation_1->Draw();
   QCDEstimation_1->cd();
   QCDEstimation_1->Range(63.51351,-0.06496813,266.2162,0.4792383);
   QCDEstimation_1->SetFillColor(0);
   QCDEstimation_1->SetBorderMode(0);
   QCDEstimation_1->SetBorderSize(2);
   QCDEstimation_1->SetLeftMargin(0.18);
   QCDEstimation_1->SetRightMargin(0.08);
   QCDEstimation_1->SetTopMargin(0.07);
   QCDEstimation_1->SetBottomMargin(0.17);
   QCDEstimation_1->SetFrameLineWidth(3);
   QCDEstimation_1->SetFrameBorderMode(0);
   QCDEstimation_1->SetFrameBorderSize(0);
   QCDEstimation_1->SetFrameLineWidth(3);
   QCDEstimation_1->SetFrameBorderMode(0);
   QCDEstimation_1->SetFrameBorderSize(0);
   Double_t xAxis1[5] = {100, 125, 150, 200, 250}; 
   
   TH1D *hdatainregionQ1 = new TH1D("hdatainregionQ1","hdatainregionQ1",4, xAxis1);
   hdatainregionQ1->SetBinContent(1,0.3025514);
   hdatainregionQ1->SetBinContent(2,0.277504);
   hdatainregionQ1->SetBinContent(3,0.2681341);
   hdatainregionQ1->SetBinContent(4,0.1096587);
   hdatainregionQ1->SetBinContent(5,0.3740619);
   hdatainregionQ1->SetBinError(1,0.1188973);
   hdatainregionQ1->SetBinError(2,0.04553968);
   hdatainregionQ1->SetBinError(3,0.0323759);
   hdatainregionQ1->SetBinError(4,0.06335451);
   hdatainregionQ1->SetBinError(5,0.1316336);
   hdatainregionQ1->SetEntries(48.12969);
   hdatainregionQ1->SetLineColor(2);
   hdatainregionQ1->SetLineWidth(6);
   hdatainregionQ1->GetXaxis()->SetTitle("#Sigma m_{T}^{#tau_{i}}");
   hdatainregionQ1->GetXaxis()->SetNdivisions(505);
   hdatainregionQ1->GetXaxis()->SetLabelFont(42);
   hdatainregionQ1->GetXaxis()->SetLabelSize(0.07);
   hdatainregionQ1->GetXaxis()->SetTitleSize(0.07);
   hdatainregionQ1->GetXaxis()->SetTitleOffset(1.1);
   hdatainregionQ1->GetXaxis()->SetTitleFont(42);
   hdatainregionQ1->GetYaxis()->SetTitle("#Delta #Phi_{4}^{min}");
   hdatainregionQ1->GetYaxis()->SetNdivisions(505);
   hdatainregionQ1->GetYaxis()->SetLabelFont(42);
   hdatainregionQ1->GetYaxis()->SetLabelSize(0.07);
   hdatainregionQ1->GetYaxis()->SetTitleSize(0.07);
   hdatainregionQ1->GetYaxis()->SetTitleOffset(1.1);
   hdatainregionQ1->GetYaxis()->SetTitleFont(42);
   hdatainregionQ1->GetZaxis()->SetLabelFont(42);
   hdatainregionQ1->GetZaxis()->SetLabelSize(0.035);
   hdatainregionQ1->GetZaxis()->SetTitleSize(0.035);
   hdatainregionQ1->GetZaxis()->SetTitleFont(42);
   hdatainregionQ1->Draw("");
   QCDEstimation_1->Modified();
   QCDEstimation->cd();
   QCDEstimation->Modified();
   QCDEstimation->cd();
   QCDEstimation->SetSelected(QCDEstimation);
}
